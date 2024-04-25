#include <stdio.h>
#include <string.h>

int strend(char * s, char * t){
    int size_s = strlen(s);
    int size_t = strlen(t);
    if (size_s < size_t) return 0;
    return (strcmp(s+size_s-size_t,t) == 0);
}

int main(){
    printf("%d\n", strend("Hello, World", "World"));    // Kết quả: 1 (đúng)
    printf("%d\n", strend("Hello, World", "Hello"));    // Kết quả: 0 (sai)
    printf("%d\n", strend("Hello, World", "Hello, World"));
    return 0;
}

