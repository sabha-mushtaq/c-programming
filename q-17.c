//Find sum of series: 1 2 3 4 5 .... n
#include<stdio.h>
int main(){
int n,i,sum=0;
printf("enter n \n");
scanf("%d",&n);
for ( i = 1; i <=n; i++)
{
   sum+=i;
}
printf("%d \n",sum);


return 0;
}