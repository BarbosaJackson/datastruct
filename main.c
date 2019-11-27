#include <stdio.h>
#include <stdlib.h>
#include "inc/linked_list.h"

int main() {
	LIST *l = create_list();
	add(l, 1);
	add(l, 2);
	add(l, 3);
	add(l, 4);
	add(l, 5);
	print_list(l);
	remove_element(l, 1);
	print_list(l);
	remove_element(l, 3);
	print_list(l);
	remove_element(l, 5);
	print_list(l);
	return 0;
}