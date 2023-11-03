#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - This checks if a node is a leaf
 * @node: This is the node to check
 *
 * Return: Return 1 if node is a leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
		return (0);
	else
		return (1);
}
