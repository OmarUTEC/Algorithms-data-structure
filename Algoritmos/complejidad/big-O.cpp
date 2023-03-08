#include <iostream>
#include <chrono>

using namespace std;

int main()
{
    int n = 1000000;

    auto start = chrono::high_resolution_clock::now(); // Iniciando el cronometro

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += i;
    }

    auto stop = chrono::high_resolution_clock::now();  // Detener el cronometro
    auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);

    cout << "La suma es: " << sum << endl;
    cout << "Tiempo de ejecucion: " << duration.count() << " microsegundos" << endl;

    return 0;
}

/*
En términos de notación Big-O, decimos que la complejidad temporal del algoritmo es O(n) porque el tiempo de ejecución del algoritmo crece de manera proporcional al tamaño del arreglo, y podemos acotar la función que describe el tiempo de ejecución superiormente por una función lineal de la forma f(n) = kn, donde k es una constante positiva. Esto significa que, para tamaños suficientemente grandes de arreglo, el tiempo de ejecución será proporcional a n (es decir, O(n)).
 */