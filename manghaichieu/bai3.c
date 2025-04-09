#include <stdio.h>

void nhap(int a[3][3], char name) {
    printf("Nhap ma tran %c:\n", name);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    }
}
void nhan(int A[3][3], int B[3][3], int C[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = 0;
            for (int k = 0; k < 3; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }
}
void in(int a[3][3], char name) {
    printf("Ma tran %c:\n", name);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int A[3][3], B[3][3], C[3][3];
    nhap(A, 'A');
    nhap(B, 'B');
    nhan(A, B, C);
    in(A, 'A');
    in(B, 'B');
    in(C, 'C');
    return 0;
}
