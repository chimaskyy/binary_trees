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

	return (left_n + right_n + 1);

}

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
 * _pow - Calculate the power of a x to y
 * @x: base
 * @y: exponent
 * Return: result of x raised to y
 */

int _pow(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow(x, y - 1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if tree is null or not perfect else 1
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height;
	size_t size;
	size_t val;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);

	val = (size_t)_pow(2, height + 1);
	return (val - 1 == size);

}
