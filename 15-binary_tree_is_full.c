#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if tree is full
 * @tree: pointer to root node
 * Return: 1 if full, or 0
 **/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int right_count = 0;
	int left_count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right != NULL)
		return (0);

	if (tree->right == NULL && tree->left != NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_count = binary_tree_is_full(tree->left);
	right_count = binary_tree_is_full(tree->right);

	if ((left_count == 0 && right_count == 1) || (left_count == 1 && right_count == 0))
		return (0);
}
