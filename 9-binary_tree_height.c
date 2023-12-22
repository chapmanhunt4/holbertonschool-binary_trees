#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to root node
 * Return: the size, or 0 if null
 **/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_h = 0;
	size_t left_h = 0;

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

	if (right_h > left_h)
		return (right_h);
	else
		return (left_h);
}
