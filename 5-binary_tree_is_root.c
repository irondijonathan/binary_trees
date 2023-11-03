#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - This checks if a node is a root
 * @node: This is the node to check
 *
 * Return: Return 1 if node is a root, else 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);
	else
		return (1);
}
