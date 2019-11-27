#ifndef linked_list_h
#define linked_list_h
#include <stdio.h>
#include <stdlib.h>

typedef struct list LIST;
typedef struct node NODE;

struct node {
	int item;
	NODE *next;
};

struct list {
	NODE *head;
	int size;
};

NODE *create_node(int item);
LIST *create_list();
void add(LIST *l, int item);
NODE *search_element(LIST *l, int item);
void remove_element(LIST *l, int item);
void print_list(LIST *l);

#endif