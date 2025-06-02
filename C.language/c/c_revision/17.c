#include <stdio.h>

int main() {
    int arr[100], n, i, pos, newValue;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to update (1 to %d): ", n);
    scanf("%d", &pos);

    printf("Enter new value: ");
    scanf("%d", &newValue);

    arr[pos - 1] = newValue;

    printf("Array after updating:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
