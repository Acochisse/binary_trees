#include "binary_trees.h"

/**
 * binary_tree_is_perfect - binary tree is perfect
 * @tree: target tree
 *
 * Return: If tree is NULL, 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_is_full(tree) && binary_tree_balance(tree) == 0)
		return (1);
	return (0);
}
