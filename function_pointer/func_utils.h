#ifndef __FUNC_UTILS_H_
#define __FUNC_UTILS_H_

typedef int (*predicate)(int);

char* is(predicate pred, int number, char* failedMessage, char* successMessage);

#endif