#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through the tree using the postorder traversal
 * @tree: A pointer to the oot node of the tree
 * @func: A function ointer to call for each node.
 *
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func)
	{
		if (!tree)
			return;
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
