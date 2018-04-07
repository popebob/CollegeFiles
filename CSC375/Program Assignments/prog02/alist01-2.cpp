template <class ELEM>
void List<ELEM>::setValue(const ELEM val) { // Set current ELEM's value
  assert(isInList());              // Curr must be at valid position
  listarray[curr] = val;
}

template <class ELEM>
ELEM List<ELEM>::currValue() const {     // Return current ELEM's value
  assert(isInList());              // Must be at a valid position
  return listarray[curr];
}

template <class ELEM>
bool List<ELEM>::isEmpty() const         // Return TRUE if list is empty
  { return numinlist == 0; }

template <class ELEM>
bool List<ELEM>::isInList() const        // TRUE if curr is within list
  { return (curr >= 0) && (curr < numinlist); }

template <class ELEM>
bool List<ELEM>::find(int val) {         // Find value (starting at curr)
  while (isInList())               // Stop if reach end
    if (key(currValue()) == val) return TRUE;  // Found it
    else next();
  return FALSE;                    // Not found
}
