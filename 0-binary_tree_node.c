#include "binary_trees.h"

/**
 * binary_tree_node - makes binary tree
 *@parent: pointer to the parent node
 *@value: is the value of newnode
 *Return: poiter to the newnode
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp = NULL;

	tmp = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (!value)
		return (NULL);

	if (tmp == NULL)
		return (NULL);

	tmp->n = value;
	tmp->left = NULL;
	tmp->right = NULL;
	tmp->parent = NULL;

	if (parent == NULL)
	{
		parent = tmp;
		return (parent);
	}
	else
	{
		tmp->parent = parent;
		return (tmp);
	}
}
