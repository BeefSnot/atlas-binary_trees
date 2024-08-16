#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node as the right child of another node
 * @parent: pointer to the node to insert the right child in
 * @value: value to store in the new node
 * Return: pointer to new_node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if (parent == NULL)
        return (NULL);

    /* create the new node */
    new_node = binary_tree_node(parent, value);
    if (new_node == NULL)
        return (NULL);

    /* check if parent already has right child */
    if (parent->right != NULL)
    {
        /* make existing right child the right child of the node */
        new_node->right = parent->right;
        new_node->right->parent = new_node;
    }

    /* set new node as the right child of the parent */
    parent->right = new_node;

    return (new_node);
}
