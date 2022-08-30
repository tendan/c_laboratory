#include <stdio.h>
#include "list_utils.h"

int main(int argc, char **argv)
{
    node_t *HEAD = NULL;

    for (int i = 0; i < 25; i++)
    {
        insert_at_begin(&HEAD, create_new_node(i));
    }

    printlist(HEAD);

    insert_at_end(HEAD, create_new_node(-1));

    printlist(HEAD);

    int numberToFind = 19;
    int found = find_node(HEAD, numberToFind);

    if (found != NULL)
        printf("%d\n", found);
    else
        printf("Number %d was not found\n", numberToFind);

    puts("EOF");

    return 0;
}