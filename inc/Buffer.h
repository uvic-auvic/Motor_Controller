#ifndef BUFFER_H_
#define BUFFER_H_

#include<string.h>


#define MAX_BUFFER_DATA (8)
#define MAX_BUFFER_SIZE (8)

typedef struct Buffer{
	char data[MAX_BUFFER_SIZE][MAX_BUFFER_DATA];
	unsigned short idx_to_load; // Stores index where new element should go
	unsigned short idx_to_pop; // Stores index of the next element to remove
	unsigned short overflow_cnt; // Stores the number of buffer overflows
}Buffer;

//Public functions ------------------------------

extern void Buffer_add(Buffer* b, char* str);
extern void Buffer_pop(Buffer* b, char* data);
extern int Buffer_size(Buffer* b);
extern int Buffer_overflow(Buffer* b);
extern void Buffer_init();

//-----------------------------------------------

#endif
