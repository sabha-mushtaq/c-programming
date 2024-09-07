//Find product of series: 1 2 3 4 5 .... n
#include<stdio.h>
int main(){
int i,n,product=1;
printf("enter the number n \n");
scanf("%d",&n);
for ( i = 1; i <=n; i++)
{
    product*=i;
}
printf("%d \n",product);
return 0;



}