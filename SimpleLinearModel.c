//
// Created by wmurphy on 9/20/2019.
//
#include "SimpleLinearModel.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


LinearModel* create(int size) {
    // allocate memory for the LinearModel struct
    LinearModel* lm = (LinearModel*)malloc(sizeof(LinearModel));

    // allocate memory for lm->data_array
    lm->data_array = (double**)malloc(2* sizeof(double*));

    // X-axis data
    lm->data_array[0] = (double*)malloc(size* sizeof(double));
    // Y-axis data
    lm->data_array[1] = (double*)malloc(size* sizeof(double));

    lm->size = size;
    lm->position = 0;

    return lm;

}

void insert_data(LinearModel* lm, double x, double y) {

    if (lm->position < lm->size - 1) {
        *(lm->data_array[0] + lm->position) = x;
        *(lm->data_array[1] + lm->position) = y;
        lm->position++;
    } else {
        printf("LinearModel->data_array is full!");
    }

}

double mean(LinearModel* lm, int x_or_y) {

    // X-axis mean
    if (x_or_y == 0) {

        double sum_ = 0;
        for (int i=0; i < lm->position; i++) {
            sum_ += *(lm->data_array[0] + i);
        }

        return sum_ / lm->position;
    } else {
        double sum_ = 0;
        for (int i=0; i < lm->position; i++) {
            sum_ += *(lm->data_array[1] + i);
        }

        return sum_ / lm->position;
    }
}

double* data_less_mean(LinearModel* lm, int x_or_y) {

}