#include "binary_trees.h"

/**
 * binary_tree_is_perfect - check if binary tree is perfect
 * @tree: pointer to root of tree
 * Return: 1 if perfect, 0 otherwise
 **/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int factor = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	if (tree->left != NULL && tree->right != NULL)
	{
		factor = binary_tree_balance(tree);
	}

	if (factor != 0)
		return (0);
	return (1);
}
