#include <stdio.h>

int main() {

float length, width, area, perimeter;

printf("Enter length of the room: ");
scanf("%f", &length);
printf("Enter width of the room: ");
scanf("%f", &width);

area = length * width;
perimeter = 2 * (length + width);
printf("Area of the room = %.2f\n", area);
printf("Perimeter of the room = %.2f\n", perimeter);

return 0;
}