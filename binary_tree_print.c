#include "binary_trees.h"
#include <stdio.h>

void binary_tree_print(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		printf("Parent:(nil)\n");
		printf("Left:(nil)\n");
		printf("Right:(nil)\n");
		printf("(0)\n");
	}
	else
	{
		printf("Parent:%p\n", (void *)tree->parent);
		printf("Left:%p\n", (void *)tree->left);
		printf("Right:%p\n", (void *)tree->right);
		printf("(%d)\n", tree->n);
	}
}
