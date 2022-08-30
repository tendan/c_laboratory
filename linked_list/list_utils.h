#ifndef __LIST_UTILS_H_
#define __LIST_UTILS_H_

struct node {
    int value;
    struct node* next;
};

typedef struct node node_t;

node_t* create_new_node(int value);

void printlist(node_t *first);

void insert_at_begin(node_t **head, node_t *nodeToInsert);

void insert_at_end(node_t *head, node_t *nodeToInsert);

int find_node(node_t *head, int value);

#endif