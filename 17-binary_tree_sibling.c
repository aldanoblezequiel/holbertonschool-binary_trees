#include "binary_trees.h"
/**
 *binary_tree_sibling - finds the bro
 *@node: is a pointe
 *Return: NULL if not exist node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	parent = node->parent;

	if (parent->left && parent->right)
	{
		if (parent->left->n == node->n)
			return (parent->right);
		return (parent->left);
	}
	return (NULL);
}
