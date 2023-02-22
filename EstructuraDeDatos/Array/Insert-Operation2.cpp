#include <bits/stdc++.h>
using namespace std;
 
// Función para insertar elemento
// en una posición específica
void insertElement(int arr[], int n, int x, int pos)
{
    // Desplazar elementos hacia la derecha
    // que están del lado derecho de pos
    for (int i = n - 1; i >= pos; i--)
        arr[i + 1] = arr[i];
 
    arr[pos] = x;
}
 
// Código del conductor
int main()
{
    int arr[15] = { 2, 4, 1, 8, 5 };
    int n = 5;
 
    cout<<"Antes de la inserción : ";
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
 
    cout<<endl;
 
    int x = 10, pos = 2;
   
    // Llamada a la función
    insertElement(arr, n, x, pos);
    n++;
 
    cout<<"Después de la inserción : ";
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
 
    return 0;
}
