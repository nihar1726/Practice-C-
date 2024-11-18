// Adjacency matrix

#include <iostream>
using namespace std;

class graph
{
private:
    int vertices;
    int **adjmatrix; // for an array of pointers that store one row each

public:
    graph(int vertices)
    {
        this->vertices = vertices;
        adjmatrix = new int *[vertices]; // will store pointers to every row

        for (int i = 0; i < vertices; ++i)
        {
            adjmatrix[i] = new int[vertices]; // will stores integers for a row
            // initialising every cell to zero
            for (int j = 0; j < vertices; ++j)
            {
                adjmatrix[i][j] = 0;
            }
        }
    }

    ~graph()
    {
        for (int i = 0; i < vertices; i++)
        {
            delete[] adjmatrix[i];
        }

        delete[] adjmatrix;
    }

    void addEdge(int x, int y)
    {
        if (x < 0 || x >= vertices || y < 0 || y >= vertices)
        {
            cout << "Index is out of bounds" << endl;
        }
        adjmatrix[x][y] = 1;
        adjmatrix[y][x] = 1; // as it's undirected
    }

    void display()
    {
        cout << "Here's your graph in the form of an Adjacency Matrix" << endl;
        cout << "  ";
        for (int i = 0; i < vertices; i++)
        {
            cout << i << " ";
        }
        cout << endl;
        for (int i = 0; i < vertices; i++)
        {
            cout << i << " ";
            for (int j = 0; j < vertices; j++)
            {
                cout << adjmatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    graph g1(6);

    g1.addEdge(0, 5);
    g1.addEdge(0, 2);
    g1.addEdge(1, 3);
    g1.addEdge(1, 5);
    g1.addEdge(2, 3);
    g1.addEdge(2, 5);
    g1.addEdge(4, 3);

    g1.display();
    // graph g(5);

    // // Add edges
    // g.addEdge(0, 1);
    // g.addEdge(0, 4);
    // g.addEdge(1, 2);
    // g.addEdge(1, 3);
    // g.addEdge(1, 4);
    // g.addEdge(2, 3);
    // g.addEdge(3, 4);

    // g.display();
    return 0;
}