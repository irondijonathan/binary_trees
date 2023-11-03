#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - This performs postorder traversal of a binary tree
 * @tree: This is the root of the binary tree
 * @func: This is the pointer to a function to call for each node.
 *
 * Return: return void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
