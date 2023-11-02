#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: the root of the binary tree
 *
 * Return: 1 if the tree if full, else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left && tree->right)
		return (1 & binary_tree_is_full(tree->left)
			& binary_tree_is_full(tree->right));
	else if (!tree->left && !tree->right)
		return (1);
	else
		return (0);
}
