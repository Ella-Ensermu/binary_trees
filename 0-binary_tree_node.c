#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary node tree
 * @parent: parent of the node to create
 * @value: Value to put new nod
 *
 * Return: Pointer to the newly created node
 *         Otherwise - NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newer_node;

	newer_node = malloc(sizeof(binary_tree_t));
	if (newer_node == NULL)
		return (NULL);

	newer_node->n = value;
	newer_node->parent = parent;
	newer_node->left = NULL;
	newer_node->right = NULL;
	
	return (newer_node);
}
