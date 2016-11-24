#include <iostream>
#include <vector>
#include <stdexcept>
#include "graph.h"

Graph::Graph(const vector<int> &startPoint, const vector<int> &endPoint)
{
    if(startPoint.size()!=endPoint.size())
    {
        throw invalid_argument("Start/end point lists differ in length");
    }
    for(unsigned i=0; i<start.Point.size();i++)
    {
        int start= startPoint[i], end=endPoint[i];
        outgoing[start].push_back(end);
        outgoing[end];
    }
}
int Graph::numOutgoing(const int nodeA) const
{
    return adjacent(nodeA).size();
}

const vector<int> &Graph::adjacent(const int nodeA) const
{
    map<int, vector<int>>::const_iterator i=outgoing.find(nodeA);
    if(i==outgoing.end())
    {
        throw invalid_argument("Invalid node A");
    }
    return i->second;
}
