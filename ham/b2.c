#include <stdio.h>

int factorial(int n){
	if (n == 0) return 1;
	return n * factorial(n - 1);
}

int main() {
	int n;
	printf("Nhap n:");
	scanf("%d", &n);
	printf("Gia tri cua n! = %d", factorial(n));
	return 0;
}
