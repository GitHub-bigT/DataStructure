#include "BinTree.h"

int main(int argc, char** argv)
{
	char data[15] = {1, 2, 3, NULL, NULL, 4, NULL, NULL, 5, 6, NULL, NULL, 7, NULL, NULL};
	BinTree bt;
	bt.createBinaryTree(data);
	return getchar();
}