#include <stdio.h>
#include <string.h>

void doicoso(int n, int b) {
    char cs16[] = "0123456789ABCDEF";
    char a[100];
    int i = 0;
    if (n == 0) {
        printf("0");
        return;
    }
    while (n > 0) {
        a[i++] = cs16[n % b];
        n /= b;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", a[j]);
    }
}

int main() {
    int n;    
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);  
    if (n < 0) {
        printf("Hay nhap lai\n");
        return 1;
    }
    printf("\nSo duoi dang co so 2: ", n);
    doicoso(n, 2);   
    printf("\nSo duoi dang co so 8: ", n);
    doicoso(n, 8);    
    printf("\nSo duoi dang co so 16: ", n);
    doicoso(n, 16);
    return 0;
}
