#include <stdio.h>
#include <stdbool.h>
#define SIZE 10

#define N 20

bool sameArr(int a[SIZE],int b[SIZE]){
    for (int i = 0; i < SIZE ; i ++){
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main(){
    int arr1[SIZE] = {1,2,3,4,5,3,7,6,2,10};
    int arr2[SIZE] = {1,2,3,4,5,3,7,6,2,10};
    int arr3[SIZE] = {1,2,3,4,5,3,7,6,2,9};
    
    if (sameArr(arr1,arr2)) printf("arr1 and arr2 is the same.\n");
    else printf("arr1 and arr2 is not the same.\n");

    if (sameArr(arr1,arr3)) printf("arr1 and arr3 is the same.\n");
    else printf("arr1 and arr3 is not the same.\n");
    return 0;
}