#include <stdio.h>
#define PI 3.14159

int main() {
    float r;
    printf("Nhập bán kính hình cầu: ");
    scanf("%f", &r);
    float dientich = 4 * PI * r * r;
    float thetich = (4.0 / 3.0) * PI * r * r * r;  
    printf("Diện tích: %.2f\nThể tích: %.2f\n", dientich, thetich);
    return 0;
}
