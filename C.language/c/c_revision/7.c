#include <stdio.h>

int main() {
    // 1D array
    int numbers[5] = {1, 2, 3, 4, 5};
    printf("1D Array:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    // 2D array
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    printf("\n2D Array:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}