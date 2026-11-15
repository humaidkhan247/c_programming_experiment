#include <stdio.h>
int main(){

int a,b;

printf("===================================\n");
printf("Enter first number : \n");
scanf("%d", &a);
printf("Enter second number : \n");
scanf("%d", &b);

if (a > b){
printf("1st number is bigger than 2nd\n");
}

else
printf("2nd number is bigger than 1st\n");
printf("===================================\n");

return 0;
}
