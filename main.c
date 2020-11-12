#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int main(int argc, char ** argv) {
    int *arr = NULL;
    arr = malloc(sizeof(int) * 3);
    if(arr != NULL) {
        arr[0] = 1;
        arr[1] = 2;
        arr[2] = 2;
        printf("%d",square_sum(arr, 3));
    }
    return 0;
}