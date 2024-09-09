// Demonstrate the use of string library functions: strlen(), strcpy(), strrev(), strcat(), strcmp() etc. using examples.
#include<stdio.h>
#include<string.h>
int main()
{
char strr[]="hello",strr1[]="world",strr3[100];
strcat(strr,strr1);
printf("%s \n",strr);

strcpy(strr3,strr);
printf("%s \n",strr3);

if (strcmp(strr,strr1)==0)
{
    printf("used compare \n");
}
int length = strlen(strr);
printf("%d \n",length);

return 0;


}