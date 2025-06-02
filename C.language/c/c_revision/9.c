#include <stdio.h>

int main() {
    int var = 20;
    int *ptr;       // Pointer declaration
    
    ptr = &var;     // Pointer initialization
    
    printf("Value of var: %d\n", var);
    printf("Address of var: %p\n", &var);
    printf("Value of ptr: %p\n", ptr);
    printf("Value pointed by ptr: %d\n", *ptr);
    
    // Pointer arithmetic
    int arr[] = {10, 20, 30};
    int *arrPtr = arr;
    
    printf("\nArray elements using pointer:\n");
    for(int i = 0; i < 3; i++) {
        printf("*(arrPtr + %d) = %d\n", i, *(arrPtr + i));
    }
    
    return 0;
}