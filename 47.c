// Search for an element in an integer array (Linear search).
#include<stdio.h>
int main(){
int arr[10]={1,2,3,4,5,6,7,8,9,11},n,found=0;
printf("enter the element \n");
scanf("%d",&n);
for ( int i = 0; i < 10; i++)
{
   if (arr[i ]== n )
   {
    printf("element found  at index %d \n",i);
    found =1;
    break;
   }

    
   }
   if (!found)
   {
   printf("element not found \n");
   }
   
   return 0; 
}







