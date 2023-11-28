#include "binary_trees.h"

/**
 * binary_tree_insert_left - create a binary tree node
 * @parent: pointer to the node to inser the left-child
 * @value: value to put in the new node
 * Return: the new node created
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}

