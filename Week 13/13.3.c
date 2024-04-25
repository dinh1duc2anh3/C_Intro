#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

#define STR_LEN 100

bool check(char *str) {
{
        for (int i = 0; i < 3; i++) {
            if (!isalpha(str[i]))
                return false;
        }

        for (int i = 3; i < 7; i++) {
            if (!isdigit(str[i]))
                return false;
        }
        return true;
    }
}

int main() {
    char str[STR_LEN];
    printf("Nhap ma co dang LLLNNNN: ");
    fgets(str, sizeof(str), stdin);


    if (check(str))
        printf("Nhap ma dung.\n");
    else
        printf("Nhap lai ma.\n");

    return 0;
}
