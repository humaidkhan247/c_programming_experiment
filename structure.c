#include <stdio.h>

struct student {
    int stno;
    char stname[10];
    int m1, m2, m3;
};

int main() {
    struct student s;

    printf("Enter student no : ");
    if (scanf("%d", &s.stno) != 1) return 1;

    printf("Enter student name : ");
    if (scanf("%9s", s.stname) != 1) return 1; // %9s prevents buffer overflow

    printf("Enter m1 m2 m3 : ");
    if (scanf("%d%d%d", &s.m1, &s.m2, &s.m3) != 3) return 1;

    printf("\n--- Student Details ---\n");
    printf("Student number = %d\n", s.stno);
    printf("Student name = %s\n", s.stname);
    printf("m1 = %d, m2 = %d, m3 = %d\n", s.m1, s.m2, s.m3);

    return 0;
}
