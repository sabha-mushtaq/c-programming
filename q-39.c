//Display contents of an integer array in reverse order.
#include<stdio.h>
int main(){
int arr[10]={0};
printf("enter valuse for an array \n");
for (int i = 0; i < 10; i++)
{
   scanf("%d",&arr[i]);

}

for (int j = 9; j >=0 ; j--)
{
    printf("%d",arr[j]);
}



return 0;


}