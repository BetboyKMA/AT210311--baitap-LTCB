#include <stdio.h>

void maTranXoanOc(int n) {
    int a[n][n];
    int value = 1;
    int tren = 0, duoi = n - 1, trai = 0, phai = n - 1;
    while (value <= n * n) {
        for (int i = trai; i <= phai; i++) a[tren][i] = value++;
        tren++;
        for (int i = tren; i <= duoi; i++) a[i][phai] = value++;
        phai--;
        for (int i = phai; i >= trai; i--) a[duoi][i] = value++;
        duoi--;
        for (int i = duoi; i >= tren; i--) a[i][trai] = value++;
        trai++;
    }
    printf("Ma tran xoan oc %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}
int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    maTranXoanOc(n);
    return 0;
}
