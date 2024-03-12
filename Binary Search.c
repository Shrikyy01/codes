#include <stdio.h>

int binarySearch(int arr[], int l, int r, int key) {
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}

int main() {
    int arr[5], key, i;
    printf("Enter 5 numbers in sorted order: ");
    for (i = 0; i < 5; ++i) {
        scanf("%d", &arr[i]);
    }
    printf("Enter key to search: ");
    scanf("%d", &key);
    int index = binarySearch(arr, 0, 4, key);
    if (index != -1)
        printf("Element found at index %d\n", index);
    else
        printf("Element not found.\n");
    return 0;
}

