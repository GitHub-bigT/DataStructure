#include <iostream>

struct Node
{
	char data;
	Node *left, *right;
};

int dataIndex;
Node* createBinaryTree(char *data)
{
	dataIndex++;
	Node *t = new Node;
	t->data = data[dataIndex - 1];
	if (data[dataIndex - 1] == NULL)
	{
		return NULL;
	}
	t->left = createBinaryTree(data);
	t->right = createBinaryTree(data);
	return t;
}

int main(int argc, char** argv)
{
	char data[15] = {1, 2, 3, NULL, NULL, 4, NULL, NULL, 5, 6, NULL, NULL, 7, NULL, NULL};
	Node* tree = createBinaryTree(data);
	return getchar();
}