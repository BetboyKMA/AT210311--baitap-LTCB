#include <stdio.h>
#include <math.h>

double dt(double a[], int n, double x) {
    double sum = 0;
    for (int i = n; i >= 0; i--) {
        sum += a[i] * pow(x, i);
    }
    return sum;
}

int main() {
    int n, m;
    double x;
    printf("Nhap bac cua da thuc P (n): ");
    scanf("%d", &n);
    printf("Nhap bac cua da thuc Q (m): ");
    scanf("%d", &m);
    double P[100], Q[100];
    printf("Nhap he so cua da thuc P:\n");
    for (int i = n; i >= 0; i--) {
        printf("He so cua x^%d: ", i);
        scanf("%lf", &P[i]);
    }
    printf("Nhap he so cua da thuc Q:\n");
    for (int i = m; i >= 0; i--) {
        printf("He so cua x^%d: ", i);
        scanf("%lf", &Q[i]);
    }
    printf("Nhap gia tri x: ");
    scanf("%lf", &x);
    double Px = dt(P, n, x);
    double Qx = dt(Q, m, x);
    double Tx = Px + Qx;
    printf("Gia tri cua P(%.2lf) = %.2lf\n", x, Px);
    printf("Gia tri cua Q(%.2lf) = %.2lf\n", x, Qx);
    printf("Gia tri cua T(%.2lf) = %.2lf\n", x, Tx);
    return 0;
}
