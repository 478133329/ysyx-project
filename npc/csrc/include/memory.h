#ifndef __MEMORY_H__
#define __MRMORY_H__

#include <common.h>

typedef word_t vaddr_t;

word_t mem_read(vaddr_t addr, int len);

void mem_write(vaddr_t addr, int len, word_t data);

void memory_init(const char* img_file);

#endif
