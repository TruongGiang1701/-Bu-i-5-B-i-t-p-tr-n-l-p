// Bài 2: Tính toán trên mảng - Lập trình C
// Yêu cầu:
// - Nhập số nguyên n
// - Nhập mảng gồm n số nguyên
// - Tính và in:
//   + Tổng các phần tử
//   + Giá trị trung bình cộng
//   + Số lượng số chẵn trong mảng

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
    long long tong = 0;
    int soChan = 0;

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
        tong += a[i];
        if (a[i] % 2 == 0) {
            soChan++;
        }
    }

    // Tính giá trị trung bình cộng
    double trungBinh = (double)tong / n;

    // In kết quả
    printf("Tong cac phan tu: %lld\n", tong);
    printf("Gia tri trung binh cong: %.2f\n", trungBinh);
    printf("So luong so chan trong mang: %d\n", soChan);

    return 0;
}
