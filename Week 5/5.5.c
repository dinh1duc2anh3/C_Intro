#include <stdio.h>

int main (){
    int x,y,max;
    printf("enter 2 number x and y : ");
    scanf("%d %d",&x,&y);
    max = x;
    if (y>x) max = y;
    printf("max = %d",max);
    return 0;
}