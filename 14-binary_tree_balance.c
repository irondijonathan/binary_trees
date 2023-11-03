#include <stdlib.h>
#include "binary_trees.h"

/**
 * find_sub_height - This finds the height of a binary tree
 * @tree: This is the pointer to the root node
 * @h: This is the length of edges traversed so far
 * @height: This is the pointer to the maximum height found
 *
 * Return: returns void
 */
void find_sub_height(const binary_tree_t *tree, size_t h, size_t *height)
{
	if (!tree)
		return;
	if (tree->left || tree->right)
	{
		find_sub_height(tree->left, h + 1, height);
		find_sub_height(tree->right, h + 1, height);
	}
	else
	{
		if (*height < h)
			*height = h;
	}
}

/**
 * binary_tree_balance - finds the balance factor of a binary tree
 * @tree: root node of the tree
 *
 * Return: the balance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);

	find_sub_height(tree->left, 1, &left);
	find_sub_height(tree->right, 1, &right);

	return (left - right);
}
