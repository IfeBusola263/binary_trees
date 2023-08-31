#include "binary_trees.h"

/**
 * binary_tree_is_avl - checks if a binary tree is a valid AVL Tree
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Return: valid (1) otherwise (0)
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (height_and_is_avl(tree, INT_MIN, INT_MAX) != -1);
}

/**
 * height_and_is_avl - check the binary tree avl height
 *
 * @tree: pointer to the root of the tree height
 * @min: minimum node of the tree
 * @max: maximum node of the tree
 *
 * Return: succcess (0)
 */
ssize_t height_and_is_avl(const binary_tree_t *tree, int min, int max)
{
	ssize_t left_height, right_height, height_diff;

	if (tree)
	{
		if (tree->n < min || tree->n > max)
			return (-1);

		left_height = height_and_is_avl(tree->left, min, tree->n - 1);
		if (left_height == -1)
			return (-1);

		right_height = height_and_is_avl(tree->right, tree->n + 1, max);
		if (right_height == -1)
			return (-1);

		height_diff = left_height - right_height;
		if (height_diff < -1 || height_diff > 1)
			return (-1);

		return (left_height > right_height ? left_height + 1 : right_height + 1);
	}
	return (0);
}
