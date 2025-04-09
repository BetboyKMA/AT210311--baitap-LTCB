#include <stdio.h>
#include <math.h>

int main() {
    double x, eps, E = 1.0, n;
    int i = 1;
    printf("Nhap gia tri x: ");
    scanf("%lf", &x);
    printf("Nhap do chinh xac eps: ");
    scanf("%lf", &eps);
    do {
        double k = 1.0; 
        for (int j = 1; j <= i; j++) {
            k *= j;
        }
        n = pow(x, i) / k;
        E += n;
        i++;
    } while (fabs(n) > eps);
    printf("e^%.2lf = %.6lf\n", x, E);
    return 0;
}
