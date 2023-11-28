#include "binary_trees.h"

/**
 * binary_tree_insert_right - create a binary tree node
 * @parent: pointer to the node to inser the right-child
 * @value: value to put in the new node
 * Return: the new node created
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}

