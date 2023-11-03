#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - This measures the depth of a node in a binary tree
 * @tree: This is the node to measure
 *
 * Return: This is the depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t *curr = NULL;
	size_t depth = 0;

	if (!tree)
		return (0);
	curr = (binary_tree_t *)tree;

	while (curr->parent)
	{
		depth++;
		curr = curr->parent;
	}
	return (depth);
}
