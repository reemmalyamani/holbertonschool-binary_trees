#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if a node is the root of a binary tree
 * @node: Pointer to the node we want to examine
 *
 * Description:
 * A root node is the top node of a tree — meaning it has no parent.
 * If the node is NULL or it has a parent, then it is not a root.
 *
 * Return: 1 if the node is a root, otherwise 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
    if (node == NULL)
        return (0);

    /* A root node has no parent */
    if (node->parent == NULL)
        return (1);

    return (0);
}
