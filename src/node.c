#include <stdlib.h>
#include "../inc/node.h"

NODE *create_node(int item) {
	NODE *node = (NODE *) malloc(sizeof(NODE));
	node->next = NULL;
	node->item = item;
	return node;
}