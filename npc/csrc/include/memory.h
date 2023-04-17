#ifndef __MEMORY_H__
#define __MRMORY_H__

#include <common.h>

typedef word_t addr_t;

word_t mem_read(addr_t addr, int len);
void mem_write(addr_t addr, int len, word_t data);
int64_t load_img(const char* img_file);

#endif
