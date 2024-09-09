// Input a matrix from the user and display it.
#include<stdio.h>
int main(){
int n1,n2;
printf("enter number of rows of an matric \n");
scanf("%d",&n1);
printf("enter number of columns of an matric \n");
scanf("%d",&n2);
int arr[n1][n2];
for (int i = 0; i < n1; i++)
{
    for (int j = 0; j < n2; j++)
    {
        scanf("%d",&arr[i][j]);
    }
    
}
for (int i = 0; i < n1; i++)
{
    for (int j = 0; j < n2; j++)
    {
        printf("%d",arr[i][j]);
    }
    printf("\n");
}


return 0;





}