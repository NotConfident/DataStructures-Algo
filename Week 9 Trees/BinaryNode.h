#ifndef WEEK_9_TREES_BINARYNODE_H
#define WEEK_9_TREES_BINARYNODE_H
typedef int ItemType;

struct BinaryNode
{
    ItemType item;		// data item
    BinaryNode* left;	// pointer pointing to left subtree
    BinaryNode* right;	// pointer pointing to right subtree
};

#endif //WEEK_9_TREES_BINARYNODE_H
