#include <iostream> 
#include <queue> 

// Clase para implementar una cola de prioridad
class PriorityQueue { 
    std::priority_queue<int> pq; 

public: 

    // Método para insertar un elemento en la cola
    void push(int data) 
    { 
        pq.push(data); 
    } 

    // Método para eliminar el elemento con la mayor prioridad
    void pop() 
    { 
        pq.pop(); 
    } 

    // Método para acceder al elemento con la mayor prioridad
    int top() 
    { 
        return pq.top(); 
    } 

    // Método para verificar si la cola está vacía
    bool empty() 
    { 
        return pq.empty(); 
    } 
}; 

int main() 
{ 
    // Crea un objeto de la clase PriorityQueue
    PriorityQueue pq; 

    // Agrega elementos a la cola de prioridad
    pq.push(10); 
    pq.push(30); 
    pq.push(20); 
    pq.push(5); 

    // Muestra los elementos en la cola de prioridad
    std::cout << "Los elementos en la cola de prioridad son: "; 
    while (!pq.empty()) 
    { 
        std::cout << pq.top() << " "; 
        pq.pop(); 
    } 

    return 0; 
} 
