#include <stdio.h>
#include <math.h>
int main(){
    int n;
    float spec;
    printf("nhap n: ");
    scanf("%d",&n);
    
    printf("number of students in the smallest class is %d",(n/7));
    printf("\n");
    
    

    
    printf("average number of students in the all classes is %f",(float)n/7);
    printf("\n");

    if (n % 7 == 0) {
        printf("number of students in the biggest class is %d",n/7);
        printf("\n");

        printf("number of classes that have more student than average is %d",0);
        printf("\n");
        
        printf("number of students in classes that have more than average student are %d",0);
        printf("\n");

        printf("number of students in classes that equal to the average student are %d",n/7);
        printf("\n");
    }
    else{
        printf("number of students in the biggest class is %d",n/7+1);
        printf("\n");


        printf("number of classes that have more student than average is %d",n%7);
        printf("\n");
        
        printf("number of students in classes that have more than average student are %d",n/7+1);
        printf("\n");

        printf("number of students in classes that equal to the average student are %d",0);
        printf("\n");
    }


    return 0;
}