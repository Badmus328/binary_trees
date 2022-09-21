#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a nodeis a leaf.
 * @node: pointer to the node to check.
 * Return: 1 if the node is a leaf;
 * otherwise 0.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	return (node->parent == NULL);
}
