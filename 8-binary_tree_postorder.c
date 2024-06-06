#include "binary_trees.h"
/**
 * binary_tree_postorder - Traverses a binary tree using post-order traversal.
 * @tree: tree to go through
 * @func:  pointer to a function to call for each node.
 * Return: Nothing
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lengther_l = 0;
	size_t lengther_r = 0;

	if (!tree)
		return (0);

	lengther_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	lengther_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (lengther_l > lengther_r ? lengther_l : lengther_r);
}
