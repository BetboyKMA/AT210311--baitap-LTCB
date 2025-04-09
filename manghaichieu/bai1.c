#include <stdio.h>

int main() {
    // TH1: Khởi tạo sẵn giá trị
    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printf("Mang khoi tao san:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    // TH2: Nhập từ bàn phím
    int arr2[3][3];
    printf("Nhap 9 phan tu:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("Mang nhap tu ban phim:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
