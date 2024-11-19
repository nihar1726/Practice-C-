#include <iostream>
using namespace std;

struct node
{
    int vertex;
    node *next;
};

class graph
{
    int totalVertices;
    node **adjList;

public:
    graph(int totalVertices)
    {
        this->totalVertices = totalVertices;
        adjList = new node *[totalVertices]; // adjlist would store pointers
        // initialising adjList
        for (int i = 0; i < totalVertices; i++)
        {
            adjList[i] = nullptr;
        }
    }

    void addEdge(int x, int y)
    {
        if (x < 0 || x >= totalVertices || y < 0 || y >= totalVertices)
        {
            cout << "Index is out of bounds" << endl;
        }

        node *newnode1 = new node{x, adjList[y]};
        adjList[y] = newnode1; // a node is added to adjacency list of x

        node *newnode2 = new node{y, adjList[x]};
        adjList[x] = newnode2; // a node is added to adjacency list of y
    }

    void printGraph()
    {
        for (int i = 0; i < totalVertices; i++)
        {
            cout << "Vertex " << i << ": ";
            node *dummy = adjList[i];

            while (dummy != nullptr)
            {
                cout << dummy->vertex << ", ";
                dummy = dummy->next;
            }
            cout << endl;
        }
    }

    ~graph()
    {
        for (int i = 0; i < totalVertices; i++)
        {
            node *dummy = adjList[i];

            while (dummy != nullptr)
                ;
            {
                node *temp = dummy;
                dummy = dummy->next;
                delete temp;
            }
        }
    }
};

int main()
{
    graph g1(5);

    g1.addEdge(0, 1);
    g1.addEdge(0, 4);
    g1.addEdge(1, 4);
    g1.addEdge(1, 3);
    g1.addEdge(3, 2);
    g1.addEdge(2, 4);

    g1.printGraph();
    return 0;
}