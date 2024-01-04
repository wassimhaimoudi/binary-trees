#include "binary_trees.h"

/**
 * binary_tree_left - Inserts a node as the left-child of another node.
 * @parent: Apointer to the node to insert the left-child in.
 * @value: The valueto store in the new node.
 *
 * Return: A pointer to the created node, otherwise NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;
	return (new);
}
