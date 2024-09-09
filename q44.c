#include<stdio.h>
#include<string.h>
int main(){
char strr[100],strr2[100];
printf("enter the string for evaluation \n");
scanf("%s",strr);
int length = 0;
while (strr[length] != '\0')
{
    length++;
}
for (int i = 0; i< length ; i++)
{
    strr2[i] = strr[length -i-1];
}
strr2[length] = '\0';
if (strcmp(strr,strr2) == 0)
{
    printf("string is a palindrome \n");
}else
{
   printf("string is not a palindrome \n");
}


return 0;



}