#include <stdio.h>

int main()

{
int x;
printf("Enter value for X\n");
scanf("%d", &x);

if (x > 0){
printf("number is positive number");
}
else if (x < 0)
printf("number is negetive number");
else
printf(" number is zero");

return 0;

}