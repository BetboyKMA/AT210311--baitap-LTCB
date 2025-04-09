#include <stdio.h>
#include <math.h>

double tinhGiaiThua(int n) {
    double gt = 1;
    for (int i = 1; i <= n; i++) gt *= i;
    return gt;
}
double Sn(double x, double eps) {
    double sum = 0;
    int n = 0;
    double term;
    do {
        int mu = 2 * n + 1;
        term = pow(-1, n) * pow(x, mu) / tinhGiaiThua(mu);
        sum += term;
        n++;
    } while (fabs(term) > eps);
    return sum;
}
int main() {
    double x, eps;
    printf("Nhập x: "); scanf("%lf", &x);
    printf("Nhập Eps: "); scanf("%lf", &eps);
    printf("Kết quả Sn(x) = %.6lf\n", Sn(x, eps));
    return 0;
}
