#include <stdio.h>

int main() {
    int n;
    printf("Nhap mot so nguyen duong: ");
    if (scanf("%d", &n) != 1 || n <= 0) { 
        printf("Loi: Vui long nhap so nguyen duong!\n");
        return 1;
    }
    double sum = 0.0;
    for (int i = 1; i <= n; ++i) {  
        sum += 1.0 / i;
    }
    printf("Tong nghich dao S = %.6lf\n", sum);  
    return 0;
}
