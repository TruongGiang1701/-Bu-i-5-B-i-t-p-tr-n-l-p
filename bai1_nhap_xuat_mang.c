// Bài 1: Nhập và xuất mảng - Lập trình C
// Yêu cầu:
// - Nhập số nguyên n (0 < n ≤ 100)
// - Nhập n số nguyên vào mảng
// - In các phần tử của mảng theo thứ tự đã nhập

#include <stdio.h>

int main() {
    int n;

    // Nhập n với kiểm tra điều kiện 0 < n <= 100
    do {
        printf("Nhap so phan tu n (0 < n <= 100): ");
        if (scanf("%d", &n) != 1) {
            // Xử lý trường hợp nhập không phải số
            printf("Du lieu khong hop le. Vui long nhap lai!\n");
            // Xoa bo dem nhap
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) {
            }
            n = -1; // de tiep tuc vong lap
        } else if (n <= 0 || n > 100) {
            printf("n phai thoa man 0 < n <= 100. Vui long nhap lai!\n");
        }
    } while (n <= 0 || n > 100);

    int a[100];

    // Nhap mang n phan tu
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

    // Xuat mang
    printf("Cac phan tu cua mang theo thu tu da nhap:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
