#include <stdio.h>
#include "Sorts.h"
#include "BinaryTree.h"
#include "SimpleLinearModel.h"

// factorial recursive function
int fun(int n) {
    if (n == 1 || n == 0)
        return 1;
    else
        return n*fun(n-1);
}


int fun1(int);
int fun2(int);

// using indirect recursion
int fun1(int n) {
    if (n == 1 || n ==0)
        return 1;
    else
        return n + fun2(n-1);
}

int fun2 (int m) {
    m = 0;
    return fun1(m);

}


// tail recursive function
void fun3(int n) {
    if (n == 0)
        return;
    else
        printf("%d ", n);
    return fun3(n-1);
}



int main() {
    printf("Hello, World!\n");

    double * array_list1;
    double * array_list2;
    double * array_list3;

    array_list1 = insertion_sort((2, 6, 5, 3, 8, 7, 1, 0));
    array_list2 = bubble_sort((2, 6, 5, 3, 8, 7,1, 0));
//    array_list3 = merge_sort((2, 6, 5, 3, 8, 7, 1, 0));
//
//    printf("array_list3[0] := %g\n", *(array_list3 + 0));
//    printf("array_list3[1] := %g\n", *(array_list3 + 1));
//    printf("array_list3[2] := %g\n", *(array_list3 + 2));
//    printf("array_list3[3] := %g\n", *(array_list3 + 3));
    //printf("array_list3[4] := %g\n", *(array_list3 + 4));


    double a[11] = {1, 2, 7, 4, 6, 5, 9, 8, 3, 10, NAN};



//    double *aa =  m_sort(a);
//    printf("a[0] := %g\n", *(aa + 0));
//    printf("a[1] := %g\n", *(aa + 1));
//    printf("a[2] := %g\n", *(aa + 2));
//    printf("a[3] := %g\n", *(aa + 3));
//    printf("a[4] := %g\n", *(aa + 4));
    //printf("a[5] := %g\n", *(aa + 5));

    // insertion sort
//    printf("INSERTION SORT\n------------------\n");
//    printf("array_list1[0] = %g\n", *(array_list1 + 0));
//    printf("array_list1[1] = %g\n", *(array_list1 + 1));
//    printf("array_list1[2] = %g\n", *(array_list1 + 2));
//    printf("array_list1[3] = %g\n", *(array_list1 + 3));
//    printf("array_list1[4] = %g\n", *(array_list1 + 4));
//    printf("array_list1[5] = %g\n", *(array_list1 + 5));
//    printf("array_list1[6] = %g\n", *(array_list1 + 6));
//    printf("array_list1[7] = %g\n", *(array_list1 + 7));

    //printf("\n\n");
    // bubble sort
//    printf("BUBBLE SORT\n------------------\n");
//    printf("array_list2[0] = %g\n", *(array_list2 + 0));
//    printf("array_list2[1] = %g\n", *(array_list2 + 1));
//    printf("array_list2[2] = %g\n", *(array_list2 + 2));
//    printf("array_list2[3] = %g\n", *(array_list2 + 3));
//    printf("array_list2[4] = %g\n", *(array_list2 + 4));
//    printf("array_list2[5] = %g\n", *(array_list2 + 5));
//    printf("array_list2[6] = %g\n", *(array_list2 + 6));
//    printf("array_list2[7] = %g\n", *(array_list2 + 7));




    Node* root = NULL;
    root = insert(root, 27);
    insert(root, 14);
    insert(root, 35);
    insert(root, 10);
    insert(root, 19);
    insert(root, 31);
    insert(root, 42);
    insert(root, 11);

    in_order(root);
    root = delete(root, 11);
    printf("\n\n");
    in_order(root);
    printf("Tree size: %d\n", tree_size(root));

    int n = 10;
    printf("%d\n", fun(4));


    // setting up a linear model

    LinearModel* slm = create(10);
    insert_data(slm, 20, 5);
    insert_data(slm, 55, 12);
    insert_data(slm, 30, 10);
    printf("Linear Model: slm[0][0] = (%g, %g)\n",slm->data_array[0][0], slm->data_array[1][0]);
    printf("Linear Model: slm[1][1] = (%g, %g)\n",slm->data_array[0][1], slm->data_array[1][1]);
    printf("Linear Model: slm[2][2] = (%g, %g)\n",slm->data_array[0][2], slm->data_array[1][2]);
    printf("X-mean: %g\n", mean(slm, 0));
    printf("Y-mean: %g\n", mean(slm, 1));
    return 0;
}