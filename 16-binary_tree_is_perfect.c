#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree:  pointer to the root node of the tree to check
 *
 * Return: success (0)
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth = 0;

	if (tree == NULL)
		return (0);

	if (binary_tree_is_full(tree) == 0)
		return (0);

	depth = binary_tree_height(tree);

	return (check_perfect_recursive(tree, depth, 0));
}

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

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Return: success (0)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}

/**
 * check_perfect_recursive - helper function to check perfect binary tree
 *
 * @tree: pointer to the current node
 * @depth: expected depth of the tree
 * @level: current level of the node
 *
 * Return: perfect (1) Otherwise (0)
 */
int check_perfect_recursive(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (1);

	if (level == 0)
	{
		if (tree->left == NULL || tree->right == NULL)
			return (0);
	}

	if (level == depth - 1)
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}

	return (check_perfect_recursive(tree->left, depth, level + 1) &&
		check_perfect_recursive(tree->right, depth, level + 1));
}

