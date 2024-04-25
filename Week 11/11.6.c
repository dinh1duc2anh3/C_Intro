#include <stdio.h>

void incomePlus(long * current, int year){
    if (year > 3) {
        *current += 300000;
    }
}

int main(){
    long salary = 500000;
    int yearWork = 4;

    printf("Salary before recommendation: %ld.\n",salary);
    incomePlus(&salary,yearWork);

    printf("\n-----------------------------------------\n");
    printf("Salary after recommendation: %ld.\n",salary);
    return 0;
}