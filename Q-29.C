//Demonstrate the use of continue and break keywords (in loops)
#include<stdio.h>
int main (){

int i;
for ( i = 0; i <=30; i++)
{
    if (i%3 ==0)
    {
      continue;
    }
    if (i == 8)
    {
      break;
    }
    printf("%d",i);
    
}


return 0;




}