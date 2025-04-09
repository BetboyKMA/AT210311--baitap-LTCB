#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct danhSachSinhVien{
	char hoTen[50];
	int tuoi;
	double dtb;
	struct danhSachSinhVien* next;
}dssv;
dssv* tao(char* hoTen, int tuoi, double dtb) {
    dssv* sv = (dssv*)malloc(sizeof(dssv));
    strcpy(sv->hoTen, hoTen);
    sv->tuoi = tuoi;
    sv->dtb = dtb;
    sv->next = NULL;
    return sv;
}
void them(dssv** head, char* hoTen, int tuoi, double dtb) {
    dssv* svMoi = tao(hoTen, tuoi, dtb);
    if (*head == NULL) {
        *head = svMoi;
        return;
    }
    dssv* tmp = *head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = svMoi;
}
void chen(dssv** head, char* hoTenMoi, int tuoiMoi, double dtbm, char* tenCanChenTruoc) {
    dssv* svMoi = tao(hoTenMoi, tuoiMoi, dtbm);
    if (*head == NULL || strcmp((*head)->hoTen, tenCanChenTruoc) == 0) {
        svMoi->next = *head;
        *head = svMoi;
        return;
    }
    dssv* tmp = *head;
    while (tmp->next != NULL && strcmp(tmp->next->hoTen, tenCanChenTruoc) != 0) {
        tmp = tmp->next;
    }
    if (tmp->next != NULL) {
        svMoi->next = tmp->next;
        tmp->next = svMoi;
    } else {
        printf("Khong tim thay sinh vien %s trong danh sach!\n", tenCanChenTruoc);
        free(svMoi);
    }
}
void xoa(dssv** head, char* hoTen) {
    dssv* tmp = *head, *prev = NULL;

    if (tmp != NULL && strcmp(tmp->hoTen, hoTen) == 0) {
        *head = tmp->next;
        free(tmp);
        return;
    }
    while (tmp != NULL && strcmp(tmp->hoTen, hoTen) != 0) {
        prev = tmp;
        tmp = tmp->next;
    }
    if (tmp == NULL) return;
    prev->next = tmp->next;
    free(tmp);
}
void in(dssv* head){
	while(head != NULL){
		printf("\nDANH SACH SINH VIEN");
		printf("\n%-5s %-20s %-5s %-10s\n", "STT", "Ho ten", "Tuoi", "Diem TB");
		int stt = 1;
		printf("%-5d %-20s %-5d %-10.2f\n", stt++, head->hoTen, head->tuoi, head->dtb);
		head = head->next;
	}
}
int main() {
	dssv* head = NULL;
    char hoTen[50], tenCanChenTruoc[50], tenCanXoa[50];
    int tuoi;
    double dtb;
    int chon;
	do {
        printf("\nMENU:");
        printf("\n1. Them sinh vien");
        printf("\n2. Chen sinh vien vao truoc sinh vien nao ");
        printf("\n3. Xoa sinh vien");
        printf("\n4. Hien thi danh sach sinh vien");
        printf("\n5. Thoat");
        printf("\nChon thao tac: ");
        scanf("%d", &chon);
        getchar();
        switch (chon) {
        	case 1:
                printf("Nhap ho ten sinh vien: ");
                fgets(hoTen, sizeof(hoTen), stdin);
                hoTen[strcspn(hoTen, "\n")] = '\0';
                printf("Nhap tuoi: ");
                scanf("%d", &tuoi);
                printf("Nhap diem trung binh: ");
                scanf("%lf", &dtb);
                getchar();
                them(&head, hoTen, tuoi, dtb);
                break;
            case 2:
                printf("Nhap ho ten sinh vien moi: ");
                fgets(hoTen, sizeof(hoTen), stdin);
                hoTen[strcspn(hoTen, "\n")] = '\0';
                printf("Nhap tuoi: ");
                scanf("%d", &tuoi);
                printf("Nhap diem trung binh: ");
                scanf("%f", &dtb);
                getchar();
                printf("Nhap ten sinh vien truoc do de chen vao truoc: ");
                fgets(tenCanChenTruoc, sizeof(tenCanChenTruoc), stdin);
                tenCanChenTruoc[strcspn(tenCanChenTruoc, "\n")] = '\0';
                chen(&head, hoTen, tuoi, dtb, tenCanChenTruoc);
                break;
            case 3:
                printf("Nhap ho ten sinh vien can xoa: ");
                fgets(hoTen, sizeof(hoTen), stdin);
                hoTen[strcspn(hoTen, "\n")] = '\0';
                xoa(&head, hoTen);
                in(head);
                break;
            case 4:
                in(head);
                break;
            case 5:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while(chon != 5);
	return 0;
}
