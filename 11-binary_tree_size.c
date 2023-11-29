#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: 0 if tree is null
 */

size_t binary_tree_size(const binary_tree_t *tree)
{

	size_t left_n;
	size_t right_n;

	if (tree == NULL)
		return (0);

	left_n = binary_tree_size(tree->left);
	right_n = binary_tree_size(tree->right);

	return left_n + right_n + 1;

}

