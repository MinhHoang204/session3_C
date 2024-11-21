#include <stdio.h>

int main() {
    float r, chuVi, dienTich;
    const float PI = 3.14159;

    printf("Nhap ban kinh hinh tron (r): ");
    scanf("%f", &r);

    if (r < 0) {
        printf("Ban kinh khong the am. Vui long nhap lai.\n");
    } else {
        chuVi = 2 * PI * r;
        dienTich = PI * r * r;

        printf("Chu vi hinh tron: %.2f\n", chuVi);
        printf("Dien tich hinh tron: %.2f\n", dienTich);
    }

    return 0;
}
