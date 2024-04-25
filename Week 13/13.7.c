#include <stdio.h>
#include <string.h>

#define PRODUCT_NUM 5
#define DATA_LEN 50
#define CODE_LEN 10

int main(){
    char data[PRODUCT_NUM][DATA_LEN] = { 
            "TV127       31 inch Television",
            "CD057     CD Player",
            "TA877   Answering Machine",
            "CS409  Car Stereo",
            "PC655    Personal Computer"};
    char code[PRODUCT_NUM][CODE_LEN];
    char des[PRODUCT_NUM][DATA_LEN];

    int i ;
    for (i = 0; i < PRODUCT_NUM; i++) {
        int j;
        for (j = 0; data[i][j] != ' '; j++){
            code[i][j] = data[i][j];
        }
        //thêm phần tử null vào cuối mỗi mảng chuỗi code
        code[i][j] = '\0';

        //remove space letters
        while (data[i][j] == ' ') j++;

        //des string
        int k;
        for (int k =0; data[i][j] != '\0'; j++,k++){
            des[i][k] = data[i][j];

        }

        //add null letter after des string
        des[i][k] = '\0';
    }

    printf("----------------DETAIL-----------------\n");
    for (int i = 0; i < PRODUCT_NUM; i++) {
        printf("%s\n",data[i]);
    }  

    printf("----------------DETAIL-----------------\n");
    for (int i = 0; i< PRODUCT_NUM; i++){
        printf("%s : %s\n",code[i],des[i]);
    }
    return 0;
    
}