#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: If no common ancestors return NULL, else return common ancestor.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *p, *q;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	p = first->parent, q = second->parent;
	if (first == q || !p || (!p->parent && q))
		return (binary_trees_ancestor(first, q));
	else if (p == second || !q || (!q->parent && p))
		return (binary_trees_ancestor(p, second));
	return (binary_trees_ancestor(p, q));
}
