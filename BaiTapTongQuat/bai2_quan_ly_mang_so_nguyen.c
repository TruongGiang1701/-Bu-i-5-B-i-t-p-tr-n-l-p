// Bài tập tổng quát - quản lý mảng số nguyên - Lập trình C
// Bài 2:
// - Mảng số nguyên dataList tối đa 100 phần tử
// - Menu:
//   1. Nhập vào số nguyên x => thêm vào mảng dataList
//   2. Sắp xếp theo thứ tự tăng dần
//   3. Tìm kiếm phần tử trong mảng
//   4. Xoá phần tử trong mảng
//   5. Hiển thị
//   6. Thoát

#include <stdio.h>

#define MAX_SIZE 100

// Hàm hiển thị menu
void hienThiMenu() {
    printf("\n===== MENU QUAN LY MANG SO NGUYEN =====\n");
    printf("1. Them phan tu vao mang\n");
    printf("2. Sap xep mang tang dan va hien thi\n");
    printf("3. Tim kiem phan tu trong mang\n");
    printf("4. Xoa phan tu trong mang\n");
    printf("5. Hien thi mang\n");
    printf("6. Thoat\n");
    printf("Nhap lua chon (1-6): ");
}

// Hàm hoán đổi 2 số nguyên
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm sắp xếp tăng dần (Bubble Sort)
void sapXepTangDan(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// Hàm hiển thị mảng
void hienThiMang(int arr[], int size) {
    if (size == 0) {
        printf("Mang rong.\n");
        return;
    }
    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int dataList[MAX_SIZE];
    int size = 0; // số phần tử hiện có trong mảng
    int choice;

    do {
        hienThiMenu();
        if (scanf("%d", &choice) != 1) {
            printf("Lua chon khong hop le. Vui long nhap so tu 1 den 6.\n");
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) {
            }
            choice = 0;
            continue;
        }

        switch (choice) {
        case 1: {
            if (size >= MAX_SIZE) {
                printf("Mang da day, khong the them phan tu moi.\n");
            } else {
                int x;
                printf("Nhap so nguyen x can them: ");
                while (scanf("%d", &x) != 1) {
                    printf("Du lieu khong hop le. Vui long nhap so nguyen: ");
                    int ch;
                    while ((ch = getchar()) != '\n' && ch != EOF) {
                    }
                }
                dataList[size] = x;
                size++;
                printf("Da them %d vao mang.\n", x);
            }
            break;
        }

        case 2: {
            if (size == 0) {
                printf("Mang rong, khong co gi de sap xep.\n");
            } else {
                sapXepTangDan(dataList, size);
                printf("Mang sau khi sap xep tang dan:\n");
                hienThiMang(dataList, size);
            }
            break;
        }

        case 3: {
            if (size == 0) {
                printf("Mang rong, khong co gi de tim kiem.\n");
            } else {
                int x;
                printf("Nhap gia tri can tim: ");
                while (scanf("%d", &x) != 1) {
                    printf("Du lieu khong hop le. Vui long nhap so nguyen: ");
                    int ch;
                    while ((ch = getchar()) != '\n' && ch != EOF) {
                    }
                }

                int count = 0;
                for (int i = 0; i < size; i++) {
                    if (dataList[i] == x) {
                        count++;
                    }
                }

                if (count == 0) {
                    printf("Khong tim thay gia tri %d trong mang.\n", x);
                } else {
                    printf("Co %d phan tu trong mang co gia tri bang %d.\n", count, x);
                }
            }
            break;
        }

        case 4: {
            if (size == 0) {
                printf("Mang rong, khong co gi de xoa.\n");
            } else {
                int x;
                printf("Nhap gia tri can xoa: ");
                while (scanf("%d", &x) != 1) {
                    printf("Du lieu khong hop le. Vui long nhap so nguyen: ");
                    int ch;
                    while ((ch = getchar()) != '\n' && ch != EOF) {
                    }
                }

                int removed = 0;
                for (int i = 0; i < size; ) {
                    if (dataList[i] == x) {
                        // Dịch các phần tử phía sau lên
                        for (int j = i; j < size - 1; j++) {
                            dataList[j] = dataList[j + 1];
                        }
                        size--;
                        removed++;
                        // không tăng i, vì sau khi dịch, phần tử mới tại i cần kiểm tra lại
                    } else {
                        i++;
                    }
                }

                if (removed == 0) {
                    printf("Khong tim thay gia tri %d trong mang, khong co phan tu nao bi xoa.\n", x);
                } else {
                    printf("Da xoa %d phan tu co gia tri bang %d.\n", removed, x);
                    printf("Mang sau khi xoa: ");
                    hienThiMang(dataList, size);
                }
            }
            break;
        }

        case 5: {
            hienThiMang(dataList, size);
            break;
        }

        case 6:
            printf("Thoat chuong trinh.\n");
            break;

        default:
            printf("Lua chon khong hop le. Vui long chon tu 1 den 6.\n");
            break;
        }

    } while (choice != 6);

    return 0;
}
