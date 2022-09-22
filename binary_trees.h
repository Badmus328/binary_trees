#ifndef BINARY_TREES_H
#define BINARY_TREES_H
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct binary_tree_s - Represents a binary tree node.
 * @n: Integer stored in the node.
 * @parent: Pointer to the parent node.
 * @left: Pointer to the left child node.
 * @right: Pointer to the right child node.
 */

struct binary_tree_s
{
	/* Integer stored in the node. */
	int n;
	/* Pointer to the parent node. */
	struct binary_tree_s *parent;
	/* Pointer to the left child node. */
	struct binary_tree_s *left;
	/* Pointer to the right child node. */
	struct binary_tree_s *right;
};


typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;
void binary_tree_print(const binary_tree_t *);

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

#endif
