#include "binary_trees.h"

/**
 *binary_tree_insert_right - Creates a node as the right-child
 *@parent: ptr to the parent node
 *@value: Value to put in the new node
 *Return: ptr to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp = NULL;

	if (parent == NULL)
		return (NULL);

	tmp = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (!value)
		return (NULL);

	if (tmp == NULL)
		return (NULL);

	tmp->n = value;
	tmp->left = NULL;
	tmp->right = NULL;
	tmp->parent = NULL;

	if (parent->right != NULL)
	{
		tmp->right = parent->right;
		parent->right->parent = tmp;
		parent->right = tmp;
		tmp->parent = parent;
	}
	else
	{
		tmp->parent = parent;
		parent->right = tmp;
	}
	return (tmp);
}
