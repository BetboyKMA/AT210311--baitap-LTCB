#include <stdio.h>
int main() {
    int n;
    printf("Nhập một số nguyên dương: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Lỗi: Giai thừa chỉ tính cho số nguyên dương!\n");
        return 1;
    }
    unsigned long long giai_thua = 1; 
    for (int i = 1; i <= n; ++i) {
        giai_thua *= i;
    }
    printf("%d! = %llu\n", n, giai_thua);
    return 0;
}
