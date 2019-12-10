#include <stdio.h>
#include <stdlib.h>
#include "inc/linked_list.h"
#include "inc/queue.h"
#include "inc/priority_queue.h"

int main() {
	LIST *l = create_list();
	QUEUE *q = create_queue();
	PRIORITY_QUEUE *pq = create_priority_queue();

	add(l, 1);
	add(l, 2);
	add(l, 3);
	add(l, 4);
	add(l, 5);
	print_list(l);
	remove_element(l, 1);
	remove_element(l, 3);
	remove_element(l, 5);
	print_list(l);

	printf("###################################\n");
	printf("QUEUE\n");
	printf("###################################\n");
	enqueue(q, 10);
	enqueue(q, 20);
	enqueue(q, 30);
	enqueue(q, 40);
	enqueue(q, 50);

	while(!queue_is_empty(q)) {
		NODE *dequeued = dequeue(q);
		printf("%d -> ", dequeued->item);
	}
	printf("\n");

	printf("###################################\n");
	printf("PRIORITY QUEUE\n");
	printf("###################################\n");

	enqueue_priority_queue(pq, 40);
	enqueue_priority_queue(pq, 10);
	enqueue_priority_queue(pq, 20);
	enqueue_priority_queue(pq, 30);
	enqueue_priority_queue(pq, 50);
	enqueue_priority_queue(pq, 60);
	
	while(!priority_queue_is_empty(pq)) {
		NODE *dequeued = dequeue_priority_queue(pq);
		printf("%d -> ", dequeued->item);
	}
	printf("\n");
	return 0;
}