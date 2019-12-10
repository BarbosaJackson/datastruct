#ifndef linked_list_h
#define linked_list_h

#include "node.h"
#include <stdlib.h>
#include <stdio.h>
typedef struct list LIST;
// typedef struct node NODE;
struct list {
	NODE *head;
	int size;
};

LIST *create_list();
void add(LIST *l, int item);
NODE *search_element(LIST *l, int item);
void remove_element(LIST *l, int item);
void print_list(LIST *l);

#endif