#include <stdio.h>
#include <string.h>

struct BanHang {
    char Ten_hang[50];
    int Don_gia;
    int So_luong;
    int Thanh_tien;
};

int main() {
    int n, i, tong = 0;
    printf("Nhap so mat hang: ");
    scanf("%d", &n);
    
    struct BanHang ds[n];

    for(i = 0; i < n; i++) {
        printf("\nMat hang %d:\n", i+1);
        printf("Ten hang: "); scanf("%s", ds[i].Ten_hang);
        printf("Don gia: "); scanf("%d", &ds[i].Don_gia);
        printf("So luong: "); scanf("%d", &ds[i].So_luong);
        ds[i].Thanh_tien = ds[i].Don_gia * ds[i].So_luong;
        tong += ds[i].Thanh_tien;
    }
    
    FILE *f = fopen("SO_LIEU.C", "wb");
    if(f == NULL) {
        printf("Khong the tao file!\n");
        return 1;
    }
    fwrite(ds, sizeof(struct BanHang), n, f);
    fclose(f);
  
    f = fopen("SO_LIEU.C", "rb");
    if(f == NULL) {
        printf("Khong the mo file!\n");
        return 1;
    }
    
    printf("\n|    | SO LIEU BAN HANG    |\n");
    printf("| STT | Ten Hang | Don gia | So luong | Thanh tien |\n");
    
    for(i = 0; i < n; i++) {
        fread(&ds[i], sizeof(struct BanHang), 1, f);
        printf("| %d | %s | %d | %d | %d |\n", 
               i+1, ds[i].Ten_hang, ds[i].Don_gia, ds[i].So_luong, ds[i].Thanh_tien);
    }
    
    printf("\nDon gia: Long tien %d\n", tong);
    fclose(f);
    
    return 0;
}
