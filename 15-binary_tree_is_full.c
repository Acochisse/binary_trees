#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if tree is full
 * @tree: target tree
 *
 * Return: if tree is NULL, 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_b, right_b;

	if (!tree)
		return (0);

	if (!tree->left || !tree->right)
		return (1);

	if (tree->left || tree->right)
	{
		left_b = binary_tree_is_full(tree->left);
		right_b = binary_tree_is_full(tree->right);

		if (left_b && right_b)
			return (1);
	}
	return (0);
}
