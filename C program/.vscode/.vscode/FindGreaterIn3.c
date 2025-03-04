#include<stdio.h>
int main() {
    int a,b,c;
   printf("Enter Three Numbers: ");
   scanf("%d%d%d",&a,&b,&c);
   if (a>b && a >c)
   {
    printf("%d is Greater number",a);
   }
   if (b>a && b>c)
   {
    printf("%d is Greater number",b);
   }
   if (c>a && c>b)
   {
    printf("%d is Greater number",c);
   }
   if (a==b&&a==c)
   {
    printf(" all are equal");
   }
return 0;   
}
