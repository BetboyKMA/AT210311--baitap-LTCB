#include <stdio.h>

int main() {
   int n;
   printf("Nhap so phan tu cua mang: ");
   scanf("%d",&n);
   int a[n];
   for ( int i = 0; i < n; i++) {
       scanf("%d", &a[i]);
   }
   int sum = 0;
   int td = 0, ta = 0;
   int dg = 0, am = 0;
   for (int i = 0; i < n; i++) {
       sum += a[i];
       if (a[i] > 0) {
          td += a[i];
          dg++;
     } else if (a[i] < 0) {
          ta += a[i];
          am++;
     }
   }
  printf("Tong tat ca cac so: %d\n", sum);
  printf("Tong cac so duong: %d\n", td);
  printf("Tong cac so am: %d\n", ta);
  printf("Trung binh cong cac so duong: %.2lf\n", (double) td / dg );
  printf("Trung binh cong cac so am: %.2lf\n", (double) ta / am);
  return 0;
}
