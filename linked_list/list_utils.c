#include <stdio.h>
#include <stdlib.h>
#include "list_utils.h"

node_t* create_new_node(int value)
{
    node_t *result = malloc(sizeof(node_t));
    result->value = value;
    result->next = NULL;
    return result;
}

void printlist(node_t *first)
{
    node_t* current = first;
    while (current != NULL)
    {
        printf("%d -> ", current->value);
        current = current->next;
    }
    puts("End of the list");
}

void insert_at_begin(node_t **head, node_t *nodeToInsert)
{
    nodeToInsert->next = *head;
    *head = nodeToInsert;
}

void insert_at_end(node_t *head, node_t *nodeToInsert)
{
    node_t *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    nodeToInsert->next = NULL;
    current->next = nodeToInsert;
}

int find_node(node_t *head, int value)
{
    while (head != NULL)
    {
        if (head->value == value)
        {
            return head->value;
        }
        head = head->next;
    }
    return NULL;
}