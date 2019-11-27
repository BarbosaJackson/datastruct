#include "../inc/linked_list.h"

LIST *create_list() {
	LIST *l = (LIST *) malloc(sizeof(LIST));
	l->head = NULL;
	l->size = 0;
	return l;
}

void add(LIST *l, int item) {
	printf("insert %d\n", item);
	if(l->head == NULL) {
		l->head = create_node(item);
		l->size++;
	} else {
		NODE *cur = l->head;
		while(cur->next != NULL) cur = cur->next;
		cur->next = create_node(item);
		l->size++;
	}
}

NODE *search_element(LIST *l, int item) {
	NODE *head = l->head;	
	while(head != NULL && head->item != item)  head = head->next;
	return head;
}

void remove_element(LIST *l, int item) {
	NODE *prev = NULL;
	NODE *cur = l->head;
	printf("removing %d\n", item);
	while(cur != NULL && cur->item != item) {
		prev = cur;
		cur = cur->next;
	}
	if(prev == NULL) {
		l->head = l->head->next;
		free(cur);
		cur = NULL;
		l->size--;
	} else if(cur != NULL) {
		prev->next = cur->next;
		free(cur);
		cur = NULL;
		l->size--;
	}
}

void print_list(LIST *l) {
	NODE *cur = l->head;
	printf("\n=============================\n");
	printf("list size = %d\n", l->size);
	printf("\n-----------------------------\n");
	while(cur != NULL) {
		printf("%d -> ", cur->item);
		cur = cur->next;
	}
	printf("\n-----------------------------\n");
	printf("\n=============================\n");
}