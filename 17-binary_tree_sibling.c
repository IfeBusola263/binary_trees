#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of the done
 * @node: node to be checked
 *
 * Return: pointer to the sibling on success, otherwise NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->parent == NULL)
			return (NULL);

		if (node->n == node->parent->left->n)
			return (node->parent->right);
		return (node->parent->left);
	}
	return (NULL);
}
