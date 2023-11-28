#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: 0 if tree is Null
 */

size_t binary_tree_height(const binary_tree_t *tree)
{

	size_t left_h;
	size_t right_h;

	if (tree == NULL)
		return (0);

	/*check if left and right subtree exists*/
	if (tree->left)
	{
		left_h = 1 + binary_tree_height(tree->left);
	}
	else
		left_h = 0;
	if (tree->right)
	{
		right_h = 1 + binary_tree_height(tree->right);
	}
	else
		right_h = 0;
	if (left_h > right_h)
	{
		return (left_h);
	}
	else
		return (right_h);
}

