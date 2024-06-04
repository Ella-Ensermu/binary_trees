#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: Pointer to the newly created node
 *         NULL on failure
 *         NULL if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newer_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	newer_node = binary_tree_node(parent, value);
	if (newer_node == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		newer_node->left = parent->left;
		parent->left->parent = newer_node;
	}
	parent->left = newer_node;
	return (newer_node);
}
