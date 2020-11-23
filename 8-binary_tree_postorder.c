#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses the binary tree in order
 * @tree: pointer to the target tree
 * @func: pointer to the function
 *
 * Return: de nada
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;


	binary_tree_postorder(tree->left);
	binary_tree_postorder(tree->right);
	func(tree->n);

}
