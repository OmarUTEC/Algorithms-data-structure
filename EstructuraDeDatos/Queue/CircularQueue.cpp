#include <iostream>

using namespace std;

// Tamaño máximo de la cola
const int MAX = 5; 

class CircularQueue {
private:
    // Array para almacenar los elementos de la cola
    int queue[MAX]; 

    // Punteros "head" y "tail" para la cola
    int head = -1, tail = -1;

public:
    // Función para agregar un elemento a la cola
    void enqueue(int value) 
    {
        // Verifica si la cola está llena
        if ((head == 0 && tail == MAX - 1) || (head == tail + 1)) 
        {
            cout << "La cola está llena" << endl; 
            return;
        }
        // Caso en el que la cola está vacía
        else if (head == -1) 
        {
            head = tail = 0; 
            queue[tail] = value; 
        }
        // Caso en el que el final de la cola llega al final del array y el inicio no es 0
        else if (tail == MAX - 1 && head != 0) 
        {
            tail = 0; 
            queue[tail] = value; 
        }
        // Caso general
        else
        {
            tail++; 
            queue[tail] = value; 
        }
    }

    // Función para eliminar un elemento de la cola
    void dequeue() 
    {
        // Verifica si la cola está vacía
        if (head == -1) 
        {
            cout << "La cola está vacía" << endl; 
            return; 
        }
        int value = queue[head]; 
        // Caso en el que sólo hay un elemento en la cola
        if (head == tail) 
        {
            head = -1; 
            tail = -1; 
        }
        // Caso en el que el inicio de la cola llega al final del array
        else if (head == MAX - 1) 
            head = 0; 
        // Caso general
        else
            head++; 
        cout << "Se eliminó " << value << " de la cola" << endl;
    }

    // Función para mostrar los elementos en la cola
    void display() 
    {
        // Verifica si la cola está vacía
        if (head == -1) 
        {
            cout << "La cola está vacía" << endl; 
            return;
        }
        cout << "Los elementos en la cola son: "; 
        // Si el final es mayor o igual que el inicio, se imprimen los elementos desde el inicio hasta el final
        if (tail >= head) 
        {
            for (int i = head; i <= tail; i++) 
                cout << queue[i] << " ";
        } 
        // Caso en el que el final es menor que el inicio, se imprimen los elementos desde el inicio hasta el final del array y desde el inicio hasta el final
        else 
        {
            for (int i = head; i < MAX; i++) 
                cout << queue[i] << " "; 

            for (int i = 0; i <= tail; i++) 
                cout << queue[i] << " "; 
        } 
        cout << endl; 
    } 
}; 

// Función principal
int main() 
{ 
    CircularQueue obj; 

    // Agrega elementos a la cola
    obj.enqueue(14); 
    obj.enqueue(22); 
    obj.enqueue(13); 
    obj.enqueue(-6); 

    // Muestra los elementos en la cola
    obj.display(); 

    // Elimina elementos de la cola
    obj.dequeue(); 
    obj.dequeue(); 

    // Muestra los elementos en la cola después de eliminar elementos
    obj.display(); 

    return 0; 
} 