#include "binary_trees.h"

/**
 * binary_tree_leaves - returns the count of leaves in a tree
 * @tree: target tree
 *
 *
 * Return: if tree is NULL, 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_t, right_t, sum_l;

	if (tree == NULL)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	left_t = binary_tree_leaves(tree->left);
	right_t = binary_tree_leaves(tree->right);
	sum_l = left_t + right_t;

	return (sum_l);
}
