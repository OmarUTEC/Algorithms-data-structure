#include <iostream>

// Clase que representa un nodo en la lista doblemente enlazada
class Node {
 public:
  int data;
  Node* next;
  Node* prev;
  Node(int data) {
    this->data = data;
    next = prev = nullptr;
  }
};

// Clase que representa el dequeue
class Dequeue {
 public:
  Node* front;
  Node* rear;

  // Constructor por defecto
  Dequeue() {
    front = rear = nullptr;
  }

  // Función para agregar un elemento a la parte frontal
  void push_front(int data) {
    Node* temp = new Node(data);
    if (front == nullptr) {
      front = rear = temp;
      return;
    }
    temp->next = front;
    front->prev = temp;
    front = temp;
  }

  // Función para agregar un elemento a la parte trasera
  void push_back(int data) {
    Node* temp = new Node(data);
    if (front == nullptr) {
      front = rear = temp;
      return;
    }
    rear->next = temp;
    temp->prev = rear;
    rear = temp;
  }

  // Función para eliminar un elemento de la parte frontal
  int pop_front() {
    if (front == nullptr) {
      return -1;
    }
    Node* temp = front;
    front = front->next;
    if (front != nullptr) {
      front->prev = nullptr;
    } else {
      rear = nullptr;
    }
    int data = temp->data;
    delete temp;
    return data;
  }

  // Función para eliminar un elemento de la parte trasera
  int pop_back() {
    if (front == nullptr) {
      return -1;
    }
    Node* temp = rear;
    rear = rear->prev;
    if (rear != nullptr) {
      rear->next = nullptr;
    } else {
      front = nullptr;
    }
    int data = temp->data;
    delete temp;
    return data;
  }

  // Función para obtener el elemento de la parte frontal
  int front_element() {
    if (front == nullptr) {
      return -1;
    }
    return front->data;
  }

  // Función para obtener el elemento de la parte trasera
  int back_element() {
    if (front == nullptr) {
      return -1;
    }
    return rear->data;
  }
};

int main() {
Dequeue dequeue;

// Agregamos elementos a la parte frontal
dequeue.push_front(1);
dequeue.push_front(2);
dequeue.push_front(3);

// Agregamos elementos a la parte trasera
dequeue.push_back(4);
dequeue.push_back(5);

// Obtenemos el elemento de la parte frontal y trasera
std::cout << "Elemento frontal: " << dequeue.front_element() << std::endl;
std::cout << "Elemento trasero: " << dequeue.back_element() << std::endl;

// Eliminamos elementos de la parte frontal y trasera
std::cout << "Eliminando elemento frontal: " << dequeue.pop_front() << std::endl;
std::cout << "Eliminando elemento trasero: " << dequeue.pop_back() << std::endl;

// Verificamos el elemento de la parte frontal y trasera después de eliminar elementos
std::cout << "Elemento frontal después de eliminar elementos: " << dequeue.front_element() << std::endl;
std::cout << "Elemento trasero después de eliminar elementos: " << dequeue.back_element() << std::endl;

return 0;
}