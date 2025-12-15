#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * max - Returns the maximum of two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: The larger number of a and b
 */
int max(int a, int b)
{
	return (a >= b ? a : b);
}

/**
 * binary_tree_height - Calculates the height of a binary tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: The height of the binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	return ((size_t) max((int) binary_tree_height(tree->left), (int) binary_tree_height(tree->right)) + 1);
}
