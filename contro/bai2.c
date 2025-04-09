#include <stdio.h>

int main() {
	int a[10];
	int *p = a;
	printf("Nhap 10 so nguyen: ");
	for (int i = 0; i < 10; i++){
		scanf("%d", p + i);
	}
	printf("Mang da nhap: ");
	for (int i = 0; i < 10; i++){
		printf("%d ", *(p + i));
	}
	return 0;
}
