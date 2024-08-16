#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer of the parent node of the node to create
 * @value: value of new node
 * Return: new_node, or on failure return NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	/** if allocation failed return NULL */
	if (new_node == NULL)
		return (NULL);

	/** initialize the new node */
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
