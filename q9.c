// Use ternary operator
#include<stdio.h>
int main()
{
int a;
printf("enter the number to check if it is even or odd \n");
scanf("%d",&a);
a%2==0 ? printf("%d is even \n",a) : printf("%d is odd \n",a);

return 0;
}