#include <stdio.h>
#include "Sorts.h"


int main() {
    printf("Hello, World!\n");

    double * array_list1;
    double * array_list2;

    array_list1 = insertion_sort((2, 6, 5, 3, 8, 7, 1, 0));
    array_list2 = bubble_sort((2, 6, 5, 3, 8, 7,1, 0));

    // insertion sort
    printf("INSERTION SORT\n------------------\n");
    printf("array_list1[0] = %g\n", *(array_list1 + 0));
    printf("array_list1[1] = %g\n", *(array_list1 + 1));
    printf("array_list1[2] = %g\n", *(array_list1 + 2));
    printf("array_list1[3] = %g\n", *(array_list1 + 3));
    printf("array_list1[4] = %g\n", *(array_list1 + 4));
    printf("array_list1[5] = %g\n", *(array_list1 + 5));
    printf("array_list1[6] = %g\n", *(array_list1 + 6));
    printf("array_list1[7] = %g\n", *(array_list1 + 7));

    printf("\n\n");
    // bubble sort
    printf("BUBBLE SORT\n------------------\n");
    printf("array_list2[0] = %g\n", *(array_list2 + 0));
    printf("array_list2[1] = %g\n", *(array_list2 + 1));
    printf("array_list2[2] = %g\n", *(array_list2 + 2));
    printf("array_list2[3] = %g\n", *(array_list2 + 3));
    printf("array_list2[4] = %g\n", *(array_list2 + 4));
    printf("array_list2[5] = %g\n", *(array_list2 + 5));
    printf("array_list2[6] = %g\n", *(array_list2 + 6));
    printf("array_list2[7] = %g\n", *(array_list2 + 7));


    return 0;
}