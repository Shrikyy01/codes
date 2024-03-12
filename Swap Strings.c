#include <stdio.h>
#include <string.h>

void swapStrings(char **str1, char **str2) {
    char *temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    printf("Before swapping: str1 = %s, str2 = %s\n", str1, str2);
    swapStrings(&str1, &str2);
    printf("After swapping: str1 = %s, str2 = %s\n", str1, str2);
    return 0;
}

