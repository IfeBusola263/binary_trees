#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the height
 *
 * Return: success (0)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		size_t left_height = 0;
		size_t right_height = 0;

		if (tree->left != NULL)
		{
			left_height = 1 + binary_tree_height(tree->left);
		}

		if (tree->right != NULL)
		{
			right_height = 1 + binary_tree_height(tree->right);
		}

		if (left_height > right_height)
			return (left_height);
		else
			return (right_height);
	}
	return (0);
}
