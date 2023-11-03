#include "binary_trees.h"

/**
 * binary_tree_uncle - This is the function that finds the uncle of a node
 * @node: This is the Pointer to the node to find the uncle
 *
 * Return: if node is NULL(NULL), if node has no uncle(NULL)
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);

	return (node->parent->parent->left);
}
