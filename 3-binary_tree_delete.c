#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes a binary tree
 * @tree: pointer to root of tree
 **/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		free(tree->right);
		free(tree->left);
		if (tree->left->left != NULL)
		{
			free(tree->left->left);
		}
		if (tree->left->right != NULL)
		{
			free(tree->left->right);
		}
		if (tree->right->right != NULL)
		{
			free(tree->right->right);
		}
		if (tree->right->left != NULL)
		{
			free(tree->right->left);
		}
		free(tree);
	}
}
