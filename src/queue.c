#include "../inc/queue.h"

int queue_is_empty(QUEUE *queue){
	return !queue->size;
}

QUEUE *create_queue() {
	QUEUE *q = (QUEUE *) malloc(sizeof(QUEUE));
	q->begin = q->end = NULL;
	q->size = 0;
	return q;
}

void enqueue(QUEUE *queue, int item) {
	if(queue_is_empty(queue)) {
		queue->begin = queue->end = create_node(item);		
	} else {
		queue->end->next = create_node(item);
		queue->end = queue->end->next;
	}
	queue->size++;
}

NODE *dequeue(QUEUE *queue) {
	if(!queue_is_empty(queue)) {
		NODE *removed = queue->begin;
		queue->begin = queue->begin->next;
		queue->size--;
		return removed;
	} else {
		return NULL;
	}
}
