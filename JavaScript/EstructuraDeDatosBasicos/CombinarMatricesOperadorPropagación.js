
// Definimos una función llamada 'spreadOut'
function spreadOut() {
    // Creamos una matriz llamada 'fragment' con dos elementos
    let fragment = ['to', 'code'];
    // Creamos una matriz llamada 'sentence' que comienza con el elemento 'learning', luego se extiende con los elementos de la matriz 'fragment' usando el operador spread (spread operator), luego se agrega el elemento 'is' y finalmente el elemento 'fun'
    let sentence = ['learning', ...fragment, 'is', 'fun']; // Change this line
    // Devolvemos la matriz 'sentence'
    return sentence;
  }
  
  // Llamamos a la función 'spreadOut' y mostramos su resultado en la consola
  console.log(spreadOut());
  