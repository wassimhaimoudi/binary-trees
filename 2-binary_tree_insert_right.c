#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: A pointer to thenode to insert the right-child in.
 * @value: The value to store the new node.
 *
 * Return: A pointer to the created node, otherwise NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *old;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	old = parent->right;

	if (old)
	{
		old->parent = new;
		new->left = old;
	}
	else
	{
		parent->right = new;
	}
	return (new);
}
