#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool snt(int n){
    for (int i = 2; i<= sqrt((float)n) ; i++){
        if (n % i == 0) return false;
    }
    return true;
}



int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    
    // if(snt(a)) printf("%d is a prime number.\n",a);
    // else {
    //     printf("%d is not a prime number.\n",a);
    // }

    printf("2 ");
    for (int i = 3; i <= a ; i+=2){
        if (snt(i)) printf("%d ",i);
    }
    return 0;
}