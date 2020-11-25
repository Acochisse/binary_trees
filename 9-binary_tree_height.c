#include "binary_trees.h"
/**
 * binary_tree_height - checks a binary tree for its node height
 * @tree: target tree
 *
 *
 *
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (0);
	left_h = binary_tree_height(tree->left);
	left_h++;

	right_h = binary_tree_height(tree->right);
	right_h++;

	if (left_h >= right_h)
		return (left_h);

	else
		return (right_h);
}
