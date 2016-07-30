
#include "ft_btree.h"
#include <stdio.h>
t_btree *btree_create_node(void *item);

int main(void)
{
	t_btree *node;
	char data[] = "hello its data\n";
	node = btree_create_node(item);
	printf("%s\n", (char *)node->item);
}
