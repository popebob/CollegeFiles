// Singly-linked list node
//template <class T>
class Link 
{
public:
  int element;		// Value for this node
  Link *next;		// Pointer to next node in list

  Link(int elemval, Link* nextval =NULL)
    { element = elemval;  next = nextval; }

  Link(Link* nextval =NULL) { next = nextval; }
};
