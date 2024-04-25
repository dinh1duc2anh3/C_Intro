#include <stdio.h>
#include <stdbool.h>

bool isSymmetric(int a[],int size){
    for (int i = 0; i < size/2 ; i++){
        if (a[i] != a[size - i -1]) return false;
    }
    return true;
}
int main(){
    int arr1 []= { 1,5, 2, 2,5, 1};
    int arr2[]= {1, 2, 2, 3};
    int arr3[]= {1,2,8,4,3,4,8,2,1};
    
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int size3 = sizeof(arr3) / sizeof(arr3[0]);

    if (isSymmetric(arr1,size1)) printf("xau arr1 doi xung.\n");
    else printf("xau arr1 khong doi xung.\n");

    if (isSymmetric(arr2,size2)) printf("xau arr2 doi xung.\n");
    else printf("xau arr2 khong doi xung.\n");

    if (isSymmetric(arr3,size3)) printf("xau arr3 doi xung.\n");
    else printf("xau arr3 khong doi xung.\n");


    
    return 0;
}