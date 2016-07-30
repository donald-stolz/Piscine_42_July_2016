#include "ft_btree.h"
#include <unistd.h>
#include <stdio.h>
void	btree_apply_infix(t_btree *root, void (*applyf)(void *));
t_btree		*btree_create_node(void *item);
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(void *str)
{
	printf("%s\n", (char *)str);
}
int main(void)
{
	t_btree *node;
	char data[] = "1 ";
	char data2[] = "2 ";
	char data3[] = "3 ";
	char data4[] = "4 ";
	char data5[] = "5 ";
	node = btree_create_node(data);
	node->right = btree_create_node(data2);
	node->right->left = btree_create_node(data3);
	node->right->right = btree_create_node(data4);
	node->left = btree_create_node(data5);
	btree_apply_infix(node, &ft_putstr);
}