#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;

    printf("Nhap 3 canh a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        float chu_vi = a + b + c;
        float p = chu_vi / 2;
        float dien_tich = sqrt(p * (p - a) * (p - b) * (p - c));
        
        printf("Day la tam giac ");
        
        if (a == b && b == c) {
            printf("deu");
        } else if (a == b || b == c || a == c) {
            if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
                printf("vuong can");
            } else {
                printf("can");
            }
        } else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
            printf("vuong");
        } else {
            printf("thuong");
        }
        
        printf("\nChu vi: %.2f\nDien tich: %.2f", chu_vi, dien_tich);
    } else {
        printf("Ba so khong tao thanh tam giac!");
    }

    return 0;
}