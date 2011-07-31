#include "BinaryTreeNode.h"

BinaryTreeNode::BinaryTreeNode()
{
	parentNode = NULL;
	rightNode = NULL;
	leftNode = NULL;
	nodeKey = -99999999999;
}

BinaryTreeNode::BinaryTreeNode(double key)
{
	parentNode = NULL;
	rightNode = NULL;
	leftNode = NULL;
	nodeKey = key;
}

BinaryTreeNode::~BinaryTreeNode()
{
	
}
