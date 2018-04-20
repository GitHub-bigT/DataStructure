#pragma once
#include <iostream>

using namespace std;

struct Node
{
	char data;
	Node *left, *right;
};

class BinTree
{
public:
	BinTree();
	~BinTree();

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

private:
	int dataIndex;
};

BinTree::BinTree()
{
	dataIndex = 0;
}

BinTree::~BinTree()
{
	cout << "aaaa";
}