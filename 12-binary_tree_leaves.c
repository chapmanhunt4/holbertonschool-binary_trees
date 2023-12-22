#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves of the tree
 * @tree: pointer to root node
 * Return: number of leaves, or 0
 **/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if (tree->right == NULL && tree->left == NULL)
		{
			return (1);
		}
		return (binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left));
	}
	return (0);
}
