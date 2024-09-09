// Display the Fibonacci series: 0 1 1 2 3 5 8 13 21 ....... (n terms)
#include<stdio.h>
int main (){
int n,i,t1=0,t2=1,nexterm;
printf("enter n \n");
scanf("%d",&n);
for ( i = 0; i <=n; i++)
{
    printf("%d \n",t1);
    nexterm = t1+t2;
    t2=t1;
    t1=nexterm;
}
return 0;



}