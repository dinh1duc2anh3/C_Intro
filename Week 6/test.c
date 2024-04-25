#include <stdio.h>
#include <stdbool.h>

bool data_stat = false;
char vec;
int hour;

int confirm(char v, int h) {
    char answer;
    printf("------------------CONFIRM------------------\n");
    if (v == 'c') {
        printf("Vehicle type: Car\n");
    } else if (v == 'b') {
        printf("Vehicle type: Bus\n");
    } else if (v == 't') {
        printf("Vehicle type: Truck\n");
    }
    printf("Hour: %d\nIs that true? (y/n)", h);
    answer  = getchar(); // Notice the space before %c
    return (answer == 'y');
}

void billPrint(char v, int h) {
    float bill = 0;

    if (v == 'c') {
        if (h <= 2) {
            bill = h * 0.7;
        } else {
            bill = 2 * 0.7 + (h - 2) * 2.5;
        }
    } else if (v == 'b') {
        if (h <= 2) {
            bill = h * 1.5;
        } else {
            bill = 1.5 * 2 + 2 * (h - 2);
        }
    } else if (v == 't') {
        if (h <= 2) {
            bill = h * 2.5;
        } else {
            bill = 2.5 * 2 + (h - 2) * 3.25;
        }
    }

    printf("\n-----------------DUCANH PARKING LOT BILL-----------------\nYou have to pay %.2f $.", bill);
}

void dataInput() {
    printf("'c' : car ;  'b' : Bus   ;   't': Truck\nEnter vehicle's type : ");
    vec = getchar();

    if (vec == 'c' || vec == 'b' || vec == 't') {
        printf("Hours in parking lot = ");
        hour = getchar();

        if (hour < 0) {
            printf("Please reenter the information!\n");
            data_stat = false;
            return;
        }
        data_stat = true;
    } else {
        printf("Please reenter the information!\n");
        data_stat = false;
        return;
    }

    if (confirm(vec, hour) == 0) {
        printf("Please reenter the information!\n");
        data_stat = false;
    }
}

int main() {
    while (!data_stat) {
        dataInput();
    }
    billPrint(vec, hour);

    return 0;
}
