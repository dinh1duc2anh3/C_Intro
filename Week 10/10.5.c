#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 10

void count0concurrence(int arr[], int size) {
    int max_element = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] > max_element) {
            max_element = arr[i];
        }
    }

    int *counts;
    bool *visited;

    if (max_element > size) {
        counts = (int *)malloc(sizeof(int) * (max_element + 1));
        visited = (bool *)malloc(sizeof(bool) * (max_element + 1));
        for (int i = 0; i <= max_element; i++) {
            counts[i] = 0;
            visited[i] = false;
        }
    } else {
        counts = (int *)malloc(sizeof(int) * size);
        visited = (bool *)malloc(sizeof(bool) * size);
        for (int i = 0; i <= size; i++) {
            counts[i] = 0;
            visited[i] = false;
        }
    }

    for (int i = 0; i < size; i++) {
        counts[arr[i]]++;
    }

    for (int i = 0; i < size; i++) {
        if (counts[arr[i]] > 0 && !visited[arr[i]]) {
            visited[arr[i]] = true;
            printf("Element %d appears %d times.\n", arr[i], counts[arr[i]]);
        }
    }

    free(counts);
    free(visited);
}


int findMaxZeoSubsequence(int a[],int size){
    int max = 0;
    int len = 0;

    for (int i = 1; i < size ; i++){
        if (a[i] == 0){
            len ++;
        }
        else {
            max = max > len ? max : len;
            len = 0;
        }
    }
    return max;
}

int main() {
    int arr1[SIZE] = {1, 0, 0, 0, 0, 3, 0, 0, 2, 9};
    int arr2[SIZE] = {1, 0, 0, 0, 0, 3, 0, 0, 2, 11};

    //tim chuoi 0 dai nhat
    printf("The longest 0 sequence is %d.\n",findMaxZeoSubsequence(arr1,SIZE));

    printf("-----------Arr1: ");
    for (int i = 0; i <SIZE; i ++){
        printf("%d ",arr1[i]);
    }
    printf("------------\n");
    count0concurrence(arr1, SIZE);

    printf("-----------Arr2: ");
    for (int i = 0; i <SIZE; i ++){
        printf("%d ",arr2[i]);
    }
    printf("------------\n");
    count0concurrence(arr2, SIZE);


    return 0;
}
