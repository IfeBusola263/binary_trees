#include "binary_trees.h"

/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Return: valid (1) otherwise (0)
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	return (binary_tree_is_bst_recursive(tree, INT_MIN, INT_MAX));
}

int binary_tree_is_bst_recursive(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);

	if (tree->n <= min || tree->n >= max)
		return (0);

	return (binary_tree_is_bst_recursive(tree->left, min, tree->n) &&
		binary_tree_is_bst_recursive(tree->right, tree->n, max));
}
