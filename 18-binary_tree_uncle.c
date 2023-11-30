#include "binary_trees.h"
#include "binary_tree_sibling.c"

/**
 * binary_tree_uncle - function that finds the sibling of a node
 * @node: pointer to the node to find uncle
 *
 * Return: If node NULL  and No uncle return NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
			node->parent->parent == NULL)
		return (NULL);
	if (node->parent)
		return (binary_tree_sibling(node->parent));
}
