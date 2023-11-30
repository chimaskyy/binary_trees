#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node:  pointer to the node to find the sibling
 * Return: Null if node or parent is null or node has no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);
	if (node->parent->left == node && node->parent->right != NULL)
	{
		return (node->parent->right);
	}
	else if (node->parent->right == node && node->parent->left != NULL)
	{
		return (node->parent->left);
	}
	else
	{
		return (NULL);
	}
}
