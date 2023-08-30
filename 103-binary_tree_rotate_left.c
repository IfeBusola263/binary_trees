#include "binary_trees.h"
/**
 * binary_tree_rotate_left - rotates a binary tree to the left
 * @tree: pointer to the tree to be rotated
 *
 * Return: pointer to the new root
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *temp;

	if (tree != NULL)
	{
		if (tree->right)
		{
			temp = tree->right->left;
			tree->parent = tree->right;
			tree->right->parent = NULL;
			tree->right->left = tree;
			tree->right = temp;
		}
		return (tree->parent);
	}
	return (NULL);
}
