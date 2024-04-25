#include <stdio.h>
#define STR_LEN 100
int main(){
    char ho_va_ten[STR_LEN];
    printf("nhap \"ten ho\": ");
    scanf("%s",ho_va_ten);
    // fgets(ho_va_ten,sizeof(ho_va_ten),stdin);

    printf("ten cua ban la: %s",ho_va_ten);
    return 0;
}