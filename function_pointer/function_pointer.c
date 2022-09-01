#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "func_utils.h"

bool even(int num)
{
    return num % 2 == 0;
}

bool divisible_by_3(int num)
{
    return num % 3 == 0;
}

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("Valid usage: %s <number>\n", argv[0]);
        return 1;
    }
    
    int number;

    if ((number = atoi(argv[1])) == 0 && strcmp(argv[1], "0") != 0)
    {
        puts("Provide a valid number");
        return 1;
    }

    char* result = is(even, number, "Not an even number", "Is an even number");
    char* result2 = is(divisible_by_3, number, "Not divisible by 3 number", "Is divisible by 3 number");

    puts(result);
    puts(result2);
    
    return 0;
}