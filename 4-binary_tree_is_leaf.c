#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Check if a node is a leaf node
 * @node: Pointer to the node we want to check
 *
 * Description:
 * A leaf is a node that has no children at all.
 * If the node is NULL or has at least one child,
 * then it is not considered a leaf.
 *
 * Return: 1 if the node is a leaf, otherwise 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (node == NULL)
        return (0);

    /* A leaf has no left or right children */
    if (node->left == NULL && node->right == NULL)
        return (1);

    return (0);
}
