#include <memory.h>

#define CONFIG_MSIZE 1024
#define CONFIG_MBASE 0x80000000

static uint8_t mem[CONFIG_MSIZE];

static bool in_mem(addr_t addr) {
    if (addr >= CONFIG_MBASE && addr < CONFIG_MBASE + CONFIG_MSIZE) {
        return true;
    }
    return false;
}

word_t mem_read(addr_t addr, int len) {
    if (in_mem(addr) == false) {
        printf("%016lx is out of memory bound.\n", addr);
        assert(0);
    }
    word_t data = 0;
    switch (len) {
        case 1: data = *(uint8_t*)(mem + addr); break;
        case 2: data = *(uint16_t*)(mem + addr); break;
        case 4: data = *(uint32_t*)(mem + addr); break;
        case 8: data = *(uint64_t*)(mem + addr); break;
        default: printf("Illegal memory read length.\n"); assert(0);
    }
    return data;
}

void mem_write(addr_t addr, int len, word_t data) {
    if (in_mem(addr) == false) {
        printf("%016lx is out of memory bound.\n", addr);
        assert(0);
    }
    switch (len) {
        case 1: *(uint8_t*)(mem + addr) = data; break;
        case 2: *(uint16_t*)(mem + addr) = data; break;
        case 4: *(uint32_t*)(mem + addr) = data; break;
        case 8: *(uint64_t*)(mem + addr) = data; break;
        default: printf("Illegal memory write length.\n"); assert(0);
    }
}

int64_t load_img(const char* img_file) {
    if (img_file == NULL) {
        printf("No image is given.\n");
        assert(0);
    }

    FILE* fp = fopen(img_file, "rb");
    assert(fp != NULL);

    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);

    printf("The image is %s, size = %ld\n", img_file, size);

    fseek(fp, 0, SEEK_SET);
    int ret = fread(mem, size, 1, fp);
    assert(ret == 1);

    fclose(fp);
    return size;
}