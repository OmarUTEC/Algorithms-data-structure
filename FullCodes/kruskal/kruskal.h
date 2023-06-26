#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>

using namespace std;

struct Edge {
    char init;
    char end;
    int weight;
    int phase;
    Edge(char i, char e, int w = 0) : init(i), end(e), weight(w), phase(0) {} 
    friend ostream &operator<<(ostream &os, const Edge &edge); 
};

class DisjointSetArray {
private:
    vector<int> parent;
    vector<int> rank;

public:
    unordered_map<char, int> charToIndex;
    DisjointSetArray(vector<char> elements) {
        int index = 0;
        for (char element : elements) {
            charToIndex[element] = index;
            parent.push_back(index);
            rank.push_back(0);
            index++;
        }
    }

    int find(int x) {
        if (parent[x] != x)
            parent[x] = find(parent[x]);
        return parent[x];
    }

    void unionSet(int x, int y) {
        int xroot = find(x);
        int yroot = find(y);
        if (xroot == yroot)
            return;
        if (rank[xroot] < rank[yroot])
            parent[xroot] = yroot;
        else if (rank[xroot] > rank[yroot])
            parent[yroot] = xroot;
        else {
            parent[yroot] = xroot;
            rank[xroot] = rank[xroot] + 1;
        }
    }
};

vector<Edge> kruskal(vector<char> vertices, vector<Edge> edges) {
    vector<Edge> solution;
    DisjointSetArray ds(vertices);
    int phase = 0; 

    sort(edges.begin(), edges.end(), [](Edge a, Edge b) { return a.weight < b.weight; });

    for (Edge edge : edges) {
        int x = ds.find(ds.charToIndex[edge.init]);
        int y = ds.find(ds.charToIndex[edge.end]);
        if (x != y) {
            edge.phase = phase++; 
            solution.push_back(edge);
            ds.unionSet(x, y);
        }
    }

    return solution;
}

void sortResult(vector<Edge> &result) {
    sort(result.begin(), result.end(), [](Edge a, Edge b) { return a.phase < b.phase; });
}

// Sobrecargar el operador de salida para Edge
ostream &operator<<(ostream &os, const Edge &edge) {
    os << "'"<< edge.init << "', '" << edge.end << "', " << edge.weight;
    return os;
}




