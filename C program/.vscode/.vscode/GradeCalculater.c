#include<stdio.h>
int main () {
    int marks;
    printf("Enter your marks?: ");
    scanf("%d",&marks);
    if (marks > 85 &&  marks <=100 )
    {
        printf("Congrates!,You score exallent marks,your grade is O");
        
    }
    else if (marks >75 && marks <=85)
    {
        printf("Your scored grade is :A");
    }
    else if (marks > 65&& marks <=75)
    {
        printf("Your scored grade is : B+");

    }
    else if (marks > 50 && marks <= 65)
    {
        printf("Your scored grade is : B");
    }
    else if (marks > 30 && marks <= 35)
    {
        printf("Your scored grade is : P");
    }
    else
    {
        printf("BHAK BSDK, gandu sala!");
    }
    return 0;
    
}