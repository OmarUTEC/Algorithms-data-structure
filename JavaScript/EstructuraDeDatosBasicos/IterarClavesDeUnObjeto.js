const users = {
    Alan: {
      online: false
    },
    Jeff: {
      online: true
    },
    Sarah: {
      online: false
    }
  }

  function countOnline(usersObj) {
    let contador = 0;
    // se inicializa el contador en cero
    for (let user in usersObj) {
      // se itera sobre cada propiedad del objeto `usersObj`
      if (usersObj[user].online == true) {
        // si la propiedad `online` del usuario actual está establecida en true
        contador++;
        // se incrementa el contador en 1
      }
    }
    return contador;
    // se devuelve el valor final del contador
  }
  
// se llama a la función `countOnline` con el objeto `users` y se muestra el resultado por consola
console.log(countOnline(users));
// Output: 1


/*
En resumen, la función countOnline utiliza una estructura de control de flujo for...in para iterar sobre el objeto usersObj y verifica la propiedad online de cada usuario. Si la propiedad online está establecida en true, aumenta un contador. Finalmente, la función devuelve el valor final del contador que representa la cantidad de usuarios en línea.
*/