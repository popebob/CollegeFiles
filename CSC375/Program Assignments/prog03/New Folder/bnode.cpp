#include "bnode.h"

//***********************************************
// Simple constructor to create an empty node.
//***********************************************
BinNode::BinNode() {
  leftchild = rightchild = NULL;
}

//***************************************************************
// More complex constructor:  passed a value and two pointers.
//***************************************************************
BinNode::BinNode(char e, BinNode* l =NULL, BinNode* r =NULL) {
  item = e;
  leftchild = l;
  rightchild = r;
}

//*******************************
// Gimme the node's value.
//*******************************
char BinNode::val() {
  return item;
}

//*******************************
// Set the node's value.
//*******************************
void BinNode::setVal(const char e) {
  item = e;
}

//***********************************************
// Return the pointer to the left child.
//***********************************************
inline BinNode* BinNode::left() const {
  return leftchild;
}

//***********************************************
// Set the pointer to the left child.
//***********************************************
void BinNode::setLeft(BinNode* b) {
  leftchild = (BinNode*) b;
}

//***********************************************
// Return the pointer to the right child.
//***********************************************
inline BinNode* BinNode::right() const {
  return rightchild;
}

//***********************************************
// Set the pointer to the right child.
//***********************************************
void BinNode::setRight(BinNode* b) {
  rightchild = (BinNode*)b;
}

//***************
// Am I a leaf?
//***************
bool BinNode::isLeaf() {
  return (leftchild == NULL) && (rightchild == NULL);
}
