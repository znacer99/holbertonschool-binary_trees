#include "bianry_trees.h"

/**
* bianry_tree_sibling - finds the sibling of a node
* @node: node to check if it is a sibling
*
* Return: the sibling node
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
binary_tree_t *sibling = NULL;

if (node == NULL)
return (NULL);

if (node->parent == NULL)
return (NULL);

sibling = node;
node = node->parent;

if (node->right && node->left)
{
if (node->right == sibling)
return (node->left);
return (node->right);
}
return (NULL);
}
