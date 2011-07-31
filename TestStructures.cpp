#include <iostream>
using std::cout;
using std::endl;

#include "BinaryTree.h"
#include "TestStructures.h"

int main()
{
	cout << "Data structure checker" << endl;
	testBinaryTree01();
	return 0;
}

void testBinaryTree01()
{
	cout << "Testing Binary Tree basics" << endl;
	BinaryTree* myTree = new BinaryTree;
	double myArray[7] = {5, 23, 6, 1, 34, 35, 10};
	
	for(unsigned int i = 0; i < sizeof(myArray)/sizeof(double); i++)
	{
		BinaryTreeNode* myNode = new BinaryTreeNode(myArray[i]);
		myTree->treeInsert(myNode);
	}
	cout << "Finished inserting nodes into tree" << endl;
	
	cout << "Printing the nodes in the tree" << endl;
	myTree->inorderTreeWalk(myTree->rootNode);
}
