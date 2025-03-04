#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_NON_TERMINALS 10
#define MAX_TERMINALS 10
#define MAX_PRODUCTIONS 20

typedef struct {
    char non_terminal;
    char first[MAX_TERMINALS];
    char follow[MAX_TERMINALS];
    char productions[MAX_PRODUCTIONS][MAX_TERMINALS];
    int production_count;
} NonTerminal;

NonTerminal grammar[MAX_NON_TERMINALS];
int non_terminal_count = 0;

// Utility functions
void add_to_set(char* set, char symbol) {
    if (strchr(set, symbol) == NULL) {
        int len = strlen(set);
        set[len] = symbol;
        set[len + 1] = '\0';
    }
}

void compute_first(NonTerminal* nt) {
    for (int i = 0; i < nt->production_count; i++) {
        char* production = nt->productions[i];
        char symbol = production[0];

        if (symbol >= 'a' && symbol <= 'z') {
            add_to_set(nt->first, symbol);
        } else {
            for (int j = 0; j < non_terminal_count; j++) {
                if (grammar[j].non_terminal == symbol) {
                    compute_first(&grammar[j]);
                    strcat(nt->first, grammar[j].first);
                }
            }
        }
    }
}

void compute_follow() {
    grammar[0].follow[0] = '$';
    grammar[0].follow[1] = '\0';

    bool changed;
    do {
        changed = false;
        for (int i = 0; i < non_terminal_count; i++) {
            NonTerminal* nt = &grammar[i];
            for (int j = 0; j < nt->production_count; j++) {
                char* production = nt->productions[j];
                int len = strlen(production);
                for (int k = 0; k < len; k++) {
                    char symbol = production[k];
                    if (symbol >= 'A' && symbol <= 'Z') {
                        if (k + 1 < len) {
                            char next_symbol = production[k + 1];
                            if (next_symbol >= 'a' && next_symbol <= 'z') {
                                add_to_set(grammar[symbol - 'A'].follow, next_symbol);
                            } else {
                                strcat(grammar[symbol - 'A'].follow, grammar[next_symbol - 'A'].first);
                            }
                        } else {
                            strcat(grammar[symbol - 'A'].follow, nt->follow);
                        }
                        changed = true;
                    }
                }
            }
        }
    } while (changed);
}

bool is_ll1() {
    for (int i = 0; i < non_terminal_count; i++) {
        NonTerminal* nt = &grammar[i];
        for (int j = 0; j < nt->production_count; j++) {
            for (int k = j + 1; k < nt->production_count; k++) {
                char* first1 = nt->productions[j];
                char* first2 = nt->productions[k];

                for (int l = 0; l < strlen(first1); l++) {
                    if (strchr(first2, first1[l]) != NULL) {
                        return false;
                    }
                }
            }
        }
    }
    return true;
}

void input_grammar() {
    printf("Enter the number of non-terminals: ");
    scanf("%d", &non_terminal_count);

    for (int i = 0; i < non_terminal_count; i++) {
        printf("Enter non-terminal %d: ", i + 1);
        scanf(" %c", &grammar[i].non_terminal);
        grammar[i].first[0] = '\0';
        grammar[i].follow[0] = '\0';
        grammar[i].production_count = 0;

        printf("Enter the number of productions for %c: ", grammar[i].non_terminal);
        int production_count;
        scanf("%d", &production_count);

        for (int j = 0; j < production_count; j++) {
            printf("Enter production %d for %c: ", j + 1, grammar[i].non_terminal);
            scanf("%s", grammar[i].productions[grammar[i].production_count++]);
        }
    }
}

int main() {
    input_grammar();

    for (int i = 0; i < non_terminal_count; i++) {
        compute_first(&grammar[i]);
    }

    compute_follow();

    if (is_ll1()) {
        printf("The grammar is LL(1).\n");
    } else {
        printf("The grammar is not LL(1).\n");
    }

    return 0;
}