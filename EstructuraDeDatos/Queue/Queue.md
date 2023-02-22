# Queue

La estructura de datos "Queue" es una estructura lineal de datos que sigue un orden específico en el que se realizan las operaciones para almacenar datos. Este orden se conoce como "Primero en Entrar, Primero en Salir" (FIFO, por sus siglas en inglés). Se puede imaginar una cola como una línea de personas esperando recibir algo en orden secuencial, que comienza desde el inicio de la línea. Es una lista ordenada en la que las inserciones se realizan en un extremo, conocido como el trasero, y las eliminaciones se realizan desde el otro extremo, conocido como el frente. Un buen ejemplo de una cola es cualquier cola de consumidores para un recurso donde el consumidor que llegó primero es el que se atiende primero.

La diferencia entre las pilas y las colas está en la forma de eliminar los elementos. En una pila, se elimina el elemento más recientemente agregado; en una cola, se elimina el elemento menos recientemente agregado.

<p align="center">
  <img src="Queue.png" />
</p>

## Basic Operations on Queue

- **Enqueue**: Agrega un elemento al final de la cola.
- **Dequeue**: Elimina un elemento del frente de la cola.
- **Front**: Devuelve el primer elemento de la cola.
- **Rear**: Devuelve el último elemento de la cola.
- **isEmpty**: Devuelve verdadero si la cola está vacía, de lo contrario devuelve falso.
- **isFull**: Devuelve verdadero si la cola está llena, de lo contrario devuelve falso.
- **size**: Para determinar el tamaño actual de la cola.

# Types of Queue

* **Simple Queue**: "Simple Queue" es una implementación de una cola en estructura de datos. Una cola es un tipo de estructura de datos lineal que sigue el principio "primero en entrar, primero en salir" (FIFO, First-In First-Out). En una cola simple, los elementos se agregarán al final de la cola (operación de "encolar" o "enqueue") y se retirarán desde el principio de la cola (operación de "desencolar" o "dequeue"). La operación "front" devuelve el elemento al frente de la cola sin retirarlo, mientras que la operación "rear" devuelve el último elemento en la cola. La operación "isEmpty" verifica si la cola está vacía y la operación "size" devuelve el número de elementos en la cola.

* **Circular Queue**: El "circular queue" es una estructura de datos en forma de cola que utiliza una implementación circular para resolver los problemas de desbordamiento y reducir el desperdicio de espacio.

En una cola normal, los elementos se añaden al final y se quitan desde el principio, siguiendo el modelo FIFO (First In First Out). Cuando la cola está llena, no se pueden agregar más elementos hasta que se retiren algunos. Sin embargo, en una cola circular, el final de la cola se conecta con el principio, formando un ciclo. Cuando se llega al final de la cola, se vuelve al principio para reutilizar los espacios vacíos.

La implementación de la cola circular incluye dos punteros: un puntero "head" que apunta al primer elemento en la cola y un puntero "tail" que apunta al lugar donde se debe agregar el siguiente elemento. Cada vez que se agrega un elemento a la cola, el puntero "tail" avanza una posición. Cuando se llega al final de la cola, el puntero "tail" vuelve al principio para reutilizar los espacios vacíos.

En resumen, la cola circular es una solución eficiente para aplicaciones en las que es necesario utilizar todos los espacios disponibles y prevenir el desbordamiento de la cola.

* **Priority Queue**: Una cola de prioridad es una estructura de datos que organiza elementos de acuerdo a una prioridad asignada. Cada elemento en la cola de prioridad se asigna una prioridad y se ordena en la cola de manera tal que el elemento con la mayor prioridad siempre está al frente de la cola.

En una cola de prioridad, el elemento con la mayor prioridad se elimina primero, y el elemento con la segunda mayor prioridad es el siguiente en ser eliminado. De esta manera, la cola de prioridad permite implementar algoritmos de planificación de tareas y soluciones de optimización de recursos.

Una cola de prioridad se puede implementar en muchas formas diferentes, como una lista ordenada, un árbol binario o un montículo. En general, un montículo se utiliza comúnmente para implementar una cola de prioridad, ya que permite inserción y extracción eficientes de elementos.

En términos generales, las operaciones comúnmente utilizadas en una cola de prioridad incluyen insertar un elemento con una prioridad determinada, eliminar el elemento con la mayor prioridad, y acceder al elemento con la mayor prioridad.

* **Dequeue**: El dequeue, también conocido como cola doblemente terminada, es una estructura de datos que permite insertar y eliminar elementos tanto en la parte frontal como en la parte trasera. Se comporta como una combinación de una pila y una cola, ya que permite agregar y eliminar elementos tanto desde la parte frontal como desde la parte trasera.

Desde un punto de vista de implementación, un dequeue puede ser implementado con una matriz o con una lista doblemente enlazada. Al usar una matriz, se puede elegir una posición específica de la matriz para ser el frente o el final de la cola y agregar y eliminar elementos en consecuencia. Sin embargo, al usar una lista doblemente enlazada, se pueden agregar y eliminar elementos fácilmente en ambos extremos sin necesidad de reorganizar la estructura entera.

En términos de complejidad de tiempo, las operaciones básicas de un dequeue, como insertar y eliminar elementos, tienen una complejidad de tiempo lineal en promedio. Sin embargo, dependiendo de la implementación, pueden existir casos peores de complejidad, por ejemplo, en el caso de una matriz implementada, si se agrega un elemento al final y se alcanza el límite de la matriz, se necesita reorganizar la matriz entera, lo que resulta en una complejidad de tiempo cuadrática.

En resumen, el dequeue es una estructura de datos versátil que combina características de una pila y una cola y permite agregar y eliminar elementos tanto desde la parte frontal como desde la parte trasera con una complejidad de tiempo lineal en promedio. Sin embargo, dependiendo de la implementación, pueden existir casos peores de complejidad.