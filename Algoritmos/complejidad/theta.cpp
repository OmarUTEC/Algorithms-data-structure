#include <iostream>
#include <vector>

using namespace std;

int maxElement(vector<vector<int>> arr) {
    int max_val = arr[0][0];
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            if (arr[i][j] > max_val) {
                max_val = arr[i][j];
            }
        }
    }
    return max_val;
}

int main() {
    vector<vector<int>> arr = {{1, 2, 3, 4},
                               {5, 6, 7, 8},
                               {23, 10, 11, 12}};

    int max_val = maxElement(arr);

    cout << "El elemento maximo de la matriz es: " << max_val << endl;

    return 0;
}

/*
Utiliza notación Theta ya que la complejidad de tiempo del algoritmo es tanto O(n^2) como Omega(n^2). Es decir, el tiempo de ejecución del algoritmo está acotado tanto por encima como por debajo por la función n^2, por lo que se puede decir que la complejidad de tiempo del algoritmo es Theta(n^2).
*/