#include <stdio.h>

typedef struct Date{
    int day;
    int month;
    int year;
}  Date;

int checkLeapYear(int v){
    if (v % 100 == 0) {
        if (v % 400 == 0) return 1;
        else return 0;
    }
    else {
        if (v %4 == 0) return 1;
        else return 0;
    }
}

int check(int day,int month, int year){  
    if (day > 31) return 0;
    if (month == 4 || month == 6 || month == 9 || month == 11 ) {
        if (day > 30) return 0;
    }
    if (month == 2) {
        if (!checkLeapYear(year)) {
            if (day > 28) return 0;
        }
        else {
            if (day > 29) return 0;
        }
    }
    return 1;
}

Date dateInput(){
    Date date1;
    printf(" Enter day/month/year : ");
    scanf("%d/%d/%d",&date1.day,&date1.month,&date1.year);

    if (check(date1.day,date1.month,date1.year)){
        printf("\nValid information.\n");
        return date1;
    } 
    else {
        printf("\nInvalid information. Please retype!\n");
        dateInput();
    }
    
}

int dateCompare(Date date1,Date date2){
    if (date1.year < date2.year){
        return -1;
    }
    else if ( date1.year == date2.year ) {
        if (date1.month < date2.month ) return -1;
        else if (date1.month > date2.month ) return 1;
        else {
            if (date1.day < date2.day) return -1;
            else if (date1.day > date2.day ) return 1;
            else return 0;
        }
    }
    else {
        return 1;
    }
}

int main(){
    printf("---------DATE COMPARE-------\n");
    Date date_1,date_2;
    date_1 = dateInput();
    date_2 = dateInput();
    if (dateCompare(date_1,date_2) == -1) printf("%d/%d/%d < %d/%d/%d\n",date_1.day, date_1.month, date_1.year,     date_2.day, date_2.month, date_2.year);
    else if (dateCompare(date_1,date_2) == 0) printf("%d/%d/%d = %d/%d/%d\n",date_1.day, date_1.month, date_1.year,       date_2.day, date_2.month, date_2.year);
    else printf("%d/%d/%d > %d/%d/%d\n",date_1.day, date_1.month, date_1.year,   date_2.day, date_2.month, date_2.year);

    return 0;
}
