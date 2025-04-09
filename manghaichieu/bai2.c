#include <stdio.h>

#define SIZE 3 // Kich thuoc ma tran 3x3

void nhap(int a[3][3], char name) {
    printf("Nhap ma tran %c:\n", name);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c[%d][%d] = ", name, i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
void in(int a[3][3], char name) {
    printf("Ma tran %c:\n", name);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}
void tong(int A[3][3], int B[3][3], int C[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}
int main() {
    int A[3][3], B[3][3], C[3][3];
    nhap(A, 'A');
    nhap(B, 'B');
    tong(A, B, C);
    in(A, 'A');
    in(B, 'B');
    in(C, 'C');
    return 0;
}
