#include "binary_trees.h"

/**
* bbinary_tree_insert_left - Inset a new node as the left child of a parent 
@parent: The node we want to attach to the new left child to
*@value : int value to store in new node
*Description: creates a new node and links it as the parent's left child.
*if the parent has a left child. that is moved one level DOWN; and becomes the left child of
*the new node
*
*Return: A pointer to the new node or NULL if 1-something goes wrong or 2-Parent is NULL
*
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new;

    if (parent == NULL)
        return (NULL);

    new = malloc(sizeof(binary_tree_t));
    if (new == NULL)
        return (NULL);

    new->n = value;
    new->parent = parent;
    new->left = NULL;
    new->right = NULL;

    /* If the parent already has a left child, shift it under the new node */
    if (parent->left != NULL)
    {
        new->left = parent->left;
        parent->left->parent = new;
    }

    /* Attach the new node as the parent's left child */
    parent->left = new;

    return (new);
}
