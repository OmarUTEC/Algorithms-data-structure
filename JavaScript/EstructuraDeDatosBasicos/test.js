function factorialize(num) {
    cont = 1;
    for (let i =1; i<=num; i++){
      cont*=i;
    }
    
    return cont;
  }

  console.log(factorialize(5));

