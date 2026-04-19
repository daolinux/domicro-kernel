#include "domicro.h"

void mm_init(void) {}
void sched_init(void) {}
void ipc_init(void) {}

int do_load(const do_file_t *f) {
    if (f->magic[0] != 'D' || f->magic[1] != 'O')
        return -1;
    return 0;
}

void do_native_init(void) {
    do_file_t test = {{'D','O'}, 1, 0};
    do_load(&test);
}

void kernel_main(void) {
    mm_init();
    sched_init();
    ipc_init();
    do_native_init();
    while (1) {}
}
