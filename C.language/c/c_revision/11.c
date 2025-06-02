#include <stdio.h>
#include <string.h>

int main() {
    // String initialization
    char str1[] = "Hello";
    char str2[10];
    
    // String input
    printf("Enter a string: ");
    gets(str2);
    
    // String output
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    
    // String functions
    printf("Length of str1: %lu\n", strlen(str1));
    printf("Concatenation: %s\n", strcat(str1, str2));
    printf("Comparison: %d\n", strcmp(str1, str2));
    
    return 0;
}