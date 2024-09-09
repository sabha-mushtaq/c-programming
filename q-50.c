// Find transpose of a matrix.
#include<stdio.h>
int main(){

int n1,n2;
printf("enter no of rows in a matric \n");
scanf("%d",&n1);
printf("enter number of columns in a matric \n");
scanf("%d",&n2);
int arr[n1][n2],transposedmatric[n2][n1];
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
        transposedmatric[j][i]=arr[i][j];
    }
    
}
printf(" matric \n");
for (int i = 0; i < n1; i++)
{
    for (int j = 0; j < n2; j++)
    {
        printf("%d",arr[i][j]);
    }
    printf("\n");
}





printf("transpose matric \n");
for (int i = 0; i < n1; i++)
{
    for (int j = 0; j < n2; j++)
    {
        printf("%d",transposedmatric[i][j]);
    }
    printf("\n");
}

return 0;




}