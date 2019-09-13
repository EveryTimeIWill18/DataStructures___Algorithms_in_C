//
// Created by wmurphy on 9/13/2019.
//

#ifndef DATASTRUCTURES_ALGORITHMS_IN_C_SORTS_H
#define DATASTRUCTURES_ALGORITHMS_IN_C_SORTS_H

#include <stdio.h>
#include <math.h>

typedef int (*int_func_ptr)(double *);

int get_array_length(double inn[]) {
    double out=0;
    double the_sum = 0;
    for (int i=0; !isnan(inn[i]); i++) {
        //the_sum += inn[i];
        out++;
    };
    return (int)out;
}

#define array_size(...) get_array_length((double[]){__VA_ARGS__, NAN})

#define array_list(...) (double[]){__VA_ARGS__, NAN}

#define insertion_sort(arr_list1) in_sort(array_list arr_list1)

void in_sort(double *A) {
    int j;
    double temp;

    int_func_ptr s = get_array_length;

    printf("Array size = %d\n", (int)s);

    for (int i=0; i < s(A); i++) {
        j = i;
        while (j >0 && *(A + (j-1)) > *(A + j)) {
            temp = *(A + (j-1));
            *(A + (j-1)) = *(A+j);
            *(A+j) = temp;
            j--;
        }
    }
    for(int i=0; i<s(A); i++) {
        printf("%g\t", A[i]);
    }


}


#endif //DATASTRUCTURES_ALGORITHMS_IN_C_SORTS_H
