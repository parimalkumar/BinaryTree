#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include "BinaryTreeNode.h"

class BinaryTree
{
	
public:
	BinaryTreeNode* rootNode;
	
	BinaryTree();
	~BinaryTree();
	
	void inorderTreeWalk(BinaryTreeNode* x);
	
	void preorderTreeWalk(BinaryTreeNode* x);
	
	void postorderTreeWalk(BinaryTreeNode* x);
	
	void treeInsert(BinaryTreeNode* node);
	
	BinaryTreeNode* treeSearch(double k);

private:
	void removeSubtree(BinaryTreeNode* x);
};


#endif //BINARY_TREE_H
