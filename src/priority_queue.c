#include "../inc/priority_queue.h"

int priority_queue_is_empty(PRIORITY_QUEUE *queue) {
	return !queue->size;
}

PRIORITY_QUEUE *create_priority_queue() {
	PRIORITY_QUEUE *q = (PRIORITY_QUEUE *) malloc(sizeof(PRIORITY_QUEUE));
	q->begin = q->end = NULL;
	q->size = 0;
	return q;
}

void enqueue_priority_queue(PRIORITY_QUEUE *queue, int item) {
	NODE *inserted = create_node(item);
	if(priority_queue_is_empty(queue)) {
		queue->begin = queue->end = inserted;
	} else {
		NODE *cur = queue->begin;
		if(queue->begin->item <= inserted->item) {
			inserted->next = queue->begin;
			queue->begin = inserted;
		} else {
			while(cur != NULL && cur->item > inserted->item) {
				cur = cur->next;
			}
			if(cur == NULL) {
				queue->end->next = inserted;
				queue->end = inserted;
			} else {
				inserted->next = cur->next;
				cur->next = inserted;
			}
		}
	}
	queue->size++;
}

NODE *dequeue_priority_queue(PRIORITY_QUEUE *queue) {
	if(!priority_queue_is_empty(queue)) {
		NODE *removed = queue->begin;
		queue->begin = queue->begin->next;
		queue->size--;
		return removed;
	}
	return NULL;
}
