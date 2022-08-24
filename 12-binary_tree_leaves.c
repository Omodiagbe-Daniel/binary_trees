#include "binary_trees.h"

/**
* binary_tree_leaves - count number of leaves in binary tree
* @tree: pointer to the root node
* Return: height or 0
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else
	{
		return (binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right));
	}
	return (0);
}

