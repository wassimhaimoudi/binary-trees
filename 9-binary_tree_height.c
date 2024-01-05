#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: 0 If tree is NULL, or the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height = 0, r_height = 0;

	if (!tree)
		return (0);
	if (tree->left)
		l_height = 1 + binary_tree_height(tree->left);
	if (tree->right)
		r_height = 1 + binary_tree_height(tree->right);

	return ((l_height > r_height) ? l_height : r_height);
}
