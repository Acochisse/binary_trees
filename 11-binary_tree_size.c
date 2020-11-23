#include "binary_trees.h"

/**
 * binary_tree_size - function that returns the size of the tree
 * @tree: pointer to target tree
 *
 *
 * Return: if tree is NULL, 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_t, right_t, sum;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	left_t = binary_tree_size(tree->left);
	left_t++;

	right_t = binary_tree_size(tree->right);
	right_t++;

	sum = left_t + right_t - 1;
	return (sum);
}
