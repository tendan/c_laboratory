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
    int numbers[ARR_LENGTH] = {3, 5, 6, 9, 12};
    puts("Before multiply:");
    print_arr(numbers, ARR_LENGTH);
    multiply_by(numbers, 3, ARR_LENGTH);
    puts("After multiply:");
    print_arr(numbers, ARR_LENGTH);
    return 0;
}