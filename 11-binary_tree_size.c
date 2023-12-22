#include "binary_trees.h"

/**
 * binary_tree_size - measures size of binary tree
 * @tree: pointer to root node
 * Return: size of tree, or 0
 **/

size_t binary_tree_size(const binary_tree_t *tree)
{

	if (tree != NULL)
	{
		return (1 + binary_tree_size(tree->right) + binary_tree_size(tree->left));
	}
	return (0);
}
