// Bài 6: Mảng 2 chiều – Tìm giá trị lớn nhất - Lập trình C
// Yêu cầu:
// - Nhập m, n (0 < m, n <= 50)
// - Nhập ma trận m x n
// - Tìm phần tử lớn nhất trong ma trận
// - In:
//   + Giá trị lớn nhất
//   + Vị trí dòng và cột của nó (dùng chỉ số từ 1 cho gần với toán học)

#include <stdio.h>

int main() {
    int m, n;

    // Nhập m, n với kiểm tra điều kiện
    do {
        printf("Nhap so dong m (0 < m <= 50): ");
        if (scanf("%d", &m) != 1) {
            printf("Du lieu khong hop le. Vui long nhap lai!\n");
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) {
            }
            m = -1;
        } else if (m <= 0 || m > 50) {
            printf("m phai thoa man 0 < m <= 50. Vui long nhap lai!\n");
        }
    } while (m <= 0 || m > 50);

    do {
        printf("Nhap so cot n (0 < n <= 50): ");
        if (scanf("%d", &n) != 1) {
            printf("Du lieu khong hop le. Vui long nhap lai!\n");
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) {
            }
            n = -1;
        } else if (n <= 0 || n > 50) {
            printf("n phai thoa man 0 < n <= 50. Vui long nhap lai!\n");
        }
    } while (n <= 0 || n > 50);

    int a[50][50];

    // Nhập ma trận
    printf("Nhap ma tran %d x %d:\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            while (scanf("%d", &a[i][j]) != 1) {
                printf("Du lieu khong hop le. Vui long nhap so nguyen cho a[%d][%d]: ", i, j);
                int ch;
                while ((ch = getchar()) != '\n' && ch != EOF) {
                }
            }
        }
    }

    // Tìm phần tử lớn nhất
    int max = a[0][0];
    int dongMax = 0, cotMax = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
                dongMax = i;
                cotMax = j;
            }
        }
    }

    // In kết quả (vị trí dùng chỉ số từ 1)
    printf("Gia tri lon nhat trong ma tran: %d\n", max);
    printf("Vi tri: dong %d, cot %d\n", dongMax + 1, cotMax + 1);

    return 0;
}
