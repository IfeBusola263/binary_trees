#include "binary_trees.h"
/**
 * binary_tree_levelorder - function traverses tree by level order
 * @tree: root of the tree
 * @func: pointer to the function which access each node
 *
 * Return: Nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *queue[100];
	int i, j;

	if (tree == NULL || func == NULL)
		return;

	for (i = 0; i < 100; i++)
		queue[i] = NULL;

	queue[0] = (binary_tree_t *)tree;
	i = 0;
	j = 1;
	while (queue[i])
	{
		func(queue[i]->n);
		if (queue[i]->left != NULL)
			queue[j++] = queue[i]->left;
		if (queue[i]->right != NULL)
			queue[j++] = queue[i]->right;
		i++;
	}

}
