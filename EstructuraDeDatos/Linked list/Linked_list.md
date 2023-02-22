# Linket list

Una lista enlazada es una estructura de datos lineal en la que cada elemento es un nodo que contiene un valor y un enlace a otro nodo. Cada nodo apunta al siguiente nodo en la lista, creando una secuencia de enlaces entre todos los nodos. La estructura completa se inicia con un nodo especial llamado nodo cabeza, que no tiene valor pero proporciona un punto de acceso a la lista. El último nodo en la lista apunta a null, indicando el final de la lista.

Una de las ventajas de las listas enlazadas es que son dinámicas y se pueden modificar fácilmente insertando o eliminando nodos en cualquier lugar de la lista. Sin embargo, el acceso a un nodo específico en la lista puede ser más lento que en otras estructuras de datos lineales, como matrices, ya que es necesario seguir los enlaces desde el principio hasta el nodo deseado.


|                    | Listas Enlazadas | Arrays |
|--------------------|------------------|--------|
| Tamaño             | Dinámico         | Fijo   |
| Inserción de elementos | Fácil           | Costoso (requiere desplazamiento de elementos) |
| Eliminación de elementos | Fácil           | Costoso (requiere desplazamiento de elementos) |
| Búsqueda de elementos | Lento (requiere recorrido secuencial) | Rápido (acceso directo a cualquier elemento a través del índice) |
| Uso de memoria    | Eficiente en términos de memoria (solo se asigna la memoria necesaria para cada elemento) | Puede haber desperdicio de memoria si no se utiliza la memoria asignada de manera eficiente |


