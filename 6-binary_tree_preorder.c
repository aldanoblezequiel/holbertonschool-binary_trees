#include "binary_trees.h"
/**
 * binary_tree_preorder - function to traverse
 * a binary tree using traversal
 *@tree: ptr to the root node of the tree
 *@func: ptr to a function to call for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		func(tree->n);
		if (tree->left)
			binary_tree_preorder(tree->left, func);
		if (tree->right)
			binary_tree_preorder(tree->right, func);
	}
}
