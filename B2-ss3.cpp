#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Nhap nhiet do Celsius: ");
    scanf("%f", &celsius);

    // Chuyen doi Celsius sang Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Nhiet do Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
