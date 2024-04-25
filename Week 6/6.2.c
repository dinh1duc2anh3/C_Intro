#include <stdio.h>

int ageInput(){
    int age;
    printf("enter age: ");
    scanf("%d",&age);
    return age;
}

void ageClassify(int a)
{
    if (a < 18) printf("tre em.\n");
    else if (a <65 ) printf("truong thanh.\n");
    else printf("nguoi gia.\n");
}

int main(){
    ageClassify(ageInput());
    return 0;
}