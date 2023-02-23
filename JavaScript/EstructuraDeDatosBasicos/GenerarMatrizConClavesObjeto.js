let users = {
    Alan: {
      age: 27,
      online: false
    },
    Jeff: {
      age: 32,
      online: true
    },
    Sarah: {
      age: 48,
      online: false
    },
    Ryan: {
      age: 19,
      online: true
    }
  };
  

function getArrayOfUsers(obj) {
    // la función toma un objeto como argumento
    return Object.keys(obj);
    // se utiliza el método `Object.keys` para devolver un array que contiene los nombres de todas las propiedades del objeto
  }
  
  console.log(getArrayOfUsers(users));

/*
El método Object.keys() devuelve un array que contiene los nombres de todas las propiedades de un objeto como elementos. En este caso, Object.keys(obj) devuelve un array que contiene los nombres de todas las propiedades del objeto obj. Este array se devuelve directamente desde la función getArrayOfUsers.
*/