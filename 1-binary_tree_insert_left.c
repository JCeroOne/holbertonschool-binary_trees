#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Sets a node as the left child of the parent.
 * @parent: A pointer to the parent node.
 * @value: The value of the new node.
 *
 * Return: A pointer to the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->right = NULL;

	if(parent != NULL)
	{
		node->left = parent->left;
		parent->left = node;
	}
	else
		node->left = NULL;

	return (node);
}

