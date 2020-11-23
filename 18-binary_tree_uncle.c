#include "binary_trees.h"
#include "17-binary_tree_sibling.c"
/**
 * binary_tree_uncle - returns the uncle of node
 * @node: target node
 *
 * Return: pointer to uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if(!node || !node->parent)
		return (0);

	return (binary_tree_sibling(node->parent));
}
