//xac dinh học lực dựa trên điểm thi
#include <stdio.h>
int main(){
    int p;
    printf("enter point: ");
    scanf("%d",&p);

    switch (p) {
        case 9:
        case 10: 
            printf("good");
            break;
        case 7:
        case 8 :
            printf("normal");
            break;
        default : 
            printf("bad");
    }
    return 0;
}