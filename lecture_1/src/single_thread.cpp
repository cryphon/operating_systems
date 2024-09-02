#include <stdio.h>
#include <unistd.h>


int main(void) {
    int process_id = getpid();
    for (size_t i = 0; i < 5; i++) {
        printf("process #%d: waiting ... %d\n", process_id, i);
        sleep(1);
    }
    printf("process #%d done \n", process_id);
    return 0;
}
