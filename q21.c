//  Display the series: 2 4 16 256 65536 ....... (n terms)
#include<stdio.h>
int main(){
int i,n,term=2;
printf("enter n \n");
scanf("%d",&n);
for ( i =1 ; i <=n; i++)
{
    printf("%d \n",term);
    term = term * term;
}

return 0;


}