#include "binary_trees.h"

/**
* binary_tree_depth2 - measures depth of binary tree
* @tree: pointer to the root node
* Return: height or 0
*/

size_t binary_tree_depth2(const binary_tree_t *tree)
{
	int depth = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->parent != NULL)
	{
		depth += binary_tree_depth2(tree->parent);
	}
	return (depth + 1);
}
/**
 * binary_tree_depth - measures the depth of a binary tree
 *
 *@tree: pointer to tree
 *
 *Return: height
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return ((binary_tree_depth2(tree)) - 1);
}
