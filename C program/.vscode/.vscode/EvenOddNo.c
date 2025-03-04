#include<stdio.h>
int main () {
    int number;
    printf("Enter the integer:");
    scanf("%d",&number);
   
if (number%2==0)
{
    printf("%d is a even integer.",number);
}else
{
    printf("%d is a odd integer.",number);
}
return 0;

}