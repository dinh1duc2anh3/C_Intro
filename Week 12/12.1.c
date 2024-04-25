#include <stdio.h>

int countEven(int *arr, int size){
    int count = 0;
    for ( int i = 0; i < size ; i ++){
        if (arr[i] % 2 == 1) count ++;
    }
    return count;
}

int main(){
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("so phan tu le trong mang la: %d.\n",countEven(numbers,size));
    return 0;
}