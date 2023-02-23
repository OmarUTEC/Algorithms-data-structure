let foods = {
    apples: 25,
    oranges: 32,
    plums: 28,
    bananas: 13,
    grapes: 35,
    strawberries: 27
  };
  
// Eliminamos la propiedad oranges del objeto foods
delete foods.oranges;
// Eliminamos la propiedad plums del objeto foods
delete foods.plums;
// Eliminamos la propiedad strawberries del objeto foods
delete foods.strawberries;
  
console.log(foods);