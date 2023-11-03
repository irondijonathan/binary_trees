#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - This inserts a node as the right child of another node
 * @parent: This is the parent node
 * @value: This is the value to insert
 *
 * Return: Return pointer to the new node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (!parent)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);

	if (parent->right != NULL)
	{
		parent->right->parent = new;
		new->right = parent->right;
	}
	parent->right = new;

	return (new);
}
