#include <stdio.h>

#define MAX 10

void nhapMaTran(int a[MAX][MAX], int hang, int cot) {
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++)
            scanf("%d", &a[i][j]);
    }
}

void hienThiMaTran(int a[MAX][MAX], int hang, int cot) {
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
}

void tongMaTran(int a[MAX][MAX], int b[MAX][MAX], int ketQua[MAX][MAX], int hang, int cot) {
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++)
            ketQua[i][j] = a[i][j] + b[i][j];
    }
}

void tichMaTran(int a[MAX][MAX], int b[MAX][MAX], int ketQua[MAX][MAX], int hang1, int cot1, int cot2) {
    for (int i = 0; i < hang1; i++) {
        for (int j = 0; j < cot2; j++) {
            ketQua[i][j] = 0;
            for (int k = 0; k < cot1; k++)
                ketQua[i][j] += a[i][k] * b[k][j];
        }
    }
}

int main() {
    int hang1, cot1, hang2, cot2;
    int a[MAX][MAX], b[MAX][MAX], ketQua[MAX][MAX];
    printf("Nhap so hang va cot mot: ");
    scanf("%d %d", &hang1, &cot1);
    printf("Nhap so hang va cot hai: ");
    scanf("%d %d", &hang2, &cot2);
    if (cot1 != hang2) {
        printf("Khong the\n");
        return 1;
    }
    printf("Nhap ma tran mot:\n");
    nhapMaTran(a, hang1, cot1);
    printf("Nhap ma tran hai:\n");
    nhapMaTran(b, hang2, cot2);
    if (hang1 == hang2 && cot1 == cot2) {
        tongMaTran(a, b, ketQua, hang1, cot1);
        printf("Tong hai ma tran l?:\n");
        hienThiMaTran(ketQua, hang1, cot1);
    } 
	else
        printf("Khong the\n");
    tichMaTran(a, b, ketQua, hang1, cot1, cot2);
    printf("T?ch hai ma tran l?:\n");
    hienThiMaTran(ketQua, hang1, cot2);
    return 0;
}

