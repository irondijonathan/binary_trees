#include <stdlib.h>
#include "binary_trees.h"

/**
 * count_nodes - This counts the nodes of a binary tree
 * @tree: This is the pointer to the current node
 * @count: This is the pointer to the total count
 *
 * Return: Returns void
 */
void count_nodes(const binary_tree_t *tree, size_t *count)
{
	if (!tree)
		return;
	*count = *count + 1;
	count_nodes(tree->left, count);
	count_nodes(tree->right, count);
}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: the root node of the tree to measure
 *
 * Return: size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	count_nodes(tree, &count);
	return (count);
}
