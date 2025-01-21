#include <stdio.h>

int main(){
int age;
printf("Enter your age\n");
scanf("%d", &age);
printf("Your have entered %d as your age is\n",age);
if (age>=18)
{
printf("You can vote");
}
else if(age>=10)
{
  printf("Your age is between 10 to 18,You can vote for child");
}
else if (age>=1)
{
    printf("Your age is between 3 to 5,You can vote for babys");

}
return 0;
}