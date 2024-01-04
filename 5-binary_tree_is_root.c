#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is root.
 * @node: A pointer tothe node to check
 *
 * Return: 1 on success, otherwise 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->parent)
		return (1);
	else
		return (0);
}
