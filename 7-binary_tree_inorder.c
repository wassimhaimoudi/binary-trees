#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through s binsry tree using inorder traversal
 * @tree: A pointer to the root node of the tree to traverse
 * @func: A function pointer to call for each node.
 * - The value of the node must be passed as a parmeter.
 *
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func)
	{
		if (!tree)
			return;

		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
