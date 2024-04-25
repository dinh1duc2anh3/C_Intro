#include <stdio.h>
#define STR_LEN 100
#include <string.h>
//mo phong ham strcpy
//sao chep chuoi nguon va chuoi dich

void my_strcpy(char *des, char *src){
    while(*des++ = *src++);
}



int main(){
    char source[]="Hello world.";
    char des[STR_LEN];

    my_strcpy(des,source);
    printf("chuoi dich la: %s\n",des);
    return 0;
}