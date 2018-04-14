#ifndef __PAGE_TABLES_H__
#define __PAGE_TABLES_H__

#include <types.h>

#define PAGE_TABLE_L1_SIZE    0x4000 //16k
#define PAGE_TABLE_L1_MEMORY  0x400
#define PAGE_TABLE_L1_SHAREDDEVICE 0xC00

#define PAGE_TABLE_L2_SIZE    0x400 //1k

#define PAGE_L1_SIZE          0x100000 //1M
#define PAGE_L1_MASK          0xFFFFFE00 

#define PAGE_L2_SIZE          0x1000  //4k
#define PAGE_L2_MASK          0xFFFFF000

#define PAGE_L1_POINTER_FLAGS         0x1
#define PAGE_L1_MEMORY_FLAGS        0x5C06
#define PAGE_L1_SHAREDDEVICE_FLAGS  0xc06
#define PAGE_L2_FLAGS               0x176

#define COLOR_SIZE             0x4000
#define COLOR_MASK             (COLOR_SIZE)

#define NONSECURE_COLOR        0x1
#define SECURE_COLOR           0x0

extern uint32_t ns_main_page_table[PAGE_TABLE_L1_SIZE/sizeof(uint32_t)]; 
extern uint32_t ns_secondary_page_table[PAGE_TABLE_L1_MEMORY][PAGE_TABLE_L2_SIZE/sizeof(uint32_t)];

extern uint32_t s_main_page_table[PAGE_TABLE_L1_SIZE/sizeof(uint32_t)]; 
extern uint32_t s_secondary_page_table[PAGE_TABLE_L1_MEMORY][PAGE_TABLE_L2_SIZE/sizeof(uint32_t)];



#endif