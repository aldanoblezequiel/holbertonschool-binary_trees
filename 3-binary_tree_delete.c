#include "binary_trees.h"
/**
 * binary_tree_delete - deletes the tree
 *@tree: ptr to the root node
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if (tree->left != NULL)
		{
			binary_tree_delete(tree->left);
		}
		if (tree->right != NULL)
		{
			binary_tree_delete(tree->right);
		}
		free(tree);
	}
}
