#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes a binary tree.
 * @tree: A pointer to the root node of the tree to delete.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		// Delete the left subtree recursively
		binary_tree_delete(tree->left);

		// Delete the right subtree recursively
		binary_tree_delete(tree->right);

		// Free the memory allocated for the current node
		free(tree);
	}
}
