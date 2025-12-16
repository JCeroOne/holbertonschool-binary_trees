#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

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
 * recursive_perfect_check - Recursively checks if a binary tree is perfect
 * @node: The parent node
 * @depth: The current depth of the node
 * @maxHeight: The maximum height of the tree
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int recursive_perfect_check(const binary_tree_t *node, size_t depth, size_t maxHeight)
{
	int r;
	int l;

	if (node == NULL)
		return (1);

	if (node->left == NULL && node->right == NULL)
	{
		if (depth == maxHeight)
			return (1);

		return (0);
	}

	if (node->left != NULL && node->right == NULL)
		return (0);

	if (node->right != NULL && node->left == NULL)
		return (0);

	r = recursive_perfect_check(node->right, depth + 1, maxHeight);
	l = recursive_perfect_check(node->left, depth + 1, maxHeight);

	if (r == 0 || l == 0)
		return (0);

	return (1);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: The tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h;

	if (tree == NULL)
		return (0);

	h = binary_tree_height(tree);

	return (recursive_perfect_check(tree, 0, h));
}
