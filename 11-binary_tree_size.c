#include "binary_trees.h"

/**
* binary_tree_size2 - measures size of binary tree
* @tree: pointer to the root node
* Return: height or 0
*/

size_t binary_tree_size2(const binary_tree_t *tree)
{
	int size = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL)
	{
		size += binary_tree_size2(tree->left);
	}
	if (tree->right != NULL)
	{
		size += binary_tree_size2(tree->right);
	}
	return (size + 1);
}
/**
 * binary_tree_size - measures the size of a binary tree
 *
 *@tree: pointer to tree
 *
 *Return: height
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return ((binary_tree_size2(tree)));
}
