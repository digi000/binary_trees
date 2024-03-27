#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if the tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    /* If both left and right children are NULL, it's a leaf */
    if (tree->left == NULL && tree->right == NULL)
        return (1);

    /* If both left and right children are not NULL, it's full */
    if (tree->left && tree->right)
        return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

    /* If one child is NULL and the other is not, it's not full */
    return (0);
}
