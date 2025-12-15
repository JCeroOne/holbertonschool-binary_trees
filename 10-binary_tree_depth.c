#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * _max - Returns the maximum of two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: The larger number of a and b
 */
int _max(int a, int b)
{
	return (a >= b ? a : b);
}

/**
 * binary_tree_depth - Calculates the depth of a binary tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: The depth of the binary tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t l;
	size_t r;

	if (tree == NULL)
		return (0);

	l = binary_tree_depth(tree->left);
	r = binary_tree_depth(tree->right);
	return ((size_t) _max((int) l, (int) r) + 1);
}
