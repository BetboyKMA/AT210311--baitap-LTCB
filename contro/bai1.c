#include <stdio.h>

void swap(double *a, double *b){
	double tmp = *a;
	*a = *b;
	*b = tmp;
}
int main() {
	double a, b;
	printf("Nhap a: ");
	scanf("%lf", &a);
	printf("Nhap b: ");
	scanf("%lf", &b);
	swap(&a, &b);
	printf("a = %lf b = %lf", a, b);
}
