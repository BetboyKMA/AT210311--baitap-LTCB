#include <stdio.h>

int main() {
    float dtb; 
    printf("Nhập điểm trung bình: ");
    scanf("%f", &dtb);

    if (dtb < 5) 
        printf("Xếp loại: Yếu\n");
    else if (dtb < 7) 
        printf("Xếp loại: Trung bình\n");
    else if (dtb < 8) 
        printf("Xếp loại: Khá\n");
    else if (dtb < 9) 
        printf("Xếp loại: Giỏi\n");
    else 
        printf("Xếp loại: Xuất sắc\n");

    return 0;
}
