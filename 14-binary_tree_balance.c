#include "binary_trees.h"

/**
 * binary_tree_balance - measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 *
 * Return: success (0)
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree)
	{
		left_height = 0;
		right_height = 0;
		if (tree->left != NULL)
		{
			left_height = 1 + binary_tree_balance(tree->left);
		}

		if (tree->right != NULL)
		{
			right_height = 1 + binary_tree_balance(tree->right);
		}
		/* left_height = binary_tree_height(tree->left); */
		/* right_height = binary_tree_height(tree->right); */

		return (left_height - right_height);
	}
	return (0);
}
