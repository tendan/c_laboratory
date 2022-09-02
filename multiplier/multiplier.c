#include <stdio.h>

void multiply_by(int *factors, int by, size_t length)
{
    for (int i = 0; i < length; ++i)
    {
        factors[i] *= by;
    }
}

void print_arr(int *numbers, size_t length)
{
    // for (int* p = numbers; p < (numbers)[1]; p++)
    //     printf("%d\n", *p);
    for (int i = 0; i < length; ++i)
    {
        printf("%d\n", numbers[i]);
    }
}

#define ARR_LENGTH 5

int main()
{
    // Length declared using constant macro
    int numbers[ARR_LENGTH] = {3, 5, 6, 9, 12};

    puts("numbers[] before multiply:");
    print_arr(numbers, ARR_LENGTH);
    
    multiply_by(numbers, 3, ARR_LENGTH);
    
    puts("numbers[] after multiply:");
    print_arr(numbers, ARR_LENGTH);

    // Length applied by compiler
    int numbers2[] = {3, 5, 6, 9, 12};
    int size = sizeof(numbers2) / sizeof(numbers2[0]);

    puts("numbers2[] before multiply:");
    print_arr(numbers2, size);

    multiply_by(numbers2, 3, size);

    puts("numbers2[] after multiply:");
    print_arr(numbers2, size);

    return 0;
}