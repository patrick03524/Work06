#include <iostream>
#include <vector>
#include <map.h>

using namespace std;

class Graph
{
protected:
    
    map<int, vector<int> >outgoing;
public:
    
    Graph(const vector<int> &startPoint, const vector<int> &endPoint);
    int numOutgoing(const int nodeA) const;
    const vector <int> &adjacent(const int nodeID) const;
};
