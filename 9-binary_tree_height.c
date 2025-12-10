#include "binary_trees.h"

/**
 * binary_tree_height - Measure the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Description:
 * The height is the number of edges on the longest path from
 * this node down to a leaf. A NULL tree has a height of 0.
 * A leaf node has a height of 0 as well.
 *
 * Return: The height of the tree, or 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_h, right_h;

    if (tree == NULL)
        return (0);

    /* If the node has no children, its height is 0 */
    if (tree->left == NULL && tree->right == NULL)
        return (0);

    /* Recursively calculate the height of the left and right subtrees */
    left_h = binary_tree_height(tree->left);
    right_h = binary_tree_height(tree->right);

    /* Height is 1 + the larger of the two subtree heights */
    return (1 + (left_h > right_h ? left_h : right_h));
}
