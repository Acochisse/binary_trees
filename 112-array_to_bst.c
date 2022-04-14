#include "binary_trees.h"
/**
 * array_to_bst - creates a binary search tree from an array
 * @array: array to create tree from
 * @size: size of array
 * Return: pointer to the root node of the tree
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root = NULL;
	size_t counter;

	for (counter = 0; counter < size; counter++)
		bst_insert(&root, array[counter]);

	return (root);
}