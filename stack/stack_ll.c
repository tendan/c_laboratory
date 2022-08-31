#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_EMPTY (-1)

typedef struct node {
    int value;
    struct node *next;
} node_t;

typedef node_t* stack;

bool push(stack *my_stack, int value)
{
    node_t* newnode = malloc(sizeof(node_t));
    if (newnode == NULL) return false;

    newnode->value = value;
    newnode->next = *my_stack;
    *my_stack = newnode;

    return true;
}

int pop(stack *my_stack)
{
    if (*my_stack == NULL) return STACK_EMPTY;

    int result = (*my_stack)->value;
    node_t *tmp = *my_stack;
    *my_stack = (*my_stack)->next;
    free(tmp);
    return result;
}

int main()
{
    stack my_stack = NULL;
    push(&my_stack, 5);
    push(&my_stack, 19);
    push(&my_stack, 13);

    int result;
    while ((result = pop(&my_stack)) != STACK_EMPTY)
        printf("%d\n", result);

    return 0;
}