#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf of a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: If the node is a leaf - 1.
 *         Otherwise - 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	 // If node is NULL, return 0
	if (node == NULL)
       	{
            return 0;
        }

        // Check if the node has no left and right children
        if (node->left == NULL && node->right == NULL)
       	{
            return 1; // Node is a leaf
        } else {
            return 0; // Node is not a leaf
        }
}
