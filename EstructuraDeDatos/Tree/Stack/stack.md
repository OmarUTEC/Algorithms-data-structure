# Stack

<p align="center">
  <img src="Stack.png" />
</p>


Un stack es una estructura de datos de tipo LIFO (Last In First Out), donde el último elemento agregado es el primero en ser retirado. Es similar a una pila de platos, donde el último plato colocado es el primero en ser retirado. En un stack, las operaciones típicas incluyen push (agregar un elemento a la pila), pop (remover el elemento superior) y peek (ver el elemento superior sin retirarlo).

# Principales Operaciones

1. **push**: Agregar un elemento a la cima de la pila.
2. **pop**: Remover el elemento superior de la pila.
3. **peek**: Ver el elemento superior de la pila sin retirarlo.
4. **isEmpty**: Verificar si la pila está vacía.
5. **size**: Ver el tamaño de la pila.

# Características Importantes sobre el Stack

1. **LIFO**: Es una estructura de datos de tipo LIFO, por lo que el último elemento agregado es el primero en ser retirado.
2. **Limitaciones de tamaño**: Por lo general, los stacks tienen un tamaño máximo limitado, y si se intenta agregar un elemento cuando la pila está llena, se produce una overflow error.
3. **Aplicaciones**: Los stacks son ampliamente utilizados en muchas aplicaciones, incluyendo la evaluación de expresiones matemáticas, la implementación de algoritmos recursivos y la gestión de llamadas de función.
4. **Algoritmos de Stack**: Muchos algoritmos importantes, como DFS y Backtracking, dependen de la implementación de un stack.
5. **Implementación**: Los stacks se pueden implementar en diferentes lenguajes de programación y estructuras de datos, como arrays, listas enlazadas y vectores dinámicos.

**No, un stack no es una estructura de datos que permita la iteración. Debido a su propiedad LIFO, solo se puede acceder al elemento de la cima de la pila y retirarlo. Para iterar sobre los elementos de un stack, se requiere primero extraerlos y almacenarlos en otra estructura de datos que permita la iteración, como una lista o un array.**


# Creación del Stack

```c++
#include <vector>
#include <iostream>

template <typename T> // Definir una plantilla de tipo T
class Stack { // Declaración de la clase Stack
  private:
    std::vector<T> data; // Vector privado para almacenar los elementos de la pila
  public:
    Stack() {} // Constructor vacío de la clase Stack

    // Método para agregar un elemento a la pila
    void push(T item) {
      data.push_back(item); // Añadir el elemento a la parte trasera del vector
    }

    // Método para eliminar el último elemento añadido a la pila
    T pop() {
      T item = data.back(); // Obtener el último elemento
      data.pop_back(); // Eliminar el último elemento del vector
      return item; // Devolver el elemento eliminado
    }

    // Método para acceder al último elemento añadido a la pila sin eliminarlo
    T peek() {
      return data.back(); // Devolver el último elemento
    }

    // Método para verificar si la pila está vacía
    bool is_empty() {
      return data.empty(); // Devolver verdadero si el vector está vacío, falso en caso contrario
    }

    // Método para obtener el tamaño de la pila
    int size() {
      return data.size(); // Devolver el tamaño del vector
    }
};

int main() {
  Stack<int> stack; // Crear un objeto de pila de enteros
  stack.push(1); // Añadir 1 a la pila
  stack.push(2); // Añadir 2 a la pila
  stack.push(3); // Añadir 3 a la pila
  std::cout << "Top item is: " << stack.peek() << std::endl; // Imprimir el último elemento añadido a la pila
  std::cout << "Popped item is: " << stack.pop() << std::endl; // Imprimir el elemento eliminado de la pila
  std::cout << "Stack size is: " << stack.size() << std::endl; // Imprimir el tamaño actual de la pila
  return 0;
}
```