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

/**
 * levelTraverse - traverses the tree at a specific level
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 */
void levelTraverse(const binary_tree_t *tree, int level, void(*func)(int))
{
	if (tree == NULL)
		return;
	if (level == 0)
	{
		func(tree->n);
	}
	if (level > 0)
	{
		/*traverse left and right subtrees with the level reduced by 1*/
		levelTraverse(tree->left, level - 1, func);
		levelTraverse(tree->right, level - 1, func);
	}
}

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t i, h;
	
	if (tree == NULL || func == NULL)
		return;
	
	h = binary_tree_height(tree);

	for (i = 0; i <= h; i++)
		levelTraverse(tree, i, func);
}
