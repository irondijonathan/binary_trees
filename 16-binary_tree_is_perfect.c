#include <stdlib.h>
#include "binary_trees.h"

/**
 * is_perfect - This checks if a binary tree is perfect
 * @tree: This is the root of the binary tree
 * @depth: This is the current depth of the node
 * @d: This is the pointer to the minimum depth
 *
 * Return: Return 1 if the tree is perfect, else 0
 */
int is_perfect(const binary_tree_t *tree, int depth, int *d)
{
	if (!tree)
		return (0);
	if (tree->left && tree->right)
	{
		return (is_perfect(tree->left, depth + 1, d)
			& is_perfect(tree->right, depth + 1, d));
	}
	else if (!tree->left && !tree->right)
	{
		if (*d < 0)
			*d = depth;
		return (*d == depth);
	}
	else
	{
		return (0);
	}
}

/**
 * binary_tree_is_perfect - This checks if a binary tree is perfect
 * @tree: This is the root node of the tree
 *
 * Return: RETURN 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth = -1;

	return (is_perfect(tree, 0, &depth));
}
