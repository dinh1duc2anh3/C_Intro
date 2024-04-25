#include <stdio.h>
#define STR_LEN 100
void print(char* str){
    while(*str){
        printf("%c",*str);
        str++;
    }
}

void replace(char * str, char a, char b){
    while (*str){
        if (*str == a) *str = b;
        str++;
    }
}

int main(){
    char str[STR_LEN];
    char a,b;
    printf("nhap chuoi (khong cach) : ");
    scanf("%s",str);


    //xu li ky tu xuong dong con sot lai tu lan scanf truoc do.
    while (getchar() != '\n');



    printf("thay ki tu a bang ki tu b: ");

    scanf("%c %c",&a,&b);
    replace(str,a,b);
    print(str);
    return 0;
}