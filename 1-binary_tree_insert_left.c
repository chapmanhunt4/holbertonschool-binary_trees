#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child
 * @parent: the parent of the new node
 * @value: the value assigned to the new node
 * Return: A pointer to new new node, or NULL
 **/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;
	binary_tree_t *temp = NULL;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL || parent == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = value;
	if (parent->left != NULL)
	{
		temp = parent->left;
		parent->left = new_node;
		parent->right = NULL;
		new_node->parent = parent;
		new_node->right = NULL;
		new_node->left = temp;
		temp->parent = new_node;
	}
	else
	{
		parent->left = new_node;
		parent->right = NULL;
		new_node->parent = parent;
		new_node->right = NULL;
		new_node->left = NULL;
	}
	return (new_node);
}
