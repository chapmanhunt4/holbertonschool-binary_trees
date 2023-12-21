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
		if (tree->left != NULL || tree->right != NULL)
		{
			free(tree->left);
			free(tree->right);
		}
		free(tree);
	}
}
