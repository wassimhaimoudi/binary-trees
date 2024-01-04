#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 * @parent: Apointer to the node to insert the left-child in.
 * @value: The valueto store in the new node.
 *
 * Return: A pointer to the created node, otherwise NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *old;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	old = parent->left;
	if (old)
	{
		old->parent = new;
		new->left = old;
	}
	parent->left = new;
	return (new);
}
