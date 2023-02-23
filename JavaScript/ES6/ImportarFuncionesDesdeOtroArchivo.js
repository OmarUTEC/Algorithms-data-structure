// La sintaxis para importar funciones desde otro archivo en JavaScript es la siguiente:

import { funcion1, funcion2 } from './nombre-del-archivo.js';

/*
En este ejemplo, estamos importando las funciones funcion1 y funcion2 desde el archivo 
nombre-del-archivo.js.

Es importante tener en cuenta que la extensión .js es opcional, ya que los navegadores
 modernos pueden detectar el tipo de archivo automáticamente.

También podemos importar todas las funciones exportadas de un archivo utilizando la 
sintaxis de importación de asteriscos *:
*/

import * as funciones from './nombre-del-archivo.js';

/*
En este ejemplo, estamos importando todas las funciones exportadas del archivo 
nombre-del-archivo.js y las estamos almacenando en un objeto llamado funciones.

Una vez que hayas importado una función desde otro archivo, puedes usarla en tu archivo 
actual como si la hubieras definido en el archivo actual. Por ejemplo:
*/

import { funcion1 } from './nombre-del-archivo.js';

funcion1(); // Llama a la función "funcion1" desde el archivo "nombre-del-archivo.js"
