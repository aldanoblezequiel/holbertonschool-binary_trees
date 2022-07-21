#include "binary_trees.h"
/**
 * binary_tree_postorder - traverse
 * a binary tree using traversal
 *@tree: ptr to the root traverse.
 *@func: ptr to a function that call for the nodes.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		if (tree->left)
			binary_tree_postorder(tree->left, func);
		if (tree->right)
			binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
