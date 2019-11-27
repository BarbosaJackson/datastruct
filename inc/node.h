#ifndef node_h
#define node_h

typedef struct node NODE;

struct node {
	int item;
	NODE *next;
};

NODE *create_node(int item);

#endif