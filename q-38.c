//  Input an integer array from the user and display the same.
#include<stdio.h>
int main()
{
int arr[5]={0};
printf("enter valuse for the array");
for (int i = 0; i < 5; i++)
{
    scanf("%d",&arr[i]);
}
for (int j= 0; j < 5; j++)
{
    printf ("%d",arr[j]);
}
return 0;


}
