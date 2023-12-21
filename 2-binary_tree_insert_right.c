#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as right-child
 * @parent: Pointer to parent of new node
 * @value: Value of the new node
 * Return: pointer to the new node or NULL
 **/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
        if (parent->right != NULL)
        {
                temp = parent->right;
                parent->right = new_node;
                parent->left = NULL;
                new_node->parent = parent;
                new_node->left = NULL;
                new_node->right = temp;
                temp->parent = new_node;
        }
        else
        {
                parent->right = new_node;
                parent->left = NULL;
                new_node->parent = parent;
                new_node->right = NULL;
                new_node->left = NULL;
        }
        return (new_node);
}
