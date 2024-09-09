// Display the digits of any natural number in reverse order [Use while loop]
#include<stdio.h>
int main ()
{
int n,i,remainder;
printf("enter n \n");
scanf("%d",&n);
while (n>0)
{
   remainder = n%10;
   printf("%d",remainder);
   n =n/10;
}

return 0;




}