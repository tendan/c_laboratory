#include <stdio.h>
#include "list_utils.h"

int main(int argc, char **argv)
{
    node_t *HEAD = NULL;

    int candidates[6] = {5, 7, 4, 2, 8, 6};

    for (int i = 0; i < 6; ++i)
        insert_sorted(&HEAD, candidates[i]);

    printlist(HEAD);

    puts("EOF");

    return 0;
}