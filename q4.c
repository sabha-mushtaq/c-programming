#include<stdio.h>
int main()
{
int a, b,c;
printf("enter two numbers to be swaped \n");
scanf("%d%d",&a,&b);
c= a;
a=b;
b=c;
printf("numbers after swaping %d and %d \n",a,b);
return 0;

}