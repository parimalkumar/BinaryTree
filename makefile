CC = g++
CFLAGS = -g -Wall
OBJECTS = BinaryTree.o BinaryTreeNode.o

TestStructures : TestStructures.cpp TestStructures.h $(OBJECTS)
	$(CC) $(CFLAGS) -o TestStructures TestStructures.cpp TestStructures.h $(OBJECTS)

BinaryTree.o : BinaryTreeNode.o BinaryTree.cpp BinaryTree.h
	$(CC) $(CFLAGS) -c BinaryTree.cpp BinaryTree.h

BinaryTreeNode.o : BinaryTreeNode.cpp BinaryTreeNode.h
	$(CC) $(CFLAGS) -c BinaryTreeNode.cpp BinaryTreeNode.h

clean :
	rm BinaryTree.o BinaryTreeNode.o TestStructures
