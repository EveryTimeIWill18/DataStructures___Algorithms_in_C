//
// Created by wmurphy on 9/20/2019.
//

#include "BinaryTree.h"
#include <stdlib.h>
#include <stdio.h>
Node* new_node(int data) {

    // allocate memory for a new node
    Node* _new_node = (Node*)malloc(sizeof(Node));

    // assign the data to new_node->data
    _new_node->data = data;

    // set left and right nodes to NULL pointers
    _new_node->left = NULL;
    _new_node->right = NULL;

    return _new_node;
}

Node* search(Node* root, int data) {

    // if root == NULL
    if (root == NULL || root->data == data)
        return root;

    // if the data <= root->data
    if (root->data > data) {
        return search(root->left, data);
    }

    return search(root->right, data);
}

Node* insert(Node* node, int data) {

    if (node == NULL) // create the root node
        return new_node(data);

    if (node->data > data) // go down the left tree
        node->left = insert(node->left, data);

    else if (node->data < data) // go down the right tree
        node->right = insert(node->right, data);

    return node; // finally insert new node

}

void in_order(Node* root) {
    if (root != NULL) {
        in_order(root->left);
        printf("%d\n", root->data);
        in_order(root->right);
    }
}