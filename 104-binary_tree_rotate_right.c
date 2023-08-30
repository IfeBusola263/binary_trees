#include "binary_trees.h"
/**
 * binary_tree_rotate_right - rotates a binary tree to the right
 * @tree: pointer to the tree to be rotated
 *
 * Return: pointer to the new root
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp;

	if (tree != NULL)
	{
		if (tree->left)
		{
			temp = tree->left->right;
			tree->parent = tree->left;
			tree->left->parent = NULL;
			tree->left = temp;
			if (tree->left)
				tree->left->parent = tree;
			tree->parent->right = tree;
		}
		return (tree->parent);
	}
	return (NULL);
}
