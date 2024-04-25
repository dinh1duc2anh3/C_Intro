 #include <stdio.h>
 #include <string.h>
#define STR_LEN 100

int countSpace(char *str){
    int count = 0;
    while (*str){
        if (*str == ' ') count++;
        str++;
    }
    return count;
}

 int main()
 {
   char str[STR_LEN];
   printf("nhap chuoi : ");
   fgets(str,sizeof(str),stdin);
   printf("so dau cach dem duoc la: %d.\n",countSpace(str));
 }
 