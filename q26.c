// Find sum of series: 1 + 1/2 + 1/4 + 1/6 + ….+ 1/n
#include<stdio.h>
int main ()
{
int n,i,p;
double s = 1.0;
printf("enter n \n");
scanf("%d",&n);
for ( i = 1; i <=n; i++)
{
p = 2 * i;
  s += (1.0/p); 
}

printf("%.2lf \n",s);
return 0;





}