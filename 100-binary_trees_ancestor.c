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

	if (first != NULL && second != NULL)
	{
		/**
		 * Traversing with inorder, meaning search left side
		 * and then the right side next
		 */
		if (first->parent == NULL)
			return ((binary_tree_t *)first);
		if (second->parent == NULL)
			return ((binary_tree_t *)second);
		if (first->parent && first->parent->n == second->n)
			return ((binary_tree_t *)second);
		if (second->parent && second->parent->n == first->n)
			return ((binary_tree_t *)first);
		/* if (first-parent->n == second->parent->n) */
		/*return (first-parent); */
		return (binary_trees_ancestor(first->parent, second->parent));
	}
	return (NULL);
}
