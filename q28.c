// Check whether a number is Armstrong number or not
#include<stdio.h>
#include<math.h>
int main ()
{
int num,originalnum,n=0,remainder,sum=0;
printf("enter the number\n");
scanf("%d",&num);
originalnum =num;
while (originalnum != 0)
{ originalnum= originalnum / 10;
n++;
    
}
originalnum = num;
while (originalnum!= 0)
{
    remainder = originalnum % 10;
    sum += pow(remainder,n);
    originalnum = originalnum / 10;
}
if (num == sum)
{
    printf("%d is armstrong number",num);
}else
{
     printf("%d is not a armstrong number",num);
}


return 0;




}