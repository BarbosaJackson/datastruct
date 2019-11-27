INC = inc/node.h inc/linked_list.h
SRC = src/node.c src/linked_list.c
MAIN = main.c

compile:
	gcc $(INC) $(SRC) $(MAIN) -O3 -o exec -lm -Wall