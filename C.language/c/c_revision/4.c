#include <stdio.h>

int main() {
    // While loop
    int i = 1;
    printf("While loop:\n");
    while(i <= 5) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    
    // For loop
    printf("For loop:\n");
    for(int j = 1; j <= 5; j++) {
        printf("%d ", j);
    }
    printf("\n");
    
    // Do-while loop
    int k = 1;
    printf("Do-while loop:\n");
    do {
        printf("%d ", k);
        k++;
    } while(k <= 5);
    printf("\n");
    
    return 0;
}