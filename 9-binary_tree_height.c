#include "binary_trees.h"

/**
* binary_tree_height2 - measures height of binary tree
* @tree: pointer to the root node
* Return: height or 0
*/

size_t binary_tree_height2(const binary_tree_t *tree)
{
	int height = 0;
	int height2 = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL)
	{
		height += binary_tree_height2(tree->left);
	}
	if (tree->right != NULL)
	{
		height2 += binary_tree_height2(tree->right);
	}
	if (height > height2)
	{
		return (height + 1);
	}
	else
	{
		return (height2 + 1);
	}
	return (0);
}

/**
 * binary_tree_height - measures the height of a binary tree
 *
 *@tree: pointer to tree
 *
 *Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return ((binary_tree_height2(tree)) - 1);
}
