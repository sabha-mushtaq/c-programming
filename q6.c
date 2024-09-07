// Use math library (pow(), sqrt(), etc.)
#include<stdio.h>
#include<math.h>
int main ()
{
double a,b,power,square1,square2;
printf("enter the base and power : \n");
scanf("%lf %lf",&a,&b);
power = pow(a,b);
printf("power is equal to %.2f \n",power);
square1 = sqrt(a);
square2 = sqrt(b);
printf("square of base is %.2f \n",square1);
printf("square of power is %.2f \n",square2);
return 0;
}