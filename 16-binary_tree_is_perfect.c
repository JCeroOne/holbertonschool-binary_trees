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

	return (((int) l) - ((int) r));
}

/**
 * recursive_full_check - Recursively checks if a binary tree is full
 * @node: The parent node
 *
 * Return: 1 if full, 0 otherwise
 */
int recursive_full_check(const binary_tree_t *node)
{
	int l;
	int r;

	if (node == NULL)
		return (1);

	if (node->left == NULL && node->right == NULL)
		return (1);

	if (node->left != NULL && node->right == NULL)
		return (0);

	if (node->right != NULL && node->left == NULL)
		return (0);

	r = recursive_full_check(node->right);
	l = recursive_full_check(node->left);

	if (l == 0 || r == 0)
		return (0);

	return (1);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: A pointer to the root node
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int bal;
	int full;

	if (tree == NULL)
		return (0);

	bal = binary_tree_balance(tree);
	full = recursive_full_check(tree);
	
	if(bal != 0 || full == 0)
		return (0);

	return (1);
}
