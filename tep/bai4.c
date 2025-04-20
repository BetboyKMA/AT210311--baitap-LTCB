#include <stdio.h>
#include <string.h>

struct SinhVien {
    char Ho_ten[50];
    int Tuoi;
    float Diem_TB;
};

void hienThiDS(struct SinhVien ds[], int n) {
    printf("\nDANH SACH SINH VIEN\n");
    printf("STT | Ho ten | Tuoi | Diem TB\n");
    for(int i = 0; i < n; i++) {
        printf("%d | %s | %d | %.1f\n", 
               i+1, ds[i].Ho_ten, ds[i].Tuoi, ds[i].Diem_TB);
    }
}

int main() {
    int n, i;
    printf("Nhap so sinh vien: ");
    scanf("%d", &n);
    
    struct SinhVien ds[n+1]; 
  
    for(i = 0; i < n; i++) {
        printf("\nSinh vien %d:\n", i+1);
        printf("Ho ten: "); scanf("%s", ds[i].Ho_ten);
        printf("Tuoi: "); scanf("%d", &ds[i].Tuoi);
        printf("Diem TB: "); scanf("%f", &ds[i].Diem_TB);
    }
    FILE *f = fopen("DSACH.C", "wb");
    if(f == NULL) {
        printf("Khong the tao file!\n");
        return 1;
    }
    fwrite(ds, sizeof(struct SinhVien), n, f);
    fclose(f);
    
    hienThiDS(ds, n);
  
    printf("\nNhap thong tin sinh vien can bo sung:\n");
    printf("Ho ten: "); scanf("%s", ds[n].Ho_ten);
    printf("Tuoi: "); scanf("%d", &ds[n].Tuoi);
    printf("Diem TB: "); scanf("%f", &ds[n].Diem_TB);
    n++;
    
    f = fopen("DSACH.C", "wb");
    fwrite(ds, sizeof(struct SinhVien), n, f);
    fclose(f);
    
    printf("\nDanh sach sau khi bo sung:\n");
    hienThiDS(ds, n);

    char ten[50];
    printf("\nNhap ten sinh vien can sua: ");
    scanf("%s", ten);
    
    int found = 0;
    for(i = 0; i < n; i++) {
        if(strcmp(ds[i].Ho_ten, ten) == 0) {
            printf("Nhap tuoi moi: "); scanf("%d", &ds[i].Tuoi);
            printf("Nhap diem TB moi: "); scanf("%f", &ds[i].Diem_TB);
            found = 1;
            break;
        }
    }
    
    if(!found) {
        printf("Khong tim thay sinh vien!\n");
    } else {
        f = fopen("DSACH.C", "wb");
        fwrite(ds, sizeof(struct SinhVien), n, f);
        fclose(f);

        printf("\nDanh sach sau khi sua:\n");
        hienThiDS(ds, n);
    }
    
    return 0;
}
