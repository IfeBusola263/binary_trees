#include "binary_trees.h"
/**
 * binary_tree_is_heap - the function checks if a binary treee is a Max heap
 * @tree: pointer to the root of the tree
 *
 * Return: 1 on sucess, otherwise 0
 */
int binary_tree_is_heap(const binary_tree_t *tree)
{
	int lsubTree;
	int rsubTree;

	if (tree != NULL)
	{
		lsubTree = 0;
		rsubTree = 0;

		if (!tree->left && !tree->right) /* node without child */
			return (1);
		if (!tree->left && tree->right) /* Incomplete node */
			return (0);
		if (tree->right) /* Complete Node with right child */
			if (tree->n > tree->left->n && tree->n > tree->right->n)
			{
				lsubTree = binary_tree_is_heap(tree->left);
				rsubTree = binary_tree_is_heap(tree->right);
			}
			else
				return (0);
		else /* Complete Node without right child */
			if (tree->n > tree->left->n)
				lsubTree = binary_tree_is_heap(tree->left);
			else
				return (0);

		if (lsubTree == 0 || rsubTree == 0)
			return (0);
		else
			return (lsubTree);
	}
	return (0);
}
