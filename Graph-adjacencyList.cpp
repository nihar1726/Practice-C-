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

    void BFS(int startingVertex)
    {
        bool *visited = new bool[totalVertices];

        for (int i = 0; i < totalVertices; i++)
        {
            visited[i] = false;
        }

        int queue[totalVertices];
        int front = 0;
        int rear = 0;

        visited[startingVertex] = true;
        queue[rear++] = startingVertex; // inseted in queue

        cout << endl
             << "Your Vertices using BFS: ";

        while (front < rear)
        {
            int vertex = queue[front++];
            cout << vertex << " ";

            for (node *temp = adjList[vertex]; temp != nullptr; temp = temp->next)
            {
                int adjacentNode = temp->vertex;

                if (!visited[adjacentNode])
                {
                    visited[adjacentNode] = true;
                    queue[rear++] = adjacentNode;
                }
            }
        }
        delete[] visited;
    }

    void DFS(int startingVertex)
    {
        bool *visited = new bool[totalVertices];

        for (int i = 0; i < totalVertices; i++)
        {
            visited[i] = false;
        }
        // creating stack
        int stack[totalVertices];
        int top = -1;

        // inserting starting node in stack
        stack[++top] = startingVertex;

        cout << endl
             << "Your Vertices using DFS: ";

        while (top != -1)
        {
            int vertex = stack[top--]; // POP

            if (!visited[vertex])
            {
                visited[vertex] = true;
                cout << vertex << " "; // Printing unvisited top of stack
            }
            // inserting adjacent nodes in stack
            for (node *temp = adjList[vertex]; temp != nullptr; temp = temp->next)
            {
                int adjacentVertex = temp->vertex;

                if (!visited[adjacentVertex])
                {
                    stack[++top] = adjacentVertex;
                }
            }
        }
        delete[] visited;
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

    g1.BFS(0);
    cout << endl;
    g1.DFS(0);

    return 0;
}