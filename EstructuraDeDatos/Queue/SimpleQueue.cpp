#include<iostream>

class Queue {
    private:
        // front_index es un índice que lleva la cuenta del primer elemento en la cola
        // rear_index es un índice que lleva la cuenta del último elemento en la cola
        int front_index, rear_index;
        // q es un arreglo que almacena los elementos en la cola
        int q[100];
    public:
        // El constructor inicializa los índices de front y rear en -1
        Queue() {
            front_index = -1;
            rear_index = -1;
        }
        // La función enqueue agrega un elemento a la cola
        void enqueue(int x) {
            // Si el índice de rear es 99, la cola está llena y no se pueden agregar más elementos
            if (rear_index == 99) {
                std::cout << "Queue is full" << std::endl;
                return;
            }
            // Agrega el elemento en la siguiente posición después de rear_index
            q[++rear_index] = x;
        }
        // La función get_front devuelve el primer elemento de la cola
        int get_front() {
            // Si front_index es igual a rear_index, la cola está vacía y se devuelve -1
            if (front_index == rear_index) {
                std::cout << "Queue is empty" << std::endl;
                return -1;
            }
            // Devuelve el elemento en la siguiente posición después de front_index
            return q[++front_index];
        }
        // La función get_rear devuelve el último elemento de la cola
        int get_rear() {
            // Si rear_index es -1, la cola está vacía y se devuelve -1
            if (rear_index == -1) {
                std::cout << "Queue is empty" << std::endl;
                return -1;
            }
            // Devuelve el elemento en la posición actual de rear_index
            return q[rear_index];
        }
        // La función size devuelve el tamaño de la cola (cantidad de elementos)
        int size() {
            // Calcula la diferencia entre rear_index y front_index y devuelve el resultado
            return rear_index - front_index;
        }
};

int main() {
    // Crea un objeto de la clase Queue
    Queue q;
    
    // Agrega elementos a la cola
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    
    // Imprime el primer y último elemento de la cola
    std::cout << "First element: " << q.get_front() << std::endl;
    std::cout << "Last element: " << q.get_rear() << std::endl;
    
    // Imprime el tamaño de la cola
    std::cout << "Queue size: " << q.size() << std::endl;
    
    return 0;
}
