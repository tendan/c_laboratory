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

void insert_sorted(node_t **head, int value)
{
    node_t *newnode = create_new_node(value);
    node_t *current;
    
    if (*head == NULL 
        || (*head)->value >= newnode->value)
    {
        newnode->next = *head;
        *head = newnode;
    }
    else
    {
        current = *head;
        while (current->next != NULL 
                && current->next->value < newnode->value)
        {
            current = current->next;
        }
        newnode->next = current->next;
        current->next = newnode;
    }
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