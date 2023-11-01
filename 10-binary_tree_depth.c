#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: node to measure
 *
 * Return: the depth of the node
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
