#include <stdio.h>
#include <math.h>
#define PI 3.14

double r;

int main(){
    printf("nhap r = ");
    scanf("%lf",&r);
    printf("duong tron \n");
    printf("s = %.2lf\n",PI*r*r);
    printf("v = %.2lf\n",PI*r*2);
    printf("khoi tron \n");
    printf("s = %.2lf\n",4*PI*r*r);
    printf("v = %.2lf\n",4/3*PI*r*r*r);

	return 0;
}

