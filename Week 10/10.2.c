#include <stdio.h>
#define N 20
int main(){
    int arr[N] = {1,2,3,4,5,3,7,6,2,10,8,12,13,14,15,16,17,18,19,20};
    int sum = 0;
    for (int i = 1; i < N-1; i ++){
        if (arr[i] > arr[i-1] && arr[i] > arr[i+1]) sum = sum + arr[i];
    }
    printf("%d.\n",sum);
    return 0;
}