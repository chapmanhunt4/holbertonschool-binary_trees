#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if node is a leaf
 * @node: pointer to node to check
 * Return: 1 if leaf, otherwise 0
 **/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	binary_tree_t *temp = NULL;
	binary_tree_t *check = NULL;

	check = malloc(sizeof(binary_tree_t));
	*node = *check;
	if (check == NULL)
	{
		return (0);
	}

	temp = malloc(sizeof(binary_tree_t));

	temp = check->parent;
	if (check == temp->left && temp->right == NULL)
	{
		return (1);
	}
	else if (check == temp->right && temp->left == NULL)
	{
		return (1);
	}
	else
		return (0);
}
