/*
El operador typeof en JavaScript se utiliza para determinar el 
tipo de valor de una variable, expresión u objeto. Puedes usarlo 
de la siguiente manera:
*/

typeof variable

/*
Donde "variable" es la variable, expresión o objeto cuyo tipo de valor quieres conocer. El operador typeof devuelve una cadena de texto que representa el tipo de valor de la variable, expresión u objeto. Los posibles valores que puede devolver son:

"undefined": si la variable no está definida.
"boolean": si la variable es un valor booleano (true o false).
"number": si la variable es un número.
"string": si la variable es una cadena de texto.
"symbol": si la variable es un símbolo.
"bigint": si la variable es un número entero grande.
"object": si la variable es un objeto, un array o null (ten en cuenta que el operador typeof devuelve "object" para null, lo cual es un comportamiento peculiar de JavaScript).
"function": si la variable es una función.
Aquí tienes algunos ejemplos de cómo utilizar el operador typeof
*/

typeof 42; // devuelve "number"
typeof "hello"; // devuelve "string"
typeof true; // devuelve "boolean"
typeof undefined; // devuelve "undefined"
typeof null; // devuelve "object"
typeof []; // devuelve "object"
typeof {}; // devuelve "object"
typeof (() => {}); // devuelve "function"

/*
Es importante tener en cuenta que el operador typeof no funciona 
para determinar si una variable es un array. En su lugar, puedes 
utilizar el método Array.isArray() para ello.
*/