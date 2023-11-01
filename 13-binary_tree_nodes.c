#include <stdlib.h>
#include "binary_trees.h"

/**
 * count_nodes - counts the non leaf nodes of a binary tree
 * @tree: pointer to the current node
 * @count: pointer to the total count
 *
 * Return: void
 */
void count_nodes(const binary_tree_t *tree, size_t *count)
{
	if (!tree)
		return;
	if (tree->left || tree->right)
	{
		*count = *count + 1;
	}
	count_nodes(tree->left, count);
	count_nodes(tree->right, count);
}

/**
 * binary_tree_nodes - counts the non leaf nodes of a binary tree
 * @tree: the root node of the tree to measure
 *
 * Return: number of leaves
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	count_nodes(tree, &count);
	return (count);
}
