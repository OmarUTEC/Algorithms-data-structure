/*
n getter es una función que se utiliza para obtener el valor de una propiedad  
privada de una clase, mientras que un setter es una función que se utiliza para
 establecer o cambiar el valor de una propiedad privada de una clase. Ambos son 
 métodos especiales que se utilizan para acceder a las propiedades privadas de una clase.
*/

class CuentaBancaria {
    constructor() {
      this._saldo = 0;
    }
    
    get saldo() {
      return this._saldo;
    }
    
    set saldo(nuevoSaldo) {
      if (nuevoSaldo < 0) {
        console.log("Error: El saldo no puede ser menor que cero.");
      } else {
        this._saldo = nuevoSaldo;
      }
    }
  }
  
  const cuenta = new CuentaBancaria();
  cuenta.saldo = 100; // Llamado al setter
  console.log(cuenta.saldo); // Llamado al getter
  
  cuenta.saldo = -50; // Llamado al setter, pero genera un error
  console.log(cuenta.saldo); // Llamado al getter, pero sigue siendo 100
  