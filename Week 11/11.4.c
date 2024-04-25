#include <stdio.h>

void replace(int *a,int *b,int * c){
    int tmp;
    tmp = *a;
    *a = *b; 
    *b = *c;
    *c = tmp;
}

int main(){
    int a,b,c;
    printf("nhap a,b,c: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("gia tri a,b,c truoc khi doi: %d %d %d.\n",a,b,c);
    replace(&a,&b,&c);
    printf("gia tri a,b,c sau khi doi: %d %d %d.\n",a,b,c);
    return 0;
}