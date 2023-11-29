#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is ful
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if tree is NULL or not full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/*check if node has either 0 or 2 child*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	return (0);


}
