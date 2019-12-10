INC = inc/node.h inc/linked_list.h inc/queue.h inc/priority_queue.h
SRC = src/node.c src/linked_list.c src/queue.c src/priority_queue.c
MAIN = main.c

compile:
	gcc $(INC) $(SRC) $(MAIN) -O3 -o exec -lm -Wall