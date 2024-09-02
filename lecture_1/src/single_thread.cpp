#include <stdio.h>
#include <unistd.h>


int main(void) {
    // getpid is a built-in method to get the active process id
    int process_id = getpid();

    // this loop is used to observe the IDs of processes overtime to see how they behave
    for (size_t i = 0; i < 5; i++) {
        printf("process #%d: waiting ... %d\n", process_id, i);
        sleep(1);
    }
    printf("process #%d done \n", process_id);
    return 0;
}
