#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int max = a[0], min = a[0];
    int m1 = 0, m2 = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
            m1 = i;
        }
        if (a[i] < min) {
            min = a[i];
            m2 = i;
        }
    }
    printf("Phan tu lon nhat: %d vi tri: %d\n", max, m1 + 1); 
    printf("Phan tu be nhat: %d vi tri: %d\n", min, m2 + 1);
    return 0;
}
