#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    int i;
    for (i = 0; i < n; ++i) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int arr[5], key, i;
    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; ++i) {
        scanf("%d", &arr[i]);
    }
    printf("Enter key to search: ");
    scanf("%d", &key);
    int index = linearSearch(arr, 5, key);
    if (index != -1)
        printf("Element found at index %d\n", index);
    else
        printf("Element not found.\n");
    return 0;
}

