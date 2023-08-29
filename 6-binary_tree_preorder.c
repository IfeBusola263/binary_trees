#include "binary_trees.h"
/**
 * binary_tree_preorder - moves through a binary tree with preorder
 * @tree: pointer to the tree to be traversed
 * @func: pointer to the function
 *
 * Return: Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
