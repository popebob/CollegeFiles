#include <iostream>
#include <fstream>
#include <vector>
#include <stack>
#include <cctype>
#include <queue>
#include "./src/pageq.cc"

int main()
{
    pageq PageQ;
    PageQ.add(7);
    PageQ.add(13);
    PageQ.add(17);
    PageQ.printQ();
    return 0;
}
