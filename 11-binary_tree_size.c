#include "binary_trees.h"

/**
 * binay_tree_size - Mesures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to mesure the size.
 *
 * Return: The size of the binary tree, otherwise 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
