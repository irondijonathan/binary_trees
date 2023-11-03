#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - This Creates a binary tree node
 * @parent: This is the parent node
 * @value: This is the value to be placed in the node
 *
 * Return: Return the pointer to the new node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (!new)
	{
		return (NULL);
	}

	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
