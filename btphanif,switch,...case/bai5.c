#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;
    printf("Nhập a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0) {
        if (b == 0) {
            printf(c == 0 ? "Phương trình vô số nghiệm\n" : "Phương trình vô nghiệm\n");
        } else {
            printf("Nghiệm của phương trình bậc nhất: x = %.2f\n", -c / b);
        }
        return 0;
    }
    delta = b * b - 4 * a * c;
    if (delta < 0) {
        printf("Phương trình vô nghiệm\n");
    } else if (delta == 0) {
        printf("Phương trình có nghiệm kép: x = %.2f\n", -b / (2 * a));
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Phương trình có hai nghiệm phân biệt: x1 = %.2f, x2 = %.2f\n", x1, x2);
    }
    return 0;
}
