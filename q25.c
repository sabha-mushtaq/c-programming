//  Display the series: 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 ....... (n times) [using nesting of loops]
#include<stdio.h>
int main ()
{
int n,i,j;
printf("enter n \n");
scanf("%d",&n);
for ( i = 1; i <=n; i++)
{
    for ( j = 1; j <=5 ;j++)
    {
        printf("%d \t",j);
    }
    
}


return 0;



}