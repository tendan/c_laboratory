#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define QUEUE_EMPTY (-1)

typedef struct node {
    int value;
    struct node *next;
} node_t;

typedef struct {
    node_t *head;
    node_t *tail;
} queue;

void init_queue(queue *q)
{
    q->head = NULL;
    q->tail = NULL;
}

bool enqueue(queue *q, int value)
{
    node_t *newnode = malloc(sizeof(node_t));
    if (newnode == NULL) return false;
    newnode->value = value;
    newnode->next = NULL;

    if (q->tail != NULL)
        q->tail->next = newnode;
    
    q->tail = newnode;

    if (q->head == NULL)
        q->head = newnode;

    return true;
}

int dequeue(queue *q)
{
    if (q->head == NULL) return QUEUE_EMPTY;
    node_t *tmp = q->head;
    int result = tmp->value;
    
    q->head = q->head->next;

    if (q->head == NULL)
        q->tail = NULL;
    
    free(tmp);

    return result;
}

int main()
{
    queue q1;

    init_queue(&q1);

    enqueue(&q1, 5);
    enqueue(&q1, 7);
    enqueue(&q1, 13);

    int res;
    while ((res = dequeue(&q1)) != QUEUE_EMPTY)
        printf("%d\n", res);

    return 0;
}