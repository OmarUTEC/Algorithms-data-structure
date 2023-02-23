/*
En JavaScript, una matriz unidimensional es una estructura de datos que almacena una colección
 de elementos en una sola dimensión. Cada elemento en la matriz se identifica por un 
 índice numérico que comienza desde cero.
*/

// Crear una matriz unidimensional de N elementos
var miMatriz = [elemento1, elemento2, elemento3, elementoN];

// Matriz vacía
var miMatriz = [];

// agregar elementos a la matriz con el método push
//unshift() -> agrega el elemento al principio
miMatriz.push(elemento);

// acceder a los elementos de la matriz a travé de su índice numérico
var primerElemento = miMatriz[0];
var segundoElemento = miMatriz[1];

// Recorrer los elementos de la matriz con el bucle for
for (var i = 0; i < miMatriz.length; i++) { // length devuelve el # elementos de la matriz
    console.log(miMatriz[i]);
  }


// EJERCICIO PRACTICO

/*
Hemos definido una función, mixedNumbersa la que le estamos pasando una matriz como argumento. Modifique
 la función usando push()y unshift()para agregar 'I', 2, 'three'al principio de la matriz y 7, 'VIII', 9
 al final para que la matriz devuelta contenga representaciones de los números 1-9 en orden.
*/

function mixedNumbers(arr) {
    // Only change code below this line
    arr.unshift('I',2,'three');
    arr.push(7,'VIII',9);
    // Only change code above this line
    return arr;
  }
  
  console.log(mixedNumbers(['IV', 5, 'six']));

  // Output : [ 'I', 2, 'three', 'IV', 5, 'six', 7, 'VIII', 9 ]

// Eliminar elementos de una matriz con pop() y shift()
// pop() -> elimina el elemento al final
// shift() -> elimina el elemento al principio

// EJERCICIO PRACTICO

function popShift(arr) {
    let popped = arr.pop(); // Change this line
    let shifted =arr.shift() ; // Change this line
    return [shifted, popped];
  }
  
  console.log(popShift(['challenge', 'is', 'not', 'complete']));

    // Output : [ 'challenge', 'complete' ]

// METODO slice()

/*
El método slice() es una función incorporada en JavaScript que se utiliza para crear una copia de una parte de una matriz 
original y devolverla como una nueva matriz, sin modificar la matriz original.

El método slice() toma dos argumentos opcionales: el índice de inicio (incluyendo el índice de inicio) y el índice final 
(excluyendo el índice final). Si no se especifican argumentos, se crea una copia completa de la matriz original.

El índice de inicio especifica el índice desde donde comenzará la copia de la matriz. Si el índice es negativo, la cuenta 
comienza desde el final de la matriz.

El índice final especifica hasta dónde se debe realizar la copia. Este índice también es opcional y si no se especifica, se 
copiarán todos los elementos hasta el final de la matriz. Si el índice final es negativo, se cuenta desde el final de la matriz.

El método slice() devuelve una nueva matriz que incluye los elementos de la matriz original que se copian. La matriz original no se modifica.
*/

// Algunos ejemplos

const arr = [1, 2, 3, 4, 5];

// Copia la matriz completa
const arrCopy = arr.slice();
console.log(arrCopy); // [1, 2, 3, 4, 5]

// Copia los primeros tres elementos de la matriz
const arrCopy2 = arr.slice(0, 3);
console.log(arrCopy2); // [1, 2, 3]

// Copia los elementos desde el índice 2 hasta el final de la matriz
const arrCopy3 = arr.slice(2);
console.log(arrCopy3); // [3, 4, 5]

// Copia los últimos dos elementos de la matriz
const arrCopy4 = arr.slice(-2);
console.log(arrCopy4); // [4, 5]

// Copia los elementos desde el índice -3 hasta el final de la matriz
const arrCopy5 = arr.slice(-3);
console.log(arrCopy5); // [3, 4, 5]

// La matriz original no se modifica
console.log(arr); // [1, 2, 3, 4, 5]


/// Copiar una matriz con el operador propagación

let thisArray = [true, true, undefined, false, null];
let thatArray = [...thisArray];

/*
thisArraypermanece sin cambios y thatArraycontiene los mismos elementos que thisArray.
*/


/*
every(): itera sobre cada elemento de la matriz y devuelve true si todos los elementos cumplen con 
una determinada condición, de lo contrario, devuelve false.

forEach(): itera sobre cada elemento de la matriz y ejecuta una función proporcionada para cada elemento.

map(): itera sobre cada elemento de la matriz y devuelve un nuevo array con los resultados de aplicar
 una función proporcionada a cada elemento.
*/