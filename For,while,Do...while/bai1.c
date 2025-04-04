#include <stdio.h>

int main() {
    int tong = 0, giatri;

    printf("Nhap 10 so nguyen:\n");

    for (int i = 1; i <= 10; i++) {
        printf("Nhap so thu %d: ", i);
        scanf("%d", &giatri);
        tong += giatri; 
    }

    printf("Tong 10 so vua nhap la: %d\n", tong);

    return 0;
}
