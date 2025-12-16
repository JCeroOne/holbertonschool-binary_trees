#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - Gets the sibling of the specified node
 * @node: The node
 *
 * Return: A pointer to the sibling of the specified node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	int isLeft = 0;

	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	if (node->n < node->parent->n)
		isLeft = 1;

	return (isLeft == 1 ? node->parent->right : node->parent->left);
}
