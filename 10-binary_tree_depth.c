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
	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
