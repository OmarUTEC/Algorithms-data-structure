#include <iostream>

using namespace std;

int main()
{
    // n es el número de vértices
    // m es el número de aristas
    int n, m;
    // Leer los valores de n y m desde la entrada estándar
    cin >> n >> m;
    // Crear una matriz de adyacencia de tamaño n+1 x n+1
    // La matriz se inicializa con ceros automáticamente
    int adjMat[n + 1][n + 1];
    // Leer las aristas del grafo
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        // Marcar que hay una arista entre u y v
        // (y también entre v y u, ya que el grafo es no dirigido)
        adjMat[u][v] = 1;
        adjMat[v][u] = 1;
    }

    // El programa finaliza sin errores
    return 0;
}
