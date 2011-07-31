#ifndef RB_NODE_H
#define RB_NODE_H

// Define NULL if it hasn't already been
#ifndef NULL
#define NULL 0
#endif NULL

enum RBNodeColourType {BLACK, RED}

class RBNode
{
public:
	RBNode* parentNode;
	RBNode* leftNode;
	RBNode* rightNode;
	RBNodeColourType nodeColour;
	double nodeData;
}



#endif RB_NODE_H
