#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with one child
 * @tree: pointer to root node
 * Return: number of nodes with 1 child, or 0
 **/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if (tree->right || tree->left)
		{
			return (binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left) + 1);
	}
	return (0);
}
