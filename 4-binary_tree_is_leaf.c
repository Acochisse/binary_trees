#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function checks if node is leaf
 * @node: node to be checked
 *
 *
 * Return: return 1 on leaf, 0 on branch or parent
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right == NULL || node->left == NULL)
		return (1);

	else
		return (0);
}
