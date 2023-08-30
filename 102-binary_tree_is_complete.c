#include "binary_trees.h"
/**
 * binary_tree_is_complete - measures the completeness of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 *
 * Return: success (0)
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	binary_tree_t *queue[100];
	int i = 0, j = 1, k = 0;

	if (tree == NULL)
		return (0);

	for (i = 0; i < 100; i++)
		queue[i] = NULL;
	i = 0;

	queue[0] = (binary_tree_t *)tree;
	while (queue[i])
	{
		if (!queue[i]->left && queue[i]->right)
			return (0);
		if (queue[i]->left != NULL)
			queue[j++] = queue[i]->left;
		if (queue[i]->right != NULL)
			queue[j++] = queue[i]->right;
		else if (queue[i]->left && !queue[i]->right)
			k++;

		i++;
	}

	return ((k >= 2) ? (0) : (1));
}
