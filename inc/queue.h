#ifndef queue_h
#define queue_h

#include "node.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct queue QUEUE;

struct queue {
	NODE *begin;
	NODE *end;
	int size;
};

QUEUE *create_queue();
void enqueue(QUEUE *queue, int item);
NODE *dequeue(QUEUE *queue);
int queue_is_empty(QUEUE *queue);

#endif