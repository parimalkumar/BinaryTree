#ifndef BINARY_TREE_NODE_H
#define BINARY_TREE_NODE_H

// Define NULL if it hasn't already been
#ifndef NULL
#define NULL 0
#endif //NULL

class BinaryTreeNode
{

public:
	BinaryTreeNode* parentNode;
	BinaryTreeNode* leftNode;
	BinaryTreeNode* rightNode;
	double nodeKey;
	
	BinaryTreeNode();
	BinaryTreeNode(double key);
	~BinaryTreeNode();
};

#endif //BINARY_TREE_NODE_H
