#include <stdio.h>

struct Rectangle {
    float length;
    float width;
};

int main() {
    struct Rectangle rect;

    printf("Enter length of rectangle: ");
    scanf("%f", &rect.length);
    printf("Enter width of rectangle: ");
    scanf("%f", &rect.width);

    float area = rect.length * rect.width;
    float perimeter = 2 * (rect.length + rect.width);

    printf("Area of rectangle: %.2f\n", area);
    printf("Perimeter of rectangle: %.2f\n", perimeter);

    return 0;
}

