#include <stdio.h>
int main(){
    int a[]= { 1, 3, 4, 2 };
    int size = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < size; i ++){
        for (int j = i; j < size ; j++){
            for ( int k = i; k <= j ; k++){
                printf("%d ",a[k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}