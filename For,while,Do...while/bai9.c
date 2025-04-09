#include <stdio.h>

int main() {
    int n;
    double sum = 0, term = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        term /= i;   
        sum += term;
    }
    printf("%.2lf", sum);
    return 0;
}
