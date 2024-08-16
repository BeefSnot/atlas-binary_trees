#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverse a binary tree using in-order
 * traversal
 * @tree: Pointer to root node of tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* traverse left subtree */
	binary_tree_inorder(tree->left, func);

	/* visit the root */
	func(tree->n);

	/* traverse right subtree */
	binary_tree_inorder(tree->right, func);
}
