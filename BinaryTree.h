//
// Created by wmurphy on 9/20/2019.
//

#ifndef DATASTRUCTURES_ALGORITHMS_IN_C_BINARYTREE_H
#define DATASTRUCTURES_ALGORITHMS_IN_C_BINARYTREE_H


typedef struct node {
    int data;
    struct node* left;
    struct node* right;
}Node;

// create a new node
Node* new_node(int data);

// search for a node inside the tree
Node* search(Node* root, int data);

// insert a new node into the tree
Node* insert(Node* node, int data);

// in order traversal of the tree
void in_order(Node* root);


#endif //DATASTRUCTURES_ALGORITHMS_IN_C_BINARYTREE_H
