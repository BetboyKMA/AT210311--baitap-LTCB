#include <stdio.h>

long long ucln(long long a, long long b) {
    while (a != b) {
        if (a > b) a = a - b;
        else b = b - a;
    }
    return a;
}
int main() {
    long long n, m;
    scanf("%lld %lld", &n, &m);
    long long a = ucln(n, m); 
    printf("%lld", a);
    long long bcnn = (n * m) / a;
    printf("\n%lld", bcnn);

    return 0;
}
