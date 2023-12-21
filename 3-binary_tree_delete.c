#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes a binary tree
 * @tree: pointer to root of tree
 **/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{

	}
	else
	{
		free(tree->right);
		free(tree->left);
		free(tree->left->left);
		free(tree->left->right);
		free(tree->right->left);
		free(tree->right->right);
		free(tree);
	}
}
