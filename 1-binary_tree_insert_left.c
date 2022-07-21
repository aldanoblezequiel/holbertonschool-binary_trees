#include "binary_trees.h"

/**
 *binary_tree_insert_left - Creates a node as the left-child
 *@parent: ptr to the parent node
 *@value: Value to put in the new node
 *Return: ptr to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp = NULL;

	if (parent == NULL)
		return (NULL);

	tmp = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (tmp == NULL)
		return (NULL);

	tmp->n = value;
	tmp->left = NULL;
	tmp->right = NULL;
	tmp->parent = NULL;

	if (parent->left != NULL)
	{
		tmp->left = parent->left;
		parent->left->parent = tmp;
		parent->left = tmp;
		tmp->parent = parent;
	}
	else
	{
		tmp->parent = parent;
		parent->left = tmp;
	}
	return (tmp);
}
