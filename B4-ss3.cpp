#include <stdio.h>

int main() {
    float toan, van, anh, tong, trungBinh;

    printf("Nhap diem Toan: ");
    scanf("%f", &toan);

    printf("Nhap diem Van: ");
    scanf("%f", &van);

    printf("Nhap diem Anh: ");
    scanf("%f", &anh);

    // Kiem tra neu các diem nam ngooi pham vi 0-10
    if (toan < 0 || toan > 10 || van < 0 || van > 10 || anh < 0 || anh > 10) {
        printf("Diem khong hop le. Vui long nhap cac diem trong khoang tu 0 den 10.\n");
    } else {
        tong = toan + van + anh;
        trungBinh = tong / 3;

        printf("Tong diem: %.2f\n", tong);
        printf("Diem trung binh: %.2f\n", trungBinh);
    }

    return 0;
}
