#include <string.h>
#include <stdio.h>

int main() {
    char str[20];
    int len;
    
    printf("Type a String: ");
    scanf("%[^\n]s", str); 
    
    len = strlen(str);
    printf("\nLength of the string %s is %d\n", str, len);
    
    return 0;
}
