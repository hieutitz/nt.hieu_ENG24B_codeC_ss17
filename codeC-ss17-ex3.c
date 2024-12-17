#include <stdio.h>
#include <string.h>
#include <ctype.h>

void nhapChuoi(char *str) {
    getchar();
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
}

void inDaoNguoc(char *str) {
    int len = strlen(str);
    printf("Chuoi dao nguoc: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", *(str + i));
    }
    printf("\n");
}

int demTu(char *str) {
    int count = 0, inWord = 0;
    while (*str) {
        if (!isspace(*str) && inWord == 0) {
            inWord = 1;
            count++;
        } else if (isspace(*str)) {
            inWord = 0;
        }
        str++;
    }
    return count;
}

void themChuoi(char *str1, char *str2) {
    strcat(str1, str2);
}

int main() {
    char str1[200], str2[100];
    int choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi dao nguoc\n");
        printf("3. Dem so luong tu trong chuoi\n");
        printf("4. In hoa tat ca chu cai trong chuoi\n");
        printf("5. Nhap vao chuoi khac va them vao chuoi ban dau\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Nhap chuoi: ");
            nhapChuoi(str1);
            break;
        case 2:
            inDaoNguoc(str1);
            break;
        case 3:
            printf("So luong tu trong chuoi: %d\n", demTu(str1));
            break;
        case 4:
            break;
        case 5:
            printf("Nhap chuoi khac: ");
            nhapChuoi(str2);
            themChuoi(str1, str2);
            printf("Chuoi sau khi them: %s\n", str1);
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

