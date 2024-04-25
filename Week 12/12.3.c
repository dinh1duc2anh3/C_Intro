#include <stdio.h>
#define N 100
void getSale(int * a, int quarter){

    for (int i = 0; i < quarter; i ++){
        printf("sale of quater %d = ",i+1);
        scanf("%d",a+i);

    }
}

int totalSale(int * a, int quarter){
    int total = 0;
    for ( int i = 0; i < quarter ; i ++ ){
        total += *(a+i);
    }
    return total;
}

int main(){
    int a[N];
    getSale(a,4);
    printf("totol sale of the year is %d.\n",totalSale(a,4));
    return 0;
}
