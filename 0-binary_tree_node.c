#include "binary_trees.h"
/**
 * binary_tree_node - The Function creates a node
 * @parent: pointer to the parent node of the created node
 * @value: value of the new node
 *
 * Return: pointer to the new node on success and NULL otherwise
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
