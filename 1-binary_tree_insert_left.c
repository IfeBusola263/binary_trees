#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node in the left child of a node
 * @parent: pointer to the parent node of node to be left inserted
 * @value: value to be stored in the new node
 *
 * Return: pointer to the new node on success otherwise NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

		if (parent->left == NULL)
		{
			parent->left = newNode;
			return (newNode);
		}
		temp = parent->left;
		parent->left = newNode;
		temp->parent = newNode;
		temp->left = NULL;
		temp->right = NULL;
		newNode->left = temp;
		temp = NULL;

		return (newNode);
	}
	return (NULL);
}
