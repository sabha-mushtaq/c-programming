// Use nesting of if-else (compare three numbers)(greatest)
#include<stdio.h>
int main(){
int a,b,c,greatest,smallest;
printf("enter the numbers to be compared \n");
scanf("%d%d%d",&a,&b,&c);

if (a>=b)
{
   if (a>=c)
   {
    printf("%d is greatest\n",a);
   }else{
printf("%d is greatest \n",c);

   }
   
}else{
if (b>=c)
   {
    printf("%d is greatest \n",b);
   }else{
printf("%d is greatest \n",c);

   }






}


}
