#include <stdio.h>

int main() {
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	int a[n];
	int *p = a;
	printf("Nhap %d so: ", n);
	for (int i = 0; i < n; i++)
		scanf("%d", p + i);
	int *min = p, *max = p;
	for( int i = 1; i < n; i++){
		if (*(p + i) < *min)
			min = p + i;
		if (*(p + i) > *max)
			max = p + i;
	}
	printf("Phan tu nho nhat, lon nhat cua mang: %d, %d", *min, *max);
}
