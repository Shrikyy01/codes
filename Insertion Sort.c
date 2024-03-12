#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[7], i;
    printf("Enter 7 numbers: ");
    for (i = 0; i < 7; ++i) {
        scanf("%d", &arr[i]);
    }
    insertionSort(arr, 7);
    printf("Sorted array: ");
    for (i=0; i < 7; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}


