#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if tree is full
 * @tree: pointer to root node
 * Return: 1 if full, or 0
 **/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if (tree->left != NULL && tree->right != NULL)
			return (1);

		if (tree->right == NULL && tree->left != NULL)
			return (0);

		if (tree->left == NULL && tree->right != NULL)
			return (0);
	}
	return (0);
}
