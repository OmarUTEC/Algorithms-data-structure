let user = {
    name: 'Kenneth',
    age: 28,
    data: {
      username: 'kennethCodesAllDay',
      joinDate: 'March 26, 2016',
      organization: 'freeCodeCamp',
      friends: [
        'Sam',
        'Kira',
        'Tomo'
      ],
      location: {
        city: 'San Francisco',
        state: 'CA',
        country: 'USA'
      }
    }
  };
  
  function addFriend(userObj, friend) {
    // se utiliza la propiedad data del objeto de usuario para acceder a la matriz de amigos
    userObj.data.friends.push(friend);
    // se agrega el nombre del amigo a la matriz usando el método `push`
    return userObj.data.friends;
    // se devuelve la matriz de amigos actualizada
  }
  
console.log(addFriend(user, 'Pete'));
// se llama a la función `addFriend` y se muestra la matriz de amigos actualizada por consola

// Output: 
[ 'Sam', 'Kira', 'Tomo', 'Pete' ]