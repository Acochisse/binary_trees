#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that adds a new node on the left child branch
 * @parent: pointer to the parent
 * @value: n for the new node
 *
 *
 * Return: pointer to new node or NULL on fail
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	if (parent->left == NULL)
		parent->left = new;

	else
	{
		new->left = parent->left;
		parent->left->parent = new;
		parent->left = new;
	}
	return (new);
}
