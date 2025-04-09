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
    }
    int x;
    printf("Nhap gia tri x can dem: ");
    scanf("%d", &x);
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (x == a[i]) {
            count++;
        }
    }
    printf("Phan tu %d xuat hien %d lan trong mang\n", x, count);
    return 0;
}
