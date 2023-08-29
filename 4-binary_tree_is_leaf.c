#include "binary_trees.h"
/**
 * binary_tree_is_leaf - the function checks if a node is a leaf node
 * @node: node to be checked
 *
 * Return: 1 if node is a leaf node, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->left != NULL || node->right != NULL)
			return (0);
		return (1);
	}
	return (0);
}
