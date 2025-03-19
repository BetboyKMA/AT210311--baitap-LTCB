#include <stdio.h>

int main() {
    int ngay, thang, nam;
    printf("Nhập ngày, tháng, năm: ");
    scanf("%d%d%d", &ngay, &thang, &nam);
    printf("%02d/%02d/%d\n", ngay, thang, nam);

    return 0;
}

