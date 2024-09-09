// Find the sum of all diagonal elements of a matrix.
#include<stdio.h>
int main(){
int n;
int diagonalmatrix = 0;
printf("enter the size of matric \n");
scanf("%d",&n);
printf("enter elements of matrix \n");
int arr[n][n];
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        scanf("%d",&arr[i][j]);

    }
    
}
for (int i = 0; i < n; i++)
{
    diagonalmatrix+=arr[i][i];
}


printf("%d \n",diagonalmatrix);
return 0;





}