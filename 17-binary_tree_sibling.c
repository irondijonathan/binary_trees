#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - This finds the sibling of a node
 * @node: This is the node to find the sibling of
 *
 * Return: This is the pointer to the siblng node or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}
