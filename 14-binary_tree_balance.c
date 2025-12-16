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
 * binary_tree_height - Calculates the height of a binary tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: The height of the binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l;
	size_t r;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	return ((size_t) _max((int) l, (int) r) + 1);
}

/**
 * binary_tree_balance - Calculates the balance factor of a binary tree.
 * @tree: A pointer to the root node.
 *
 * Return: The balance factor of the binary tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t l;
	size_t r;

	if (tree == NULL)
		return (0);

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);

	return ((int) l) - ((int) r));
}
