#include "binary_trees.h"

void intr(binary_tree_t *tree);
void binary_tree_delete(binary_tree_t *tree)
{

	if (tree)
	{
		intr(tree);
	}
}

void intr(binary_tree_t *root)
{
	if (root == NULL) return;
	intr(root->left);
	free(root->left);
	intr(root->right);
}