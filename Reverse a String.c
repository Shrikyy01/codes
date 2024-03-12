#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int length = strlen(str);
    for (int i = length - 1; i >= 0; --i) {
        printf("%c", str[i]);
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Reversed String: ");
    reverseString(str);
    printf("\n");
    return 0;
}

