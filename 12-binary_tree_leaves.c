#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves of a binary tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: The number of leaf nodes in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l;
	size_t r;

	if (tree == NULL)
		return (0);

	l = binary_tree_leaves(tree->left);
	r = binary_tree_leaves(tree->right);

	return (l + r + ((tree->left == NULL && tree->right == NULL) ? 1 : 0));
}
