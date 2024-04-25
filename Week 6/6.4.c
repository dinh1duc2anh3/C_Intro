//high or low 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random(int minN, int maxN){
    return minN + rand() % ( maxN - minN +1 );
}

int main(){
    int r,max,min,n;
    srand((int)time(0));

    printf("enter range (min, max) : ");
    scanf("%d %d",&min,&max);

    printf("enter a number: ");
    scanf("%d",&n);

    r = random(min,max);
    if (n < r) printf("Too low.\nYou guess: %d\nThe answer is %d",n,r);
    else if (n == r) printf("Good job. You get it right! \n The answer is %d",n);
    else printf("Too high.\nYou guess: %d\nThe answer is %d",n,r);

    return 0;
}