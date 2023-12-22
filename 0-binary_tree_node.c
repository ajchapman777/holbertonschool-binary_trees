#include "bainry_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: A pointer to a parent of the node to create
 * @value: the value to put in the new node
 * Return: if error returns NULL, 
 * otherwise a pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_trees_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new-> = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
