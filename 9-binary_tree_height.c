#include <stdlib.h>
#include "binary_trees.h"

/**
 * find_height - finds the height of a binary tree
 * @tree: pointer to the root node
 * @h: length of edges traversed so far
 * @height: pointer to the maximum height found
 *
 * Return: void
 */
void find_height(const binary_tree_t *tree, size_t h, size_t *height)
{
	if (!tree)
		return;
	if (tree->left || tree->right)
	{
		find_height(tree->left, h + 1, height);
		find_height(tree->right, h + 1, height);
	}
	else
	{
		if (*height < h)
			*height = h;
	}
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: the root node of the tree to measure
 *
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (!tree)
		return (0);
	find_height(tree, 0, &height);
	return (height);
}
