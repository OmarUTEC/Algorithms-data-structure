#include <iostream>

using namespace std;

int main() {
   int n = 10; // Longitud del arreglo
   int a[n]; // Declaración del arreglo
   for (int i = 0; i < n; i++) {
      a[i] = i + 1; // Asignación de valores al arreglo
   }
   int x = 7; // Valor a buscar en el arreglo
   for (int i = 0; i < n; i++) {
      if (a[i] == x) { // Si el valor se encuentra en el arreglo
         cout << "El valor " << x << " se encuentra en la posicion " << i << endl; // Imprimir mensaje con la posición
         break; // Salir del ciclo
      }
   }
   return 0;
}

/*
En este ejemplo, el algoritmo busca el valor x en un arreglo de tamaño n. En el mejor de los casos, el valor x se encuentra en la primera posición del arreglo, por lo que el algoritmo recorre el arreglo una sola vez y encuentra el valor. En este caso, el tiempo de ejecución del algoritmo es proporcional a n, lo que significa que la complejidad temporal en el mejor de los casos es Omega(n).
*/
