#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - Calculates the size of a binary tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: The size of the binary tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l;
	size_t r;

	if (tree == NULL)
		return (0);

	l = binary_tree_size(tree->left);
	r = binary_tree_size(tree->right);

	return (l + r + 1);
}
