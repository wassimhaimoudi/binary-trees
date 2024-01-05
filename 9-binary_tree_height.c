#include "binary_trees.h"

/**
 * max - Reveals the maximum of two given values
 * @val1: The first value.
 * @val2: The second value.
 *
 * Return: The max of val1 and val2
 */
size_t max(size_t val1, size_t val2)
{
	if (val1 > val2)
		return (val1);
	else
		return (val2);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: Height of the tree on success, otherwise 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (!tree)
		return (0);
	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	return (max(height_left, height_right) + 1);
}
