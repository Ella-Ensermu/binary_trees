#include "binary_trees.h"
/**
 * binary_tree_insert_right - add a node in the right of the parent
 * if it exists it move down one level and add the new node first
 * @parent: parent of the specified node
 * @value: value of the node
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
