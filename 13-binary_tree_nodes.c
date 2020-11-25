#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least one child in a tree
 * @tree: target tree
 *
 *
 * Return: if tree, the function returns 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes, right_nodes, total = 0;

	if (!tree || (!tree->right && !tree->left))
	    return (0);

	if (tree->left || tree->right)
	{
		left_nodes = binary_tree_nodes(tree->left) + 1;
		right_nodes = binary_tree_nodes(tree->right) + 1;
		total = left_nodes + right_nodes - 1;
	}

	return (total);
}
