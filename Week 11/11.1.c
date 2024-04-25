#include <stdio.h>
int main(){
    int a, b , c;
    printf("nhap a,b,c: ");
    scanf("%d %d %d",&a,&b,&c);
    int *aPtr = &a;
    int *bPtr = &b;
    int *cPtr = &c;
    printf("dia chi cua %d la: %p.\n",a,aPtr);
    printf("dia chi cua %d la: %p.\n",b,bPtr);
    printf("dia chi cua %d la: %p.\n",c,cPtr);
    return 0;
}