// Find product of two matrices.
#include<stdio.h>
int main (){
int rows,cols;

printf("enter no of rows \n");
scanf("%d",&rows);
printf("enter no of rows \n");
scanf("%d",&cols);
printf("enter the elements of first matrix \n");
int matric1[rows][cols],matric2[rows][cols],resultantmatrics[rows][cols];
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        scanf("%d",&matric1[i][j]);
    }
    
}
printf("enter the elements of second matrix \n");
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        scanf("%d",&matric2[i][j]);

    }
    
}
printf("resultant matrix is equal to \n");
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        resultantmatrics[i][j]=matric1[i][j]* matric2[i][j];
    }
   
}
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        printf("%d",resultantmatrics[i][j]);
    }
   printf("\n");
}

return 0;


}