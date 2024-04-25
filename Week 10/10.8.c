#include <stdio.h>

void swap(int* a,int * b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void reverseArray(int a[],int size){
    for(int i = 0; i < size / 2; i++){
        swap(&a[i] , &a[size - 1- i]);
    }
}
int main(){
    int arr[]={ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array before reverse: ");
    for (int i = 0; i < size; i ++ ){
        printf("%d ",arr[i]);
    }
    printf("\n----------------------\n");

    reverseArray(arr,size);
     printf("Array after reverse: ");
    for (int i = 0; i < size; i ++ ){
        printf("%d ",arr[i]);
    }
    printf("\n----------------------\n");
   
    return 0;
}