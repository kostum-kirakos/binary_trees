#include "binary_trees.h"

int binary_tree_is_full(const binary_tree_t *tree)
{
  /**
   * if (!tree)
   * {return (0); }
   *
   * if (tree->left && tree->right)
   * {
   *	return (binary_tree_is_full(tree->left) &&
   * binary_tree_is_full(tree->right));
   */

  if (tree == NULL)
  {return (0); }

  if (!tree->right && !tree->left)
  {return (1); }

  if (tree->left && tree->right)
  {
    return (binary_tree_is_full(tree->left) &&
     binary_tree_is_full(tree->right));
  }
  return (0);
}

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: Point to a root
 * Return: height of a tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
  size_t count_1 = 0, count_2 = 0;

  if (tree != NULL)
  {
    if (tree == NULL)
    {return (0); }

    count_1 = tree->left ? 1 + binary_tree_height(tree->left) : 0;
    count_2 = tree->right ? 1 + binary_tree_height(tree->right) : 0;

    if (count_1 > count_2)
    {return (count_1); }
    else
    {return (count_2); }

  }
  return (0);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Point to a root
 * Return: height of a tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
  int count_1 = 0, count_2 = 0;

  if (tree != NULL)
  {
    if (tree == NULL)
    {return (0); }

    count_1 = tree->left ? 1 + binary_tree_height(tree->left) : 0;
    count_2 = tree->right ? 1 + binary_tree_height(tree->right) : 0;

    return (count_1 - count_2);

  }
  return (0);
}

/**
 * binary_tree_is_perfect - function that check if is perfect binary tree
 * @tree: Point to a root
 * Return: 1 if is perfect, otherwise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
  if (tree == NULL)
    return (0);
  if (binary_tree_balance(tree) == 0 && binary_tree_is_full(tree) == 1)
    return (1);
  return (0);
}
