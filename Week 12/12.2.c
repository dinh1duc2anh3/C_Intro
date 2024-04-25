#include <stdio.h>
double* maximum(double* a, int size){
    if ( size == 0) return NULL;
    else {
        double *max = a;
        for ( int i = 1; i < size; i++) {
            if (*(a+i) > *max) max = a+i;

        }
        return max;
    }
    
}
int main(){
    double a[]={1.0 , 2.3 , 5.7 , 6.7 , 8.4 , 7.2 , 3.4 , 9.9};
    int size = sizeof(a) / sizeof(a[0]);
    double* maxPtr = NULL;
    maxPtr = maximum(a,size);

    if ( maxPtr == NULL) printf("Mang rong.\n");
    else printf("so lon nhat trong mang la : %lf",*maxPtr);

    return 0;
}