// Check whether a number is prime or not
#include<stdio.h>
int main(){
int n,i,isPrime =1;
printf("enter n \n");
scanf("%d",&n);
if (n<=0)
{
   printf("%d is not prime \n",n);
   return 0;
}
for ( i = 2; i < n/2; i++)
{
    if (n % i == 0)
    {
        isPrime = 0;
        break;
    }
    
}
if (isPrime)
{
    printf("%d is prime \n",n);
}else
{
    printf("%d is not prime \n",n);
}







return 0;
}