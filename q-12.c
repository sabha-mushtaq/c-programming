// Use if-else with relational and logical operators (grading according to percentage of a student).
#include<stdio.h>
int main(){
int g;
printf("Enter the percentage of the student \n");
scanf("%d",&g);
if (g>=90 && g< 100)
{
    printf("congragulation you have A grade. keep it up \n");
}else if (g>=70 && g<90)
{
     printf("congragulation you have B grade.can do better \n");
}else{

printf("you have a grade C .need improvement ! \n");

}

return 0;





}