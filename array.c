#include <stdio.h>

int main() {
    int a[5];

    printf("\nEnter the array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter element [%d]: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\nArray elements in order:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element [%d]: %d\n", i + 1, a[i]);
    }

    printf("\nArray elements in reverse order:\n");
    for (int i = 4; i >= 0; i--) {
        printf("Element [%d]: %d\n", i + 1, a[i]);
    }

    return 0;
}
