#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of a parent
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new;

    if (parent == NULL)
        return (NULL);

    new = binary_tree_node(parent, value);
    if (new == NULL)
        return (NULL);

    /* If parent already has a right child, push it down */
    if (parent->right != NULL)
    {
        new->right = parent->right;
        parent->right->parent = new;
    }

    /* Assign new node as parent's right child */
    parent->right = new;

    return (new);
}
