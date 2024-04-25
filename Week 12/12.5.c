#include <stdio.h>


void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int *a, int size){
    for (int i =0; i < size; i++){
        printf("%d ",*(a+i));
    }
}

void reverseArray1(int a[], int size){
    //reverse using pointer
    for (int i = 0; i <= (size / 2)-1 ; i ++){
        swap(&a[i],&a[size - i-1]);
    }
    printf("array after pointer reverse: ");
    printArray(a,size);
}


int main(){
    int a[]= { 1, 3, 4, 2 };
    int size = sizeof(a) / sizeof(a[0]);
    reverseArray1(a,size);
    return 0;
}