#include <stdio.h>
#define SIZE 5

void swap(int *a,int *b){
    int tmp;
    tmp = *b;
    *b = *a;
    *a = tmp;
}



void descendingArray(int a[],int arrSize){
    for (int i = 0; i < arrSize ; i++){
        for (int j = arrSize-1 ; j > i ; j --){
            if (a[j] > a[j-1]) swap(&a[j],&a[j-1]);
        }
    }
}

int main(){
    int arr[SIZE]={1,2,3,4,5};
    int arr_copy1[SIZE],arr_copy2[SIZE];
    




    //in day arr ban dau
    printf("Array at the beginning : ");
    for (int i = 0; i < SIZE ; i ++ ){
        printf("%d ",arr[i]);
    }
    printf("\n");




    //thao tac tren arr_copy1
    for (int i = 0; i < SIZE ; i++){
        arr_copy1[i] = arr[i];
    }

    descendingArray(arr_copy1,SIZE);

    //in day arr sau khi sap xep theo thu tu giam dan
    printf("Array with descending order : ");
    for (int i = 0; i < SIZE ; i ++ ){
        printf("%d ",arr_copy1[i]);
    }
    printf("\n");





    //lap arr_copy2
    int cnt = 0;
    for (int i = 0; i < SIZE ; i ++ ){
        if (arr[i] % 2 == 1) {
            arr_copy2[cnt] = arr [i];
            cnt++;

        }
    }

    //in ra day arr sap xep cac so le giam dan
    for (int i = 0; i < cnt; i ++){
        for (int j = cnt-1; j > i ; j --){
            if (arr_copy2[j] > arr_copy2[j-1] ) swap(&arr_copy2[j],&arr_copy2[j-1]);

        }
    }
    printf("Array with odd number in descending order : ");
    for (int i = 0; i < cnt ; i ++ ){
        printf("%d ",arr_copy2[i]);
    }
    printf("\n");

    return 0;
}