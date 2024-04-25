#include <stdio.h>
#include <stdbool.h>

#define JUDGE_NUM 5
float point[10];
bool data_stat;

bool pointQualify (float p){
    if (p < 0 || p > 10) {
        
        return false;
    }
    else return true;
}

void getJudgeData (){
    data_stat = true;
    printf("\n----------------DUC ANH SINGING COMPETITION----------------\n");
    for (int i = 0; i < JUDGE_NUM ; i ++){
        printf("Judge %d give mark = ",i+1);
        scanf("%f",&point[i]);
        if (pointQualify(point[i]) == false) {
            printf("Invalid point! Please retype the point !\n");
            data_stat = false;
            return;
        }
        printf("\n");

    }
}

float findLowest(){
    float min = point[0];
    for (int i = 0 ; i < JUDGE_NUM ; i++){
        if (point[i] < min) min = point[i];
    }
    return min;
}

float findHighest(){
    float max = point[0];
    for (int i = 0 ; i < JUDGE_NUM ; i++){
        if (point[i] > max) max = point[i];
    }
    return max;
}

void calcScore(){
    float sum = 0;
    for (int i = 0 ; i < JUDGE_NUM; i++){
        sum = sum + point[i];
    }
    printf("Average point for the compeitor is %f.\n",(sum-findHighest()-findLowest())/(JUDGE_NUM-2));

}
int main(){
    for(int i = 0; i < JUDGE_NUM ; i++){
        point[i] = 0;
    }

    while (data_stat == false){
        getJudgeData();
    }
    calcScore();
    return 0;
}