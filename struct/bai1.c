#include <stdio.h>
#include <string.h>

struct soLieuBanHang{
	char TenHang[100];
	int DonGia, SoLuong, ThanhTien;
};
typedef struct soLieuBanHang sl;
void swap(sl *a, sl *b) {
    sl tmp = *a;
    *a = *b;
    *b = tmp;
}
void bubbleSort(sl a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(a[j].TenHang, a[j + 1].TenHang) > 0) swap(&a[j], &a[j + 1]);
        }
    }
}
int main() {
	int n;
	printf("Nhap so luong mat hang: ");
	scanf("%d", &n);
	sl a[n];
	int TongTien = 0;
	for(int i = 0; i < n; i++){
		getchar();
		printf("Nhap ten hang: ");
		gets(a[i].TenHang);
		printf("Don gia: ");
		scanf("%d", &a[i].DonGia);
		printf("So luong hang: ");
		scanf("%d", &a[i].SoLuong);
		a[i].ThanhTien = a[i].DonGia * a[i].SoLuong;
		TongTien += a[i].ThanhTien;
	}
	bubbleSort(a, n);
	printf("\n%-5s %-10s %-9s %-10s %-10s", "STT", "Ten Hang", "Don Gia", "So Luong", "Thanh Tien");
	for(int i = 0; i < n; i++)
		printf("\n %-5d %-11s %-10d %-11d %d", i + 1, a[i].TenHang, a[i].DonGia, a[i].SoLuong, a[i].ThanhTien);
	printf("\n%36s %8d", "Tong tien", TongTien);
	return 0;
}
