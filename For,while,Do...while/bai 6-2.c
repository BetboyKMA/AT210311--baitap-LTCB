#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("So %d khong phai la so hoan hao", n);
        return 0;
    }
    int sum = 1; 
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) {
                sum += n / i;
            }
        }
    }
    if (sum == n && n != 1) 
        printf("So %d la so hoan hao", n);
    else 
        printf("So %d khong phai la so hoan hao", n);
    return 0;
}
