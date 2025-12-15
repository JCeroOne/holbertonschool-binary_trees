#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Sets a node as the right child of the parent.
 * @parent: A pointer to the parent node.
 * @value: The value of the new node.
 *
 * Return: A pointer to the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL || parent == NULL)
	{
		if (node != NULL)
			free(node);

		return (NULL);
	}

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = parent->right;

	if (node->right != NULL)
		node->right->parent = node;

	parent->right = node;

	return (node);
}

