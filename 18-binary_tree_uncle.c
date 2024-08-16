#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds uncle of a node
 * @node: Pointer to the node whose uncle is to be found
 *
 * Description: Function finds the uncle of the given node by first
 * determining the parent of the node and then finding the sibling
 * of the parent
 *
 * Return: Pointer to the uncle node, or NULL if no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    binary_tree_t *parent, *grandparent;

    if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
        return (NULL);

    parent = node->parent;
    grandparent = parent->parent;

    /* check if node's parent is a left or right child */
    if (parent == grandparent->left)
        return (grandparent->right);
    else
        return (grandparent->left);
}
