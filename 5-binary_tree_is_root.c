#include "binary_trees.h"
/**
 * binary_tree_is_root - to check if node is the root of the binary table
 * @node : pointer to the node to be checked.
 * 
 * Return : 1 if it is the root, else returns 0.
*/
int binary_tree_is_root(const binary_tree_t *node)
{
    if (node == NULL){
        return (0);
    }
    if (node->parent == NULL){
        return (1);
    }
    else{
        return (0);
    }
}