#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 *  Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the newer node.
 *
 * Description: If parent already has a left-child, the newer node
 *              takes its place and the old left-child is set as
 *              the left-child of the newer node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newer_node;

	if (parent == NULL)
		return (NULL);

	newer_node = binary_tree_node(parent, value);
	if (newer_node == NULL)
		return (NULL);
	
	if (parent->left != NULL)
	{
		newer_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = newer_node;
	return (newer_node);
}
