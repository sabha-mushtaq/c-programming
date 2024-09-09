// Display table of all integers from 2 to 10 (2x1=2, 2x2=4, ……., 10x10=100)
#include<stdio.h>
int main(){
int i,t,n=2;

for ( i = 1; i <=10; i++)
{
    t= n * i;
    printf("%d * %d = %d \n",n,i,t);
}
return 0;



}