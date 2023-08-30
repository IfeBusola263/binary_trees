#include "binary_trees.h"
/**
 * binary_trees_ancestor - The function finds the lowest common ancestor
 * of first and second nodes
 * @first: node to be compare
 * @second: node to be compared
 *
 * Return: pointer to the common ancestor on success, otherwise NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	binary_tree_t *firstNode[50];
	int i, j;

	if (first != NULL && second != NULL)
	{
		i = 0;
		while (first)
		{
			firstNode[i] = (binary_tree_t *)first;
			first = first->parent;
			i++;
		}

		while (second)
		{
			for (j = 0; j < i; j++)
			{
				if (second == firstNode[j])
					return ((binary_tree_t *)second);
			}
			second = second->parent;
		}

		return (NULL);
	}
	return (NULL);
}
