#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: pointer to the node to find sibling
 *
 * Return: If node NULL or parents NULL return NULL and No sibling return NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->right != NULL && node->parent->left != NULL)
		if (node->parent->right == node)
			return (node->parent->left);
	if (node->parent->left == node)
		return (node->parent->right);
}
