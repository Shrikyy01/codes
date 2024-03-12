#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int arr[7], i;
    printf("Enter 7 numbers: ");
    for (i = 0; i < 7; ++i) {
        scanf("%d", &arr[i]);
    }
    selectionSort(arr, 7);
    printf("Sorted array: ");
    for (i=0; i < 7; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}

