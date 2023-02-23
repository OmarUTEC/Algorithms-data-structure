/*
Se a utilizado la palabra clave export para exportar cada función individualmente con 
la sintaxis de exportación de ES6. Al usar export, podemos importar estas
 funciones desde otro archivo JavaScript en el mismo proyecto.

Ten en cuenta que cada función se exporta como una constante, utilizando la
 sintaxis de constante de ES6. También podemos usar la sintaxis de exportación 
 de objeto para exportar varias funciones en un solo objeto.
*/

const uppercaseString = (string) => {
    return string.toUpperCase();
  };
  
  const lowercaseString = (string) => {
    return string.toLowerCase();
  };
  

export { uppercaseString, lowercaseString };
  