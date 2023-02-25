// Se define una función constructora llamada "Dog" que recibe dos argumentos: "name" y "color".
function Dog(name, color) {
    // Se asigna el valor del argumento "name" a la propiedad "name" del objeto que se está creando con la función constructora.
    this.name = name,
    // Se asigna el valor del argumento "color" a la propiedad "color" del objeto que se está creando con la función constructora.
    this.color = color,
    // Se asigna el valor 4 a la propiedad "numLegs" del objeto que se está creando con la función constructora.
    this.numLegs = 4
  }
  
  // Se crea un nuevo objeto llamado "terrier" utilizando la función constructora "Dog" y se le asignan los valores "Depay" y "red" a las propiedades "name" y "color", respectivamente.
  let terrier = new Dog("Depay", "red")
  