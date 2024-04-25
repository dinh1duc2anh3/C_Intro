#include <stdio.h>
#include <stdbool.h>
#define AVG_SAL 15000

bool qualify(int h){
    if ( h < 10 || h > 65) return false;
    return true;
}

int salary(int h){
    int sal;
    if(qualify(h)) {
        if (h <= 40 ) sal = h*AVG_SAL;
        else {
            sal = 40*AVG_SAL + (h-40)*1.5*AVG_SAL; 
        }
    }
    else {
        printf("Invalid hour of work.\n");
    }
    return sal;
}

int main(){
    int hour=0;
    printf("Enter hour of work: ");
    scanf("%d",&hour);
    printf("%d",salary(hour));
    return 0;
}