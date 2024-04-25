#include <stdio.h>
int main(){
    float a,b,c;
    float * ptr;
    printf("nhap a,b,c: ");
    scanf("%f %f %f",&a,&b,&c);
    
    ptr = &a;
    *ptr = *ptr + 100;
    ptr = &b;
    *ptr = *ptr + 100;
    ptr = &c;
    *ptr = *ptr + 100;

    printf("gia tri a, b,c sau khi tang: %f %f %f",a,b,c);
    return 0;
}