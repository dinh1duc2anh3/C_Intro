//tim + dem max
#include <stdio.h>
#include <stdio.h>
#include <stdbool.h>
#define N 100

int findMax(int a[],int size){
    int max = -1;
    for (int i = 0; i < size; i++){
        if (a[i] > max) max = a[i];
    }
    return max;
}

int countMax(int a[],int max, int size){
   int  count = 0;
    for (int i = 0; i < size; i++){
        if (a[i] == max) count ++;
    }
    return count;
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
    printf("day so truoc khi  xep : ");
    for (int i = 0; i <n; i++) {
        printf("%d ",a[i]);
    }
    printf("\n");
    int max = findMax(a,n);
    printf("max element is : %d.\n",max);
    printf("number of element equal to max element is : %d.\n",countMax(a,max,n));




    return 0;
}