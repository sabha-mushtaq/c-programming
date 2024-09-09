// Find sum of all elements of an integer array.
#include<stdio.h>
int main(){
int arr[100],n,sum=0;

printf("enter the length of array \n");
scanf("%d",&n);
printf("enter elements of array \n");
for ( int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}
for (int i = 0; i <n; i++)
{
  sum+=arr[i];
  
}
 printf("sum is equal to : %d \n",sum);
return 0;
}