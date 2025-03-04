#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
 
 #define MAX_SIZE 100

 int mainstack[MAX_SIZE];
 int minstack[MAX_SIZE];
 int top = -1;
 int min_top=-1;

 void push(int element ) {
    if (top >=MAX_SIZE)
    {
        printf("Stack is full.\n");
    }
    top++;
    mainstack[top] = element;

    if(min_top ==-1 || element <= minstack[min_top]){
        min_top++;
        minstack[min_top]= element;
    }
  }
int pop() {
    if (top<0)
    {
        printf("Stack is empty.\n");
        return INT_MIN;
    }
    int element = mainstack[top];
    top--;

    if(element == minstack[min_top]) {
        min_top--;
    }
    return element;
}

int getMin() {
    if (min_top < 0) {
        printf("Stack is empty\n");
        return INT_MIN;
    }
    return mainstack[min_top];
}
void printstack(int *stack) {
    printf("Current stack element:\n");
    for(int i = 0; i <= top; i++){
        printf("%d",stack[i]);
    }
}
int main() {
    push(9);
    push(2);
    push(4);
    push(2);
    push(4);
    printstack(mainstack);
    printf("\nMinimum element: %d\n",getMin());
    pop();
    pop();
    printf("\nAfter removing two elements: \n");
    printstack(minstack);
    printf("\nMinimum elements: %d\n", getMin());
    push(1);
    printf("\nAfter adding one element:\n");
    printstack(mainstack);
    printf("\nMinimum element: %d\n",getMin());
    return 0;
}


