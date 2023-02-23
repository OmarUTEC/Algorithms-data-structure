/*
En JavaScript, una matriz bidimensional es una estructura de datos que almacena una colección
 de elementos en dos dimensiones. Esto significa que los elementos se organizan en filas y
  columnas, y se identifican por un par de índices numéricos: uno para la fila y otro para la columna.
*/

// crear una matriz bidimensional
var miMatriz = [
    [elemento11, elemento12, elemento13,  elemento1N],
    [elemento21, elemento22, elemento23,  elemento2N],
    [elementoM1, elementoM2, elementoM3,  elementoMN]
  ];
  
// Matriz vacía
var miMatriz = [[]];

// Agregar elementos utilizando los índices de filas y columnas
miMatriz[fila][columna] = valor;

// Recorrer los elementos de la matriz con el bucle for
for (var i = 0; i < miMatriz.length; i++) {
    for (var j = 0; j < miMatriz[i].length; j++) {
      console.log(miMatriz[i][j]);
    }
  }
  