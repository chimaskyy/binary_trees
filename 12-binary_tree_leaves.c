#include "binary_trees.h"

/**
 * binary_tree_leaves - count the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count_l;
	size_t count_r;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	count_l = binary_tree_leaves(tree->left);
	count_r = binary_tree_leaves(tree->right);

	return (count_l + count_r);


}
