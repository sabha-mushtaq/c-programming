//Read two numbers from keyboard and compare them
#include<stdio.h>
int main(){
int a,b;
printf("enter two numbers to be compared \n");
scanf("%d%d",&a,&b);
if (a == b)
{
  printf("numers %d and %d are equal \n",a,b);

}else{
printf("numers %d and %d are not equal \n",a,b);}

return 0 ;
}