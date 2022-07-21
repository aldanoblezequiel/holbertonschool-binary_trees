#include "binary_trees.h"
/**
 *binary_tree_is_perfect - cecks if a binary tree is perfect
 *@tree: ptr
 *Return: 1 else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_is_full(tree) == 1 &&
				(binary_tree_size(tree->left) == binary_tree_size(tree->right)))
		return (1);

	return (0);
}
/**
 *binary_tree_is_full - checks if a binary tree is full
 *@tree: is ode of the tree to check
 *Return: 1 else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}
/**
 *binary_tree_size - function tree
 *@tree: is a poi
 *Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
