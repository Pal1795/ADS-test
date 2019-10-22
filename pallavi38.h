#ifndef _INCLUDED_HEAP_
#define _INCLUDED_HEAP_
#include <stdint.h>
#define HEAP_MAX_SIZE 32
#define TAKEOFF 0
#define LANDING 1

typedef struct_event_Event;
{
	uint32_t timestamp;
	uint32_t plane_no;
	uint32_t t_or_l;

};
typedef struct_heap_{
	uint32_t size;
	Event data[HEAP]

}

Heap 		heap_new(int32_t data[], uint32_t len);
Heap*		heap_sort(Event*timestamp);
Heap*		heap_insert(Heap *heap,uint32_t timestamp,uint32_t plane_no,uint32_t t_or_l);
Heap*		heap_test(Event *heap);
int32_t		heap_get_max(Heap *heap);
int32_t		heap_extract_max(Heap *heap);
uint32_t	heap_size(Heap *heap);

#endif