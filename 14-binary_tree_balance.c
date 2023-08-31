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
		else if (right_height > left_height)
			return (right_height);
		else
			return (1);
	}
	return (0);
}

/**
 * binary_tree_balance - measures the height of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the height
 *
 * Return: success (0)
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree)
	{
		if (!tree->left && !tree->right)
			return (0);

		left_height = 0;
		right_height = 0;
		/* if (tree->left != NULL) */
		/* { */
		/* left_height = 1 + binary_tree_balance(tree->left); */
		/* } */

		/* if (tree->right != NULL) */
		/* { */
		/* right_height = 1 + binary_tree_balance(tree->right); */
		/* } */
		left_height = binary_tree_height(tree->left);
		right_height = binary_tree_height(tree->right);

		return (left_height - right_height);
	}
	return (0);
}
