#include <stdio.h>

int main() {
    double f, t, GDP;
    int n = 2014;
    printf("Nhap GDP nam 2014 : ");
    scanf("%lf", &f);
    printf("Nhap toc do tang truong: ");
    scanf("%lf", &t);
    GDP = f;
    printf("\nNam\tGDP (USD)\n");
    while (GDP <= 2 * f) {
        printf("%d \t %.2lf\n", n, GDP);
        GDP += GDP * t / 100;
        n++;
    }
    printf("\nDen nam %d GDP hon 2 lan GDP nam 2014\n", n );
    return 0;
}
