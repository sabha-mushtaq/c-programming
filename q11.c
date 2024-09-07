//compare three numbers (for smallest)
// to chechk for smallest
#include<stdio.h>
int main(){
int a,b,c,greatest,smallest;
printf("enter the numbers to be compared \n");
scanf("%d%d%d",&a,&b,&c);

if (a<=b)
{
   if (a<=c)
   {
    printf("%d is smallest\n",a);
   }else{
printf("%d is smallest \n",c);

   }
   
}else{
if (b<=c)
   {
    printf("%d is smallest \n",b);
   }else{
printf("%d is smallest \n",c);

   }






}


}