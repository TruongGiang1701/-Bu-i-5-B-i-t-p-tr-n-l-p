// Bài 3: Tìm kiếm trong mảng - Lập trình C
// Yêu cầu:
// - Nhập số nguyên n
// - Nhập mảng n số nguyên
// - Nhập số x
// - Kiểm tra x có tồn tại trong mảng hay không
// - Nếu có, in ra tất cả vị trí xuất hiện của x (dùng chỉ số từ 0 hoặc 1, ở đây dùng chỉ số từ 0)

#include <stdio.h>

int main() {
    int n;

    // Nhập n với kiểm tra điều kiện 0 < n <= 100
    do {
        printf("Nhap so phan tu n (0 < n <= 100): ");
        if (scanf("%d", &n) != 1) {
            printf("Du lieu khong hop le. Vui long nhap lai!\n");
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) {
            }
            n = -1;
        } else if (n <= 0 || n > 100) {
            printf("n phai thoa man 0 < n <= 100. Vui long nhap lai!\n");
        }
    } while (n <= 0 || n > 100);

    int a[100];

    // Nhập mảng
    printf("Nhap %d so nguyen:\n", n);
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        while (scanf("%d", &a[i]) != 1) {
            printf("Du lieu khong hop le. Vui long nhap so nguyen cho a[%d]: ", i);
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) {
            }
        }
    }

    int x;
    printf("Nhap gia tri x can tim: ");
    while (scanf("%d", &x) != 1) {
        printf("Du lieu khong hop le. Vui long nhap so nguyen x: ");
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF) {
        }
    }

    // Tìm kiếm x trong mảng
    int found = 0;
    printf("Cac vi tri xuat hien cua x trong mang (chi so tu 0): ");
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found) {
        printf("\nKhong tim thay x trong mang.\n");
    } else {
        printf("\n");
    }

    return 0;
}
