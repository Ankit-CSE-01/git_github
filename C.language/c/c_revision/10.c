#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n = 5;
    
    // Memory allocation using malloc
    ptr = (int*)malloc(n * sizeof(int));
    
    if(ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    
    printf("Memory successfully allocated using malloc.\n");
    
    // Assign values
    for(int i = 0; i < n; i++) {
        ptr[i] = i + 1;
    }
    
    printf("The elements are:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
    
    // Reallocate memory using realloc
    n = 10;
    ptr = realloc(ptr, n * sizeof(int));
    printf("Memory successfully re-allocated using realloc.\n");
    
    // Assign new values
    for(int i = 5; i < n; i++) {
        ptr[i] = i + 1;
    }
    
    printf("The new elements are:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
    
    // Free the memory
    free(ptr);
    printf("Memory successfully freed.\n");
    
    return 0;
}