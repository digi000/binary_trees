#include "binary_trees.h"
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *parenti;

	parenti = malloc(sizeof(binary_tree_t));
	if (!parenti)
		return NULL;
	parenti->n = value;
	parenti->left = NULL;
	parenti->right = NULL;
	parenti->parent = parent;
	return parenti;
}
