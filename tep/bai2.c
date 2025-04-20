#include <stdio.h>

int main() {
    int m, p, n, i, j, k;
    FILE *f = fopen("TICH_MTC.txt", "r");
    if(f == NULL) {
        printf("Khong the mo file TICH_MTC.txt!\n");
        return 1;
    }
    
    fscanf(f, "%d %d %d", &m, &p, &n);
    
    int A[m][p], B[p][n], C[m][n];

    for(i = 0; i < m; i++) {
        for(j = 0; j < p; j++) {
            fscanf(f, "%d", &A[i][j]);
        }
    }
    for(i = 0; i < p; i++) {
        for(j = 0; j < n; j++) {
            fscanf(f, "%d", &B[i][j]);
        }
    }
    
    fclose(f);

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            C[i][j] = 0;
            for(k = 0; k < p; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    f = fopen("TICH_MTC.txt", "a");
    if(f == NULL) {
        printf("Khong the mo file de ghi them!\n");
        return 1;
    }
    fprintf(f, "\nMa tran tich C = A x B:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            fprintf(f, "%d ", C[i][j]);
        }
        fprintf(f, "\n");
    }
    fclose(f);
    printf("Da ghi bo sung ket qua vao file TICH_MTC.txt\n");
    
    return 0;
}
