#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - This inserts a node as the left child of another node
 * @parent: This is the parent node
 * @value: This is the value to insert
 *
 * Return: Return pointer to the new node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (!parent)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);

	if (parent->left != NULL)
	{
		parent->left->parent = new;
		new->left = parent->left;
	}
	parent->left = new;

	return (new);
}
