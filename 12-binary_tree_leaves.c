#include <stdlib.h>
#include "binary_trees.h"

/**
 * count_leaves - counts the leaves of a binary tree
 * @tree: pointer to the current node
 * @count: pointer to the total count
 *
 * Return: void
 */
void count_leaves(const binary_tree_t *tree, size_t *count)
{
	if (!tree)
		return;
	if (!tree->left && !tree->right)
	{
		*count = *count + 1;
	}
	else
	{
		count_leaves(tree->left, count);
		count_leaves(tree->right, count);
	}
}

/**
 * binary_tree_leaves - counts the leaves of a binary tree
 * @tree: the root node of the tree to measure
 *
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	count_leaves(tree, &count);
	return (count);
}
