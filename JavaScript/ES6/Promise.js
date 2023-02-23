/*
Una promesa tiene tres estados: pending, fulfilledy rejected. La promesa que creaste 
en el último desafío está bloqueada para siempre en el pendingestado porque no agregaste 
una forma de completar la promesa. Los parámetros resolvey rejectproporcionados al argumento
 de la promesa se utilizan para hacer esto. resolvese usa cuando quiere que su promesa tenga
  éxito y rejectse usa cuando quiere que falle. Estos son métodos que toman un argumento, 
  como se ve a continuación.
*/



// Creamos una nueva promesa utilizando la clase Promise
const makeServerRequest = new Promise((resolve, reject) => {
    // Creamos una variable para representar una respuesta del servidor
    let responseFromServer = true;
      
    // Usamos una declaración condicional para determinar si se debe resolver o rechazar la promesa
    if(responseFromServer) {
      // Si la respuesta del servidor es verdadera, resolvemos la promesa utilizando el método resolve y pasando una cadena de texto como argumento
      resolve("We got the data");
    } else {  
      // Si la respuesta del servidor es falsa, rechazamos la promesa utilizando el método reject y pasando una cadena de texto como argumento
      reject("Data not received");
    }
  });
  
  // Agregamos un método then para manejar el caso en que la promesa se resuelve
  makeServerRequest.then((message) => {
    console.log(message); // Imprimimos el mensaje "We got the data" en la consola
  }).catch((message) => {
    console.log(message); // Imprimimos el mensaje "Data not received" en la consola
  });
  