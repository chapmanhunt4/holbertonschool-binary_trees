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
		free(tree);
}
