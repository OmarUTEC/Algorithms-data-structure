// Creamos un objeto llamado "userActivity" con tres propiedades: id, date y data.
let userActivity = {
    id: 23894201352,
    date: 'January 1, 2017',
    data: {
      totalUsers: 51,
      online: 42
    }
  };
  
  // Actualizamos la propiedad "online" del objeto "data" dentro de "userActivity".
  userActivity.data.online = 45;
  
  // Imprimimos el objeto "userActivity" en la consola para verificar que la propiedad "online" se haya actualizado correctamente.
  console.log(userActivity);

// Output : { id: 23894201352, date: 'January 1, 2017', data: { totalUsers: 51, online: 45 } }
  