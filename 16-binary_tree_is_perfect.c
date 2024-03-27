#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int left_height = 0, right_height = 0;

    if (tree == NULL)
        return (0);

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    /* Check if the tree is balanced and left and right subtrees are perfect */
    if (left_height == right_height &&
        binary_tree_is_full(tree->left) &&
        binary_tree_is_full(tree->right))
    {
        return (1);
    }

    return (0);
}
