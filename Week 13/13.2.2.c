#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Nhap mot ky tu: ");
    scanf("%c", &ch);

    // Kiểm tra và hiển thị kết quả
    if (isalpha(ch)) {
        printf("%c la mot chu cai.\n", ch);
    }

    if (isdigit(ch)) {
        printf("%c la mot chu so.\n", ch);
    }

    if (isalnum(ch)) {
        printf("%c la mot chu cai hoac chu so.\n", ch);
    }

    if (islower(ch)) {
        printf("%c la mot chu cai thuong.\n", ch);
    }

    if (isupper(ch)) {
        printf("%c la mot chu cai in hoa.\n", ch);
    }

    char lowercaseCh = tolower(ch);
    char uppercaseCh = toupper(ch);
    printf("Chuyen doi %c thanh chu cai thuong: %c\n", ch, lowercaseCh);
    printf("Chuyen doi %c thanh chu cai in hoa: %c\n", ch, uppercaseCh);

    return 0;
}
