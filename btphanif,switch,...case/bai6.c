#include <stdio.h>

int main() {
    float a, b, c, d, e, f, D, Dx, Dy, x, y;
    printf("Nhập a, b, c, d, e, f: ");
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
    D = a * e - b * d;
    Dx = c * e - b * f;
    Dy = a * f - c * d;
    
    if (D != 0) {
        x = Dx / D;
        y = Dy / D;
        printf("Nghiệm của hệ: x = %.2f, y = %.2f\n", x, y);
    } else { 
        if (Dx == 0 && Dy == 0) 
            printf("Hệ có vô số nghiệm\n");
        else 
            printf("Hệ vô nghiệm\n");
    }
    return 0;
}
