#include "binary_trees.h"

/**
 * binary_tree_size - measures size of binary tree
 * @tree: pointer to root node
 * Return: size of tree, or 0
 **/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_r = 0;
	size_t size_l = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->right != NULL)
	{
		rize_r = binary_tree_size(tree->right) + 1;
	}
	if (tree->left != NULL)
	{
		size_l = binary_tree_size(tree->left) + 1;
	}
	return (size_r + size_l + 1);
}
