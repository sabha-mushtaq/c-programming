//  Find all the factors of a natural number
#include<stdio.h>
int main(){
int n,i;
printf("enter the natural number \n");
scanf("%d",&n);
for ( i = 0; i <= n; i++)
{
    if (n%i ==0)
    {
        printf("%d \n",i);
    }
    
}

return 0;



}