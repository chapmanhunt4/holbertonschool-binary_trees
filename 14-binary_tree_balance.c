#include "binary_trees.h"

/**
 * binary_tree_balance - finds balance factor of tree
 * @tree: pointer to root node
 * Return: balance factor, or 0
 **/

int binary_tree_balance(const binary_tree_t *tree)
{
	int right_h = 0;
	int left_h = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->right != NULL)
	{
		right_h = binary_tree_height(tree->right) + 1;
	}
	if (tree->left != NULL)
	{
		left_h = binary_tree_height(tree->left) + 1;
	}
	return (right_h - left_h);
}
