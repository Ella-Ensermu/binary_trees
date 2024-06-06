#include "binary_trees.h"

/**
 * binary_tree_height_b - Measures height of a binary tree for a bal tree
 * @tree: tree to go through
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t heighter_left = 0;
	size_t heighter_right = 0;

	if (!tree)
		return (0);

	heighter_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	heighter_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > heighter_right ? heighter_left : heighter_right);
}

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: tree to go through
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree)
	{
		left = ((int)binary_tree_height_b(tree->left));
		right = ((int)binary_tree_height_b(tree->right));
		total = left - right;
	}
	return (total);
}
