//sap xep day 0 , so am , so duong
#include <stdio.h>
#include <stdbool.h>
#define N 100

void swap(int*a,int * b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

bool check0(int a[],int v,int size){
    for (int i = v; i < size; i++){
        if (a[i] == 0) return true;
    }
    return false;
}

bool checkNegative(int a[],int v,int size){
    for (int i = v; i < size; i++){
        if (a[i] < 0) return true;
    }
    return false;
}
int m1 = 0 ;
int sort0(int a[],int size){
    for (int i = 0; i <size; i++){
        for (int j = i; j < size; j++){
            if (check0(a,j,size)) {
                if (a[j] == 0) {
                    swap(&a[j] , &a[i]);
                    break;
                }
            }
            else {
                 m1 = j;
                return m1;
            }
        }
    }
    return size;
}

void sortNegative(int a[],int v,int size){
    for (int i = v; i < size; i++) {
        for (int j = i; j<size;j++) {
            if (checkNegative(a,j,size)) {
                if (a[j] < 0) {
                    swap(&a[j] , &a[i]);
                    break;
                }
            }
        }
    }
}

int main(){
    int n,a[N];
    //nhap n
    printf("nhap n: ");
    scanf("%d",&n);

    //nhap mang a[n]
    for (int i = 0; i < n; i++){
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }

    //in ra day so truoc khi sap xep
    printf("day so truoc khi sap xep : ");
    for (int i = 0; i <n; i++) {
        printf("%d ",a[i]);
    }
    printf("\n");

    //sap xep so 0
    sort0(a,n);

    //sap xep so am
    sortNegative(a,sort0(a,n),n);

    //in ra day so sau khi sap xep
    printf("day so sau khi sap xep : ");
    for (int i = 0; i <n; i++) {
        printf("%d ",a[i]);
    }

    return 0;
}