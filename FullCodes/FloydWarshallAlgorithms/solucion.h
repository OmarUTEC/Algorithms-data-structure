#include <iostream>
#include <vector>
#include <limits>
#include <unordered_map>
#include <algorithm> 


using namespace std;

struct Edge {
    char init;
    char end;
    int weight;    
};

// Estructura para guardar el nodo previo y la distancia
struct NodeInfo {
    int prev;
    int dist;
};

unordered_map<char, int> createVertexMap(const vector<char>& vertices) {
    unordered_map<char, int> vertexMap;
    for (int i = 0; i < vertices.size(); ++i) {
        vertexMap[vertices[i]] = i;
    }
    return vertexMap;
}

vector<vector<NodeInfo>> FloydWarshall(const vector<char>& vertices, const vector<Edge>& edges) {
    int n = vertices.size();
    unordered_map<char, int> vertexMap = createVertexMap(vertices);

    vector<vector<NodeInfo>> dp(n, vector<NodeInfo>(n, { -1, numeric_limits<int>::max() }));
    for (int i = 0; i < n; ++i) {
        dp[i][i].dist = 0;
    }

    for (const auto& edge : edges) {
        int init = vertexMap[edge.init];
        int end = vertexMap[edge.end];
        dp[init][end].dist = edge.weight;
        dp[init][end].prev = init;
    }

    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (dp[i][k].dist != numeric_limits<int>::max() && dp[k][j].dist != numeric_limits<int>::max()) {
                    if (dp[i][j].dist > dp[i][k].dist + dp[k][j].dist) {
                        dp[i][j].dist = dp[i][k].dist + dp[k][j].dist;
                        dp[i][j].prev = dp[k][j].prev;
                    }
                }
            }
        }
    }

    return dp;
}

void displayPath(const vector<vector<NodeInfo>>& dp, const unordered_map<char, int>& vertexMap, char init, char end) {
    int i = vertexMap.at(init);
    int j = vertexMap.at(end);

    if (dp[i][j].dist == numeric_limits<int>::max()) {
        cout << "No existe camino entre " << init << " y " << end << "\n";
        return;
    }

    vector<char> path;
    for (; j != -1; j = dp[i][j].prev) {
        path.push_back(static_cast<char>('0' + j + 1));
    }

    reverse(path.begin(), path.end());

    cout << "El camino más corto entre " << init << " y " << end << " es: ";
    for (const auto& node : path) {
        cout << node << " -> ";
    }
    cout << "\n";
}