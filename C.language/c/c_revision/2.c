#include <stdio.h>

int main() {
    int a = 10, b = 3;
    
    // Arithmetic operators
    printf("a + b = %d\n", a + b);  // Addition
    printf("a - b = %d\n", a - b);  // Subtraction
    printf("a * b = %d\n", a * b);  // Multiplication
    printf("a / b = %d\n", a / b);  // Division (integer)
    printf("a %% b = %d\n", a % b); // Modulus
    
    // Relational operators
    printf("a > b: %d\n", a > b);   // Greater than
    printf("a == b: %d\n", a == b); // Equality
    
    // Logical operators
    printf("a>5 && b<5: %d\n", a>5 && b<5); // AND
    printf("a>5 || b>5: %d\n", a>5 || b>5); // OR
    
    // Bitwise operators
    printf("a & b: %d\n", a & b);   // Bitwise AND
    printf("a << 2: %d\n", a << 2); // Left shift
    
    return 0;
}