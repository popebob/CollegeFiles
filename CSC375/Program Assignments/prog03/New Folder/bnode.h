class BinNode {
private:
  char item;				// The node's value
  BinNode* leftchild;			// Pointer to left child
  BinNode* rightchild;			// Pointer to right child
public:
  BinNode();				// Simple constructor.
  BinNode(char, BinNode*, BinNode*);	// More complex constructor.
  char val();				// Returns the node's stored value
  void setVal(const char);		// Sets the node's value
  inline BinNode* left() const;		// Gimme the left child pointer
  void setLeft(BinNode*);		// Set the left child pointer
  inline BinNode* right() const;	// Gimme the right child pointer
  void setRight(BinNode*);		// Set the right child pointer
  bool isLeaf();			// Am I a leaf?  Perhaps.
};
