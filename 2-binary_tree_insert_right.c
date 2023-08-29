#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node in the right child
 * @parent: pointer to the node to insert the right-child
 * @value: value of the new node
 *
 * Return: pointer to the new node on success, otherwise NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;
	binary_tree_t *temp;

	if (parent != NULL)
	{
		newNode = NULL;
		newNode = binary_tree_node(newNode, value);
		if (newNode == NULL)
			return (NULL);
		newNode->parent = parent;

		if (parent->right == NULL)
		{
			parent->right = newNode;
			return (newNode);
		}
		temp = parent->right;
		newNode->right = temp;
		parent->right = newNode;
		temp->parent = newNode;
		temp = NULL;
		return (newNode);
	}
	return (NULL);
}
