//Input a string from the user and display it in reverse order.
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

for (int i = length -1; i >=0 
; i--)
{
   printf("%c \n",strr[i]);
}


return 0;


}