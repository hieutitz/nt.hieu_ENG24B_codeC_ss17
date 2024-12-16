#include <stdio.h>

void nhapMang(int *arr, int *size) {
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", size);

    for (int i = 0; i < *size; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", (arr + i));
    }
}

void inMang(int *arr, int size) {
    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int laSoChan(int n) {
    return (n % 2 == 0);
}

int laSoNguyenTo(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void inSoChan(int *arr, int size) {
    printf("Cac phan tu chan trong mang: ");
    for (int i = 0; i < size; i++) {
        if (laSoChan(*(arr + i))) {
            printf("%d ", *(arr + i));
        }
    }
    printf("\n");
}

void inSoNguyenTo(int *arr, int size) {
    printf("Cac phan tu nguyen to trong mang: ");
    for (int i = 0; i < size; i++) {
        if (laSoNguyenTo(*(arr + i))) {
            printf("%d ", *(arr + i));
        }
    }
    printf("\n");
}

void daoNguocMang(int *arr, int size) {
    printf("Mang dao nguoc: ");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int arr[100];
    int size = 0;
    int choice, x;

    do {
        printf("\nMENU\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. In ra cac phan tu la so chan\n");
        printf("3. In ra cac phan tu la so nguyen to\n");
        printf("4. Dao nguoc mang\n");
        printf("5. Sap xep mang\n");
        printf("    1. Tang dan\n");
        printf("    2. Giam dan\n");
        printf("6. Tim kiem phan tu\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            nhapMang(arr, &size);
            break;
        case 2:
            inSoChan(arr, size);
            break;
        case 3:
            inSoNguyenTo(arr, size);
            break;
        case 4:
            daoNguocMang(arr, size);
            break;
        case 5:
           
            break;
        case 6:
            
            break;
        case 7:
            printf("Thoat chuong trinh.\n");
            break;
        default:
            printf("Lua chon khong hop le. Vui long chon lai!\n");
        }
    } while (choice != 7);

    return 0;
}

