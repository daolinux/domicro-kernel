#ifndef DOMICRO_H
#define DOMICRO_H
#include <stdint.h>
#include <stdbool.h>

typedef uint64_t u64;
typedef uint32_t u32;
typedef uint8_t  u8;

typedef struct {
    u8 magic[2];
    u32 version;
    u64 entry;
} do_file_t;

void kernel_main(void);
void do_native_init(void);

#endif
