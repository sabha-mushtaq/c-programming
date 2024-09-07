//Use switch-case to display Salaam when user enters 1, Aadaab when user enters 2, Hello when userenters 3 and Incorrect Option when user enters any other number
#include<stdio.h>
int main (){
int n;
printf("Enter any number from 1 to 3 \n");
scanf("%d",&n);
switch (n)
{
case 1:
   printf("salaam \n");
    break;
case 2:
   printf("aadaab \n");
    break;
    case 3:
   printf("hello \n");
    break;
default:
    break;
}
return 0;

}