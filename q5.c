// Define and use a constant (e.g. PI as 3.14159) in a program
#include<stdio.h>
#define PI 3.14
int main()
{
    double  radius,area;
    printf("Enter radius of the circle \n");
    scanf("%lf",&radius);

area = (PI * radius * radius);
printf("area of the circle is %.2f \n",area);
return 0;
}
