#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

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

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right == NULL)
		return (0);

	if (tree->right != NULL && tree->left == NULL)
		return (0);

	r = recursive_full_check(tree->right);
	l = recursive_full_check(tree->left);

	if (l == 0 || r == 0)
		return (0);

	return (1);
}

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: A pointer to the root of the tree.
 *
 * Return: 1 if the tree is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (recursive_full_check(tree));
}
