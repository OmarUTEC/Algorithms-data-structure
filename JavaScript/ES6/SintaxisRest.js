/*
La sintaxis rest (...) en JavaScript se utiliza para trabajar con argumentos de 
función variables y elementos de arreglo variables. El rest parameter syntax 
permite que una función acepte un número indefinido de argumentos como un arreglo.
*/

function sum(...numbers) {
  let total = 0;
  for (let number of numbers) {
    total += number;
  }
  return total;
}

console.log(sum(1, 2, 3, 4, 5)); // Output: 15
