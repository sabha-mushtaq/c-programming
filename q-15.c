// Display the series (using loops): n n-1 n-2 …. 3 2 1
#include<stdio.h>
int main(){
int n,i,t;
printf("enter n \n");
scanf("%d",&n);
for(i=0;i<n;i++){
t = n-i;
printf("%d \t",t);


}

return 0;


}