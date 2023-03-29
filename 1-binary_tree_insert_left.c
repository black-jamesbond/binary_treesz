#include "binary_trees.h"
#include <stdlib.h>




binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value){
    binary_tree_t *node;

    node = malloc(sizeof(binary_tree_t));
    node->n = value;
    node->right = NULL;
    node->parent = parent;
    node->left = NULL;

    if (parent->left == NULL){
        parent->left = node;
    }
    else{
        binary_tree_t *p = parent->left;
        node->left = p;
        parent->left = node;
    }
    return (node);
}