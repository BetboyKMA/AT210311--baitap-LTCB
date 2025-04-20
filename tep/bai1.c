#include <stdio.h>

int main() {
    int m, i, j;
    printf("Nhap kich thuoc ma tran (m x m): ");
    scanf("%d", &m);
  
    int A[m][m], B[m][m], C[m][m];
    
    printf("Nhap ma tran A:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < m; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }    
    printf("Nhap ma tran B:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < m; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }   
    for(i = 0; i < m; i++) {
        for(j = 0; j < m; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    FILE *f = fopen("CONG_MTC.txt", "w");
    if(f == NULL) {
        printf("Khong the mo file!\n");
        return 1;
    }
    fprintf(f, "Ma tran A:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < m; j++) {
            fprintf(f, "%d ", A[i][j]);
        }
        fprintf(f, "\n");
    }
    fprintf(f, "\nMa tran B:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < m; j++) {
            fprintf(f, "%d ", B[i][j]);
        }
        fprintf(f, "\n");
    }
    fprintf(f, "\nMa tran C = A + B:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < m; j++) {
            fprintf(f, "%d ", C[i][j]);
        }
        fprintf(f, "\n");
    }
    
    fclose(f);
    printf("Da ghi ket qua vao file CONG_MTC.txt\n");
    
    return 0;
}
