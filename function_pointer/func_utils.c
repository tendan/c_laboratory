#include "func_utils.h"

char* is(predicate pred, int number, char* failed, char* success)
{
    if (pred(number))
    {
        return success;
    }
    return failed;
}