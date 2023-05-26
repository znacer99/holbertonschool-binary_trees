#include "binary_trees.h"
#include "17-binary_tree_sibling.c"

/**
* binary_tree_uncle - finds the uncle of a node
* @node: node to checks if the node have uncle
*
* Return: uncle node
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
binary_tree_t *uncle = NULL;

if (node == NULL)
return (NULL);

if (node->parent == NULL)
return (NULL);

uncle = binary_tree_sibling(node->parent);
return (uncle);
}
