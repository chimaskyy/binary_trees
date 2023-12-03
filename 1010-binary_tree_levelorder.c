#include "binary_trees.h"

binary_tree_t *create_queue(int *first, int *second)
{
	binary_tree_t *q;

	q = malloc(sizeof(binary_tree_t));
	*first = 0;
	*second = 0;

	return (q);
}

void enqueue(const binary_tree_t **queue, int *first, size_t *newNode)
{
	queue[*first] = newNode;
	(*first)++;
}

binary_tree_t *dequeue(const binary_tree_t **queue, int *second)
{
	(*second)++;
	return (binary_tree_t*)(queue[*second - 1]);
}

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t  *temp;
	int *first;
	int *second;
	const binary_tree_t **queue;

	queue = create_queue(&first, &second);
	temp = tree;

	if (tree == NULL || func == NULL)
		return;

	while (temp != NULL)
	{
		func(tree->n);
		if (temp->left != NULL)
			enqueue(queue, &first, temp->left);
		if (temp->right != NULL)
			enqueue(queue, &first, temp->right);
		temp = dequeue(queue, &second);
	}
}
