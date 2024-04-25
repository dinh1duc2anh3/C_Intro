#include <stdio.h>
#define N 20
int main(){
    int arr[N] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int oddSum = 0;
    for  (int i = 0; i < N ; i++){
        if (arr[i] % 2 == 1){
           oddSum = oddSum + arr[i];
        }
    }
    printf("The sum of odd number: %d.\n",oddSum);

    int max = arr[0];
    for (int i =1; i < N ; i++){
        if (arr[i] > max) max = arr[i];
    }
    printf("Max number is : %d.\n",max);
    return 0;
}