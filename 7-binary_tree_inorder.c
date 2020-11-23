#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses the binary tree in order
 * @tree: pointer to the target tree
 * @func: pointer to the function
 *
 * Return: de nada
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;


	binary_tree_inorder(tree->left);
	func(tree->n);
	binary_tree_inorder(tree->right);
}