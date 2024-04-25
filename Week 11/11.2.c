#include <stdio.h>
int main(){
    int a[] = {13, -355, 235, 47, 67, 943, 1222} ;
    int size = sizeof(a)/sizeof(a[0]);
    int * aPtr = a;
    for ( int i = 0; i <5 ; i++){
        printf("%p ",aPtr+i);
    }
    return 0;
}