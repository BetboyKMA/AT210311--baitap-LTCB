#include <stdio.h>
#include <math.h>

int main() {
	double goc;
	printf("Nhap so tien ban muon gui: ");
	scanf("%lf", &goc);
	int t;
	printf("Nhap so thang ban muon gui: ");
	scanf("%d", &t);
	double lai = goc * pow(1.0045 , t);
	printf("%.2lf", lai);
}
