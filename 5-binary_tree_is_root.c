#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is the root of a tree
 * @node: The node to check
 *
 * Return: 1 if the node is a root node, 0 otherwise.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent != NULL)
		return (0);

	return (1);
}
