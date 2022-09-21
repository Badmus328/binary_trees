#include "binary_trees.h"

/**
 * binary_tree_height - measures height of binary tree.
 * @tree: pointer to the root of the tree.
 * Return: 0 if @tree is NULL;
 * otherwise, the height of @tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	binary_tree_t *left, *right;
	size_t left_height, right_height, max_height;

  	if (tree == NULL)
		return (0);
	left = tree->left;
	right = tree->right;
	if (left == NULL && right == NULL)
		return (0);
	left_height = binary_tree_height(left);
	right_height = binary_tree_height(right);
	max_height = (left_height >= right_height) ? left_height : right_height;

	return (1 + max_height);
}
