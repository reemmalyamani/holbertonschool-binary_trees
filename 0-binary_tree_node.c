#include "binary_trees.h"

/**
 * binary_tree_node - Create a new binary tree node
 * @parent: Pointer to the parent node
 * @value: Integer value to store in the new node
 *
 * Description:
 * Allocates memory for a new node, sets its value,
 * assigns its parent, and initializes its left and right
 * child pointers to NULL.
 *
 * Return: Pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new;

    new = malloc(sizeof(binary_tree_t));
    if (new == NULL)
        return (NULL);

    new->n = value;
    new->parent = parent;
    new->left = NULL;
    new->right = NULL;

    return (new);
}
