#ifndef __FUNC_UTILS_H_
#define __FUNC_UTILS_H_

#include <stdbool.h>

typedef bool (*predicate)(int);

char* is(predicate pred, int number, char* failedMessage, char* successMessage);

#endif