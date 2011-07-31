#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include "BinaryTreeNode.h"

class BinaryTree
{
	
public:
	BinaryTreeNode* rootNode;
	
	BinaryTree();
	
	void inorderTreeWalk(BinaryTreeNode* x);
	
	void treeInsert(BinaryTreeNode* node);
	
	BinaryTreeNode* treeSearch(double k);
};


#endif //BINARY_TREE_H
