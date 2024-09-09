//Input a string from the user and find its length (without using the string library).
#include<stdio.h>
int main(){
char strr[100];
printf("enter the string to be reversed \n");
scanf("%s",strr);
int length = 0;
while (strr[length] != '\0')
{
    length++;
}

printf("%d \n",length);
return 0;








}