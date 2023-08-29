#include "binary_trees.h"
/**
 * binary_tree_is_root - The function checks if the node is a root node
 * @node: node to be checked
 *
 * Return: 1 if node is a left node and 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->parent != NULL)
			return (0);
		return (1);
	}
	return (0);
}
