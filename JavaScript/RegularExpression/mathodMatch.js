
/*
El método .match() en JavaScript se utiliza para buscar una expresión regular
 dentro de una cadena, y devuelve un array que contiene las ocurrencias 
 de la expresión regular en la cadena.

La sintaxis básica para utilizar el método .match() es la siguiente:

string.match(regexp)
*/



let myString = "The quick brown fox jumps over the lazy dog";
let regex = /dog/g;
let matches = myString.match(regex);
console.log(matches); // Devuelve ["dog"]

/*
En este ejemplo, la expresión regular /dog/g se utiliza para buscar todas las
 ocurrencias de la subcadena "dog" en myString. El modificador g al final de la 
 expresión regular indica que se deben buscar todas las ocurrencias en lugar 
 de detenerse en la primera coincidencia. El resultado se almacena en la variable
  matches, que es un array que contiene todas las ocurrencias de la expresión 
  regular en la cadena. En este caso, matches contendrá ["dog"].
*/

// IMPORTANTE

/*
La diferencia entre agregar /g y /gi a una expresión regular en JavaScript es 
que /g hace que la búsqueda de la expresión regular sea global, es decir, que 
buscará todas las ocurrencias de la expresión regular en la cadena, mientras 
que /gi hace que la búsqueda sea global e insensible a mayúsculas y minúsculas.
*/

// Metodo Match

let quoteSample = "The quick brown fox jumps over the lazy dog."; // Define una cadena de texto
let alphabetRegex = /[a-z]/gi; // Define una expresión regular que busca todas las letras del alfabeto inglés en minúscula o mayúscula
let result = quoteSample.match(alphabetRegex); // Busca todas las ocurrencias de las letras del alfabeto inglés en la cadena de texto y las almacena en la variable result
console.log(result); // Muestra el resultado en la consola del navegador o del entorno de ejecución de JavaScript

/*
En la segunda línea, la expresión regular alphabetRegex utiliza una clase de caracteres ([a-z]) para buscar todas las letras del alfabeto inglés en minúscula (a-z) o mayúscula (A-Z). El modificador /g indica que la búsqueda debe ser global y el modificador /i indica que la búsqueda debe ser insensible a mayúsculas y minúsculas.

En la tercera línea, se llama al método .match() en la cadena de texto quoteSample y se pasa la expresión regular alphabetRegex como argumento. El método .match() devuelve un array con todas las ocurrencias de la expresión regular en la cadena de texto. En este caso, result contendrá un array con todas las letras del alfabeto inglés que se encuentran en quoteSample, en orden de aparición.
*/