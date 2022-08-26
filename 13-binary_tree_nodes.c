#include "binary_trees.h"

/**
* binary_tree_nodes - count number of nodes in binary tree
* @tree: pointer to the root node
* Return: height or 0
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int nodes = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL || tree->right != NULL)
	{
		nodes = binary_tree_nodes(tree->left) +
		1 + binary_tree_nodes(tree->right);
	}
	return (nodes);
}

