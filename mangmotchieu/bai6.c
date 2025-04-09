#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Loi: So phan tu phai > 0!\n");
        return 1;
    }
    int a[n];
    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] < 0) {
            a[i] = 0;
        }
    }
    printf("Mang sau khi thay the: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
