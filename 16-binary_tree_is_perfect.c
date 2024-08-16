#include "binary_trees.h"

/**
 * depth - Measures depth of a given node
 * @node: Pointer to the node to measure depth
 *
 * Return: Depth of the node
 */
size_t depth(const binary_tree_t *node)
{
    if (node == NULL)
        return (0);

    return (1 + depth(node->left));
}

/**
 * is_perfect_recursive - Checks if a binary tree is perfectly recursive
 * @tree: Pointer to root node of the tree
 * @d: Depth of left most leaf
 * @level: Current level in the tree
 *
 * Return: 1 if tree is perfect, 0 otherwise
 */
int is_perfect_recursive(const binary_tree_t *tree, size_t d, size_t level)
{
    if (tree == NULL)
        return (1);

    if (tree->left == NULL && tree->right == NULL)
        return (d == level + 1);

    if (tree->left == NULL || tree->right == NULL)
        return (0);

    return (is_perfect_recursive(tree->left, d, level + 1) &&
        is_perfect_recursive(tree->right, d, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to root node of the tree to check
 *
 * Return: 1 if tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t d;

    if (tree == NULL)
        return (0);

    d = depth(tree);
    return (is_perfect_recursive(tree, d, 0));
}
