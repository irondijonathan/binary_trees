#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - This performs inorder traversal of a binary tree
 * @tree: This is the root of the binary tree
 * @func: This is the pointer to a function to call for each node.
 *
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
