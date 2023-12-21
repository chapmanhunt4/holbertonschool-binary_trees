#include "binary_tree.h"

/**
 * binary_tree_is_leaf - Checks if node is a leaf
 * @node: pointer to node to check
 * Return: 1 if leaf, otherwise 0
 **/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	binary_tree_t *temp = node->parent;

	if (node == NULL)
	{
		return (0);
	}

	if (node == temp->left && temp->right == NULL)
	{
		return (1);
	}
	else if (node == temp->right && temp->left == NULL)
	{
		return (1);
	}
	else
		return (0);
}
