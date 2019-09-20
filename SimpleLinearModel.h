//
// Created by wmurphy on 9/20/2019.
//

#ifndef DATASTRUCTURES_ALGORITHMS_IN_C_SIMPLELINEARMODEL_H
#define DATASTRUCTURES_ALGORITHMS_IN_C_SIMPLELINEARMODEL_H

typedef struct linear_model {
    double **data_array;
    int size;
    int position;
}LinearModel;

LinearModel* create(int size);

void insert_data(LinearModel* lm, double x, double y);

double mean(LinearModel* lm, int x_or_y);

double* data_less_mean(LinearModel* lm, int x_or_y);


#endif //DATASTRUCTURES_ALGORITHMS_IN_C_SIMPLELINEARMODEL_H
