#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: parent of the specified node
 * @value: value to store in the new node
 * Return: NULL if it fails or the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newer_node;

	if (parent == NULL)
		return (NULL);

	newer_node = binary_tree_node(parent, value);
	if (newer_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		newer_node->right = parent->right;
		parent->right->parent = newer_node;
	}
	parent->right = newer_node;
	return (newer_node);
}
