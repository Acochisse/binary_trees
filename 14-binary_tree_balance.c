#include "binary_trees.h"

/**
 * binary_tree_balance - measures the height of both branches
 * @tree: target tree
 *
 *
 * Return: if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)

{
	int left_t, right_t, balance;

	if (tree == NULL)
	        return (0);

	left_t = binary_tree_height(tree->left);
	right_t = binary_tree_height(tree->right);
	balance = left_t + right_t;

	return (balance);
}

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
