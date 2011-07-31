#include "BinaryTree.h"
#include <iostream>
using std::cout;
using std::endl;

BinaryTree::BinaryTree()
{
	rootNode = NULL;
}

void BinaryTree::inorderTreeWalk(BinaryTreeNode* x)
{
	if(x != NULL)
	{
		inorderTreeWalk(x->leftNode);
		cout << "Node key: " << x->nodeKey << endl;
		inorderTreeWalk(x->rightNode);
	}
}

void BinaryTree::treeInsert(BinaryTreeNode* node)
{
	BinaryTreeNode* y = NULL;
	BinaryTreeNode* x = rootNode;
	
	while(x != NULL)
	{
		y = x;
		if(node->nodeKey < x->nodeKey)
			x = x->leftNode;
		else
			x = x->rightNode;
	}
	node->parentNode = y;
	
	if(y == NULL)
	{
		rootNode = node; 	// tree was empty
	} else if (node->nodeKey < y->nodeKey)
	{
		y->leftNode = node;
	} else
	{
		y->rightNode = node;
	}
}

BinaryTreeNode* BinaryTree::treeSearch(double k)
{
	BinaryTreeNode* x = rootNode;
	if(x == NULL) return NULL;
	
	while(x != NULL && x->nodeKey != k)
	{
		if (k < x->nodeKey)
			x = x->leftNode;
		else
			x = x->rightNode;
	}
	return x;
}
