#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_size - Measures size of a binary tree
 * @tree: Pointer to root node of tree to measure size
 *
 * Return: Size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t size = 0;
    const binary_tree_t *current;
    binary_tree_t **stack;
    size_t stack_size = 0, stack_capacity = 1024;

    if (tree == NULL)
        return (0);

    stack = malloc(stack_capacity * sizeof(*stack));
    if (stack == NULL)
        return (0);

    stack[stack_size++] = (binary_tree_t *)tree;

    while (stack_size > 0)
    {
        current = stack[--stack_size];
        size++;

        if (current->right != NULL)
        {
            if (stack_size == stack_capacity)
            {
                stack_capacity *= 2;
                stack = realloc(stack, stack_capacity * sizeof(*stack));
                if (stack == NULL)
                    return (0);
            }
            stack[stack_size++] = current->right;
        }

        if (current->left != NULL)
        {
            if (stack_size == stack_capacity)
            {
                stack_capacity *= 2;
                stack = realloc(stack, stack_capacity * sizeof(*stack));
                if (stack == NULL)
                    return (0);
            }
            stack[stack_size++] = current->left;
        }
    }

    free(stack);
    return (size);
}
