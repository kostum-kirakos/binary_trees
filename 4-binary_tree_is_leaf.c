#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node to check
 *
<<<<<<< HEAD
 * Return: 1 if node is a leaf, 0 otherwise
=======
 * Return: 1 if node is a leaf, otherwise 0
 * If node is NULL, return 0
>>>>>>> f19638a4a8ee057931c7215b450ca091f155583b
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
<<<<<<< HEAD
    if (node == NULL)
        return 0;
    if (node->left == NULL && node->right == NULL)
        return 1;
    return 0;
=======
	if (node == NULL)
		return (0);

	if ((node->left == NULL) && (node->right == NULL))
		return (1);

	return (0);
>>>>>>> f19638a4a8ee057931c7215b450ca091f155583b
}
