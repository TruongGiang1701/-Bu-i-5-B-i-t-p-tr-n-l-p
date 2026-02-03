// Bài 4: Mảng 1 chiều – Sắp xếp và chèn phần tử - Lập trình C
// Yêu cầu:
// - Nhập số nguyên n (0 < n ≤ 100)
// - Nhập mảng n số nguyên
// - Sắp xếp mảng theo thứ tự tăng dần
// - Nhập thêm một số x và chèn x vào mảng sao cho mảng vẫn tăng dần
// - In mảng sau khi chèn

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

    int a[101]; // 101 để sau khi chèn thêm 1 phần tử vẫn không bị tràn

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

    // Sắp xếp mảng tăng dần (dùng thuật toán đơn giản Bubble Sort)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Mang sau khi sap xep tang dan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // Nhập phần tử x cần chèn
    int x;
    printf("Nhap gia tri x can chen: ");
    while (scanf("%d", &x) != 1) {
        printf("Du lieu khong hop le. Vui long nhap so nguyen x: ");
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF) {
        }
    }

    // Tìm vị trí chèn sao cho mảng vẫn tăng dần
    int pos = n; // mặc định chèn cuối nếu x lớn hơn mọi phần tử
    for (int i = 0; i < n; i++) {
        if (x <= a[i]) {
            pos = i;
            break;
        }
    }

    // Dời các phần tử từ cuối về sau một vị trí để chèn x
    for (int i = n; i > pos; i--) {
        a[i] = a[i - 1];
    }
    a[pos] = x;
    n++; // tăng số lượng phần tử sau khi chèn

    // In mảng sau khi chèn
    printf("Mang sau khi chen x: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
