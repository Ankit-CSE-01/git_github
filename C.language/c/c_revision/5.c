#include <stdio.h>

// Function prototype
int add(int a, int b);

// Function definition
int add(int a, int b) {
    return a + b;
}

// Function with pass by reference
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int num1 = 5, num2 = 10;
    
    // Function call by value
    printf("Sum: %d\n", add(num1, num2));
    
    // Function call by reference
    printf("Before swap: %d, %d\n", num1, num2);
    swap(&num1, &num2);
    printf("After swap: %d, %d\n", num1, num2);
    
    return 0;
}