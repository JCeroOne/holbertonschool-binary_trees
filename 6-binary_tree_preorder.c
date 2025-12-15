#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses a binary tree in pre-order
 * @tree: A pointer to the root node of the tree
 * @func: A pointer to the callback function
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	(*func)(tree->node);

	binary_tree_preorder(tree->left);
	binary_tree_preorder(tree->right);
}
