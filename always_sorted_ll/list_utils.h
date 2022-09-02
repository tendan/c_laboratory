#ifndef __LIST_UTILS_H_
#define __LIST_UTILS_H_

struct node {
    int value;
    struct node* next;
};

typedef struct node node_t;

node_t* create_new_node(int value);

void printlist(node_t *first);

void insert_sorted(node_t **head, int value);

int find_node(node_t *head, int value);

#endif