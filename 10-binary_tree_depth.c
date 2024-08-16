#include "binary_trees.h"

/**
 * binary_tree_depth - Measure depth of a node in a binary tree
 * @tree: Pointer to node to measure the depth
 *
 * Return: Depth of the node in the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t depth = 0;

    if (tree == NULL)
        return (0);

    /* traverse up tree to root, counting edges */
    for (; tree->parent != NULL; depth++)
    {
        tree = tree->parent;
    }

    return (depth);
}
