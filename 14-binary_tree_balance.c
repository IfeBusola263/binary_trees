#include "binary_trees.h"

/**
 * binary_tree_balance - measures the height of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the height
 *
 * Return: success (0)
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left_height = 0;
		size_t right_height = 0;

		if (tree->left != NULL)
		{
			left_height = 1 + binary_tree_balance(tree->left);
		}

		if (tree->right != NULL)
		{
			right_height = 1 + binary_tree_balance(tree->right);
		}

		return (left_height - right_height);
	}
	return (0);
}
