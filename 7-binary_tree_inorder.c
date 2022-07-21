#include "binary_trees.h"
/**
 * binary_tree_inorder - traverse
 *a binary tree using traversal
 *@tree: ptr to the root node of the tree
 *@func: ptr to a function to call for the nodes
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		if (tree->left)
			binary_tree_inorder(tree->left, func);
		func(tree->n);
		if (tree->right)
			binary_tree_inorder(tree->right, func);
	}
}
