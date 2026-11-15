#include <stdio.h>
#include <stdlib.h>

int main() {
    char name;
    int salary, i, num;
    FILE *fptr;

    printf("Enter number of employees: ");
    if (scanf("%d", &num) != 1) return 1;

    fptr = fopen("employee.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file for writing!\n");
        exit(1);
    }

    for (i = 0; i < num; ++i) {
        printf("For employee %d\nEnter name: ", i + 1);
        scanf("%s", name);
        printf("Enter salary: ");
        scanf("%d", &salary);
        fprintf(fptr, "Name: %s Salary: %d\n", name, salary);
    }
    fclose(fptr);

    fptr = fopen("employee.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }

    printf("\n--- Employee Records Inside File ---\n");
    while (fscanf(fptr, "Name: %s Salary: %d\n", name, &salary) != EOF) {
        printf("Name: %s, Salary: %d\n", name, salary);
    }
    fclose(fptr);

    return 0;
}
