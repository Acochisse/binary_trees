#include "binary_trees.h"
/**
 * binary_tree_depth - checks a binary tree for its depth from node
 * @tree: target tree
 *
 *
 *
 * Return: height of tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		return (0);

	while (tree->parent)
	{
		tree = tree->parent;
		depth++;
	}
	
	return (depth);
}
