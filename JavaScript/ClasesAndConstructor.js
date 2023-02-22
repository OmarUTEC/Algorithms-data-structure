
class Cat{
    constructor(nombre, color, patas){
        this.nombre = nombre;
        this.color = color;
        this.patas = patas;
    }
    saludar(){
        console.log(`Hola, soy ${this.nombre}`);
    }
}

const gato = new Cat('Depay', 'Gris', 4);
//console.log(gato);

// Using the saludar method
gato.saludar();

// Class Person
class Persona {
    constructor(nombre, edad, genero) {
      this.nombre = nombre;
      this.edad = edad;
      this.genero = genero;
    }
    
    obtenerNombre() {
      return this.nombre;
    }
    
    obtenerEdad() {
      return this.edad;
    }
    
    obtenerGenero() {
      return this.genero;
    }
  }
  
  const persona1 = new Persona("Juan", 25, "masculino");
  console.log(persona1.obtenerNombre()); // "Juan"
  console.log(persona1.obtenerEdad()); // 25
  console.log(persona1.obtenerGenero()); // "masculino"
  