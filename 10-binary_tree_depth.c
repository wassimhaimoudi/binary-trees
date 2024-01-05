#include "binary_trees.h"

/**
 * binary_tree_depth - Mesures the depth of a node in  binary tree
 * @tree: A pointer to the node to measre the depth
 *
 * Return: The depth of the node, otherwise 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->parent == NULL)
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}
