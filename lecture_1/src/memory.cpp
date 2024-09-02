/* memory.cpp */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(void) {
    // data is equal to 4 bytes as the size of an int is 4 bytes
    int *data = (int*)malloc(1 * sizeof(int));
    *data = getpid();

    // here, array is 10 * 4 bytes.
    int *array = (int*)malloc(10 * sizeof(int));

    // array[i] is defined as *(array + i) thus i[array] is also valid code
    printf("array[0] - %d\n", array[0]);
    printf("0[array] - %d\n", 0[array]);

    // print mem addr and val
    printf("dta addr: = %p, value (pid) = %d\n", data, *data);

    free(data);
    return 0;
}
