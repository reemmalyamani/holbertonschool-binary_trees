#include "binary_trees.h"

/**
 * binary_tree_depth - Measure the depth of a node in a binary tree
 * @tree: Pointer to the node whose depth we want to find
 *
 * Description:
 * The depth of a node is how far it is from the root.
 * It's counted as the number of edges from this node
 * up to the root. The root itself has a depth of 0.
 *
 * Return: The depth of the node, or 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t depth = 0;

    if (tree == NULL)
        return (0);

    /* Walk upward until we reach the root */
    while (tree->parent != NULL)
    {
        depth++;
        tree = tree->parent;
    }

    return (depth);
}
