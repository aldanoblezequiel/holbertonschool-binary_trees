#include "binary_trees.h"
/**
 * binary_tree_leaves - Calculates the leaves in the tree
 *@tree: ptr to the root to count leaves
 *Return: tree leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_l = 0;
	size_t leaves_r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	leaves_l += binary_tree_leaves(tree->left);
	leaves_r += binary_tree_leaves(tree->right);
	return (leaves_l + leaves_r);
}
