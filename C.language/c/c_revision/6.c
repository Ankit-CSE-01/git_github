#include <stdio.h>

// Global variable (extern storage class)
int globalVar = 10;

void demoFunction() {
    // Automatic variable (default)
    auto int autoVar = 5;
    // Static variable (retains value between calls)
    static int staticVar = 0;
    
    printf("autoVar: %d, staticVar: %d\n", autoVar, staticVar);
    autoVar++;
    staticVar++;
}

int main() {
    // Register variable (suggested to store in register)
    register int regVar = 20;
    
    demoFunction();  // autoVar: 5, staticVar: 0
    demoFunction();  // autoVar: 5, staticVar: 1
    demoFunction();  // autoVar: 5, staticVar: 2
    
    printf("globalVar: %d\n", globalVar);
    printf("regVar: %d\n", regVar);
    
    return 0;
}