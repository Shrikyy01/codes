#include <stdio.h>

int main() {
    float principle, rate, time, SI;
    printf("Enter principle, rate, and time: ");
    scanf("%f %f %f", &principle, &rate, &time);
    SI = (principle * rate * time) / 100;
    printf("Simple Interest is: %.2f\n", SI);
    return 0;
}

