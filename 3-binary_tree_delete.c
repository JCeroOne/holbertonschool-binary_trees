#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * delete_nodes_recursively - Recursively deletes a binary tree
 * @node: The node to delete
 */
void delete_nodes_recursively(binary_tree_t *node)
{
	if (node == NULL)
		return;

	if (node->left != NULL)
		delete_nodes_recursively(node->left);

	if (node->right != NULL)
		delete_nodes_recursively(node->right);

	free(node);
}

/**
 * binary_tree_delete - Deletes a binary tree
 * @tree: A pointer to the root of the binary tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	delete_nodes_recursively(tree);
}
