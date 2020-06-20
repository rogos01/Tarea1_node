#ifndef NODE_H
#define NODE_H

typedef int Data;

typedef struct _node node;

struct _node{
	Data data;
	node *next;
};

node *create_node(Data d);
void delete_node(node *n);

#endif