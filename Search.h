//
// Created by wmurphy on 9/15/2019.
//

#ifndef DATASTRUCTURES_ALGORITHMS_IN_C_SEARCH_H
#define DATASTRUCTURES_ALGORITHMS_IN_C_SEARCH_H

#include <math.h>

typedef int (*int_func_ptr)(double *);
int get_array_length_(double inn[]) {
    double out=0;
    double the_sum = 0;
    for (int i=0; !isnan(inn[i]); i++) {
        //the_sum += inn[i];
        out++;
    };
    return (int)out;
}


int linear_search(double n, double* array);


#endif //DATASTRUCTURES_ALGORITHMS_IN_C_SEARCH_H
