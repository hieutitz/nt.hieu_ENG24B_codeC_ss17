#include <stdio.h>
#include <string.h>
#include <ctype.h>

void nhapChuoi(char *str) {
    getchar();
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
}

void inChuoi(char *str) {
    printf("Chuoi vua nhap: %s\n", str);
}

int demChuCai(char *str) {
    int count = 0;
    while (*str) {
        if (isalpha(*str)) {
            count++;
        }
        str++;
    }
    return count;
}

int demChuSo(char *str) {
    int count = 0;
    while (*str) {
        if (isdigit(*str)) {
            count++;
        }
        str++;
    }
    return count;
}

int demKyTuDacBiet(char *str) {
    int count = 0;
    while (*str) {
        if (!isalnum(*str) && !isspace(*str)) {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[100];
    int choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi\n");
        printf("3. Dem so luong chu cai trong chuoi va in ra\n");
        printf("4. Dem so luong chu so trong chuoi va in ra\n");
        printf("5. Dem so luong ky tu dac biet trong chuoi va in ra\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            nhapChuoi(str);
            break;
        case 2:
            inChuoi(str);
            break;
        case 3:
            printf("So luong chu cai trong chuoi: %d\n", demChuCai(str));
            break;
        case 4:
            printf("So luong chu so trong chuoi: %d\n", demChuSo(str));
            break;
        case 5:
            printf("So luong ky tu dac biet trong chuoi: %d\n", demKyTuDacBiet(str));
            break;
        case 6:
            printf("Thoat chuong trinh.\n");
            break;
        default:
            printf("Lua chon khong hop le. Vui long chon lai!\n");
        }
    } while (choice != 6);

    return 0;
}

