#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* function of search */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);


/* helper function*/
void print_array(const int *array, size_t low, size_t high);
int interpolationSearch(int *array, size_t low, size_t high, int value);
int binarySearch(int *array, int value, int low, int high);

#endif
