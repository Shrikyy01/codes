#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[7], i;
    printf("Enter 7 numbers: ");
    for (i = 0; i < 7; ++i) {
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, 7);
    printf("Sorted array: ");
    for (i=0; i < 7; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}

