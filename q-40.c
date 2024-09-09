// Display contents of a character array.
#include<stdio.h>
int main(){
char arr[10]="array";
for(int i=0;i<10;i++){
if (arr[i]=='\0')
{
    break;
}



printf("%c \n",arr[i]);




}

return 0;


}