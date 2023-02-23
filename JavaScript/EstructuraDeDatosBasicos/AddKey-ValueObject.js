let foods = {
    apples: 25,
    oranges: 32,
    plums: 28
  };
  
  // En las siguientes líneas, estamos agregando tres nuevas propiedades a la variable "foods".
  foods.bananas = 13; // Agregamos la propiedad "bananas" con el valor de 13.
  foods['grapes']=35; // Agregamos la propiedad "grapes" con el valor de 35 utilizando la notación de corchetes.
  foods["strawberries"] = 27; // Agregamos la propiedad "strawberries" con el valor de 27 utilizando la notación de comillas dobles.
  
console.log(foods); // Imprimimos la variable "foods" en la consola para verificar que se hayan agregado correctamente las nuevas propiedades.

// Output : { apples: 25, oranges: 32, plums: 28, bananas: 13, grapes: 35, strawberries: 27 }
  