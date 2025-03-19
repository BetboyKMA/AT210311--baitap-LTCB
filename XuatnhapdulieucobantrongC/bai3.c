#include <stdio.h>

int main() {
    int a, b;
    printf("Nhập số nguyên thứ nhất: ");
    scanf("%d", &a);
    printf("Nhập số nguyên thứ hai: ");
    scanf("%d", &b);
    printf("Tổng: %d + %d = %d\n", a, b, a + b);
    printf("Hiệu: %d - %d = %d\n", a, b, a - b);
    printf("Tích: %d * %d = %d\n", a, b, a * b);
    if (b != 0) {
        printf("Thương (phép chia thực): %.2f\n", (float)a / b);
        printf("Thương (phép chia nguyên): %d / %d = %d\n", a, b, a / b);
}
   else {
        printf("Không thể chia cho 0!\n");
    }

    return 0; 
}
