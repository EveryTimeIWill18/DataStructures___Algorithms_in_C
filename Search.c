//
// Created by wmurphy on 9/15/2019.
//

#include "Search.h"

int linear_search(double n, double* array) {
    int i = 0;
    int_func_ptr len = get_array_length_;

    while (i < len(array) && *(array + i) != n) {
        i++;
    }

    if (i < len(array)) {
        return i;
    } else {
        return  -1;
    }
}
