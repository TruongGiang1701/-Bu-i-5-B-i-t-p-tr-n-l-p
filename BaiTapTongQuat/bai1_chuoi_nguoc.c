// Bài tập tổng quát - Lập trình C
// Bài 1:
// - Khai báo chuỗi str có độ dài tối đa là 200 ký tự
// - Nhập chuỗi từ bàn phím
// - Hiển thị chuỗi
// - Hiển thị chuỗi ngược lại (ví dụ: "Tran Van Diep" -> "peiD naV narT")

#include <stdio.h>
#include <string.h>

int main() {
    char str[201]; // tối đa 200 ký tự + 1 ký tự '\0'

    printf("Nhap chuoi (toi da 200 ky tu): ");

    // Dùng fgets để đọc cả khoảng trắng
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Nhap chuoi that bai.\n");
        return 1;
    }

    // Loại bỏ ký tự '\n' nếu có
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    // Hiển thị chuỗi gốc
    printf("Chuoi vua nhap: %s\n", str);

    // Hiển thị chuỗi đảo ngược từng ký tự
    printf("Chuoi khi hien thi nguoc: ");
    if (len == 0) {
        printf("\n");
    } else {
        for (int i = (int)len - 1; i >= 0; i--) {
            putchar(str[i]);
        }
        printf("\n");
    }

    return 0;
}
