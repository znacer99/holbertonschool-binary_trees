#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
* binary_tree_balance - measures the balance of a tree
* factor of a binary tree
* @tree: data
*
* Return: the balance factor
*/

int binary_tree_balance(const binary_tree_t *tree)
{

int height_left = 0, height_right = 0;

if (tree == NULL)
return (0);

if (tree->left)
{
height_left = binary_tree_height(tree->left);
height_left++;
}
if (tree->right)
{
height_right = binary_tree_height(tree->right);
height_right++;
}
return (height_left - height_right);
}
