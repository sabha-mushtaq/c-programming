#include<stdio.h>
int main(){
int i,j;
for ( i = 1; i <=4; i++)
{
for (int space = 1; space <=4-i; space++)
{
    printf(" ");
}





    for ( j = 1; j<=i ; j++)
    {
   printf("*");
    }
    printf("\n");
}
return 0;




}