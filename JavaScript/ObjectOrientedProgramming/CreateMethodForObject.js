const persona = {
    nombre: "Juan",
    apellido: "Pérez",
    edad: 30,
    saludar: function() {
      console.log("Hola, mi nombre es " + this.nombre + " " + this.apellido + ".");
    }
  };

persona.saludar();

/*
En este ejemplo, persona es un objeto con cuatro propiedades: nombre, apellido, edad y saludar. La propiedad saludar es una función que utiliza console.log() para imprimir un saludo con el nombre y el apellido de la persona.
*/



function Persona(nombre, apellido, edad) {
    this.nombre = nombre;
    this.apellido = apellido;
    this.edad = edad;
    this.saludar = function() {
      console.log("Hola, mi nombre es " + this.nombre + " " + this.apellido + ".");
    }
  }
  
  const persona1 = new Persona("Juan", "Pérez", 30);
  const persona2 = new Persona("María", "González", 25);
  
  persona1.saludar(); // Imprime "Hola, mi nombre es Juan Pérez."
  persona2.saludar(); // Imprime "Hola, mi nombre es María González."
  

/*
En este ejemplo, Persona es una función constructora que crea objetos Persona. Los objetos Persona tienen las propiedades nombre, apellido, edad y saludar, que se definen dentro de la función constructora.

Es importante destacar que JavaScript también permite crear clases a partir de la versión ES6 (ECMAScript 2015) utilizando la palabra clave class. Sin embargo, estas clases son simplemente una forma más fácil de definir objetos y siguen siendo, en última instancia, objetos.
*/