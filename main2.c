#include <stdio.h>

int main(){

    int son, count = 0;
    scanf("%d", &son);

    if(son % 2 == 0){
        count++;
    }

    printf("%d", count);
}