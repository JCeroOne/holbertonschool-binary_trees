#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - Gets the uncle of the specified node
 * @node: The node
 *
 * Return: A pointer to the uncle of the specified node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	if (node->parent->parent == NULL)
		return (NULL);

	if (node->parent->n < node->parent->parent->n)
		return (node->parent->parent->right);

	return (node->parent->parent->left);
}
