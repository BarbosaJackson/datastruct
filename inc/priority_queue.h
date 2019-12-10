#ifndef priority_queue_h
#define priority_queue_h

#include "node.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct priority_queue PRIORITY_QUEUE;

struct priority_queue {
	NODE *begin;
	NODE *end;
	int size;
};

PRIORITY_QUEUE *create_priority_queue();
void enqueue_priority_queue(PRIORITY_QUEUE *queue, int item);
NODE *dequeue_priority_queue(PRIORITY_QUEUE *queue);
int priority_queue_is_empty(PRIORITY_QUEUE *queue);

#endif