#ifndef FUNCTION_POINTERS_H
#define FUNCTION POINTERS H
#include ‹stdlib.h>
void print_name(char *name, void (*f) (char *));
void array_iterator (int *array, size_t size, void (*action) (int));
int int _index(int *array, int size, int (*cmp) (int));
#endif
