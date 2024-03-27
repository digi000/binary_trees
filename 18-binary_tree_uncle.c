#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Pointer to the node to find the sibling
 *
 * Return: Pointer to the sibling node, or NULL if no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL)
        return (NULL);

    /* If the node is the left child, return the right child of the parent */
    if (node->parent->left == node)
        return (node->parent->right);

    /* If the node is the right child, return the left child of the parent */
    if (node->parent->right == node)
        return (node->parent->left);

    return (NULL); /* No sibling found */
}

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node, or NULL if no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
        return (NULL);

    /* Return the sibling of the parent if it's not NULL */
    return (binary_tree_sibling(node->parent));
}
