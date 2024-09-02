/* memory.cpp */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(void) {
    int *data = (int*)malloc(1 * sizeof(int));
    *data = getpid();

    int *array = (int*)malloc(10 * sizeof(int));

    printf("array[0] - %d\n", 0[array]);
    // print mem addr and val
    printf("dta addr: = %p, value (pid) = %d\n", data, *data);

    free(data);
    return 0;
}
