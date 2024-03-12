#include <stdio.h>

int main() {
    int arr[5], sum = 0, i;
    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; ++i) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum of array elements: %d\n", sum);
    return 0;
}

