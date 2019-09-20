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

Node* get_minimum(Node* node) {

    Node* current = node;
    while (current && current->left != NULL) {
        current = current->left;
    }
    return current;
}



Node* delete(Node* root, int data) {

    if (root == NULL)
        return root;

    if (data < root->data) {
        root->left = delete(root->left, data);
    }
    else if (data > root->data) {
        root->right = delete(root->right, data);
    } else {
        // data == root->data
        if (root->left == NULL) {
            Node* temp_node = root->right;
            free(root);
            return temp_node;
        }
        else if (root->right == NULL) {
            Node* temp_node = root->left;
            free(root);
            return temp_node;
        }

        Node* temp = get_minimum(root->right);
        root->data = temp->data;
        root->right = delete(root->right, temp->data);

    }
    return root;
}

int tree_size(Node* root) {

   if (root == NULL)
       return 0;
   else
       return (tree_size(root->left) + 1 + tree_size(root->right));

}





