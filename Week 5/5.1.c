#include <stdio.h>
int main (){
    float distance;
    printf("enter km: ");
    scanf("%f",&distance);
    printf("%.3f km = %.3f mile",distance,distance*0.621371);

    return 0;
}