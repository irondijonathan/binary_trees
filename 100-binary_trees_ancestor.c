#include "binary_trees.h"

/**
 * binary_trees_ancestor - Function that finds the LC ancestor of
 * two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Your function must return a pointer to the lowest
 * common ancestor node of the two given node. If no common
 * ancestor was found, return NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *mum, *dad;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	mum = first->parent, dad = second->parent;
	if (first == dad || !mum || (!mum->parent && dad))
		return (binary_trees_ancestor(first, dad));
	else if (mum == second || !dad || (!dad->parent && mum))
		return (binary_trees_ancestor(mum, second));

	return (binary_trees_ancestor(mum, dad));
}
