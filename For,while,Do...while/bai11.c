#include <stdio.h>

void convertBase(int n, int base) {
    char digits[] = "0123456789ABCDEF";
    char result[32];
    int i = 0;
    if (n == 0) {
        printf("0");
        return;
    }
    while (n > 0) {
        result[i++] = digits[n % base];
        n /= base;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", result[j]);
    }
}
int main() {
    int n;
    printf("Nhập số nguyên dương n: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Vui lòng nhập số nguyên dương!\n");
        return 1;
    }  
    printf("Nhị phân (2): ");
    convertBase(n, 2);
    printf("\n");
    
    printf("Bát phân (8): ");
    convertBase(n, 8);
    printf("\n");

    printf("Thập lục phân (16): ");
    convertBase(n, 16);
    printf("\n");
    
    return 0;
}
