#include "binary_trees.h"

/**
 * height - Measures the height of a binary tree
 * @tree: Pointer to the node to measure the height from
 *
 * Return: Height of the tree, or 0 if tree is NULL
 */
size_t height(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_h = 1 + height(tree->left);

	if (tree->right)
		right_h = 1 + height(tree->right);

	if (left_h > right_h)
		return (left_h);
	return (right_h);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: Balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_height = (int)height(tree->left);

	if (tree->right)
		right_height = (int)height(tree->right);

	return (left_height - right_height);
}
