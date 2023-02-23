/*
Restringir posibles nombres de usuario
Los nombres de usuario se utilizan en todas partes en Internet. Son los que dan a los usuarios una identidad única en sus sitios favoritos.

Debe verificar todos los nombres de usuario en una base de datos. Aquí hay algunas reglas simples que los usuarios deben seguir al crear su nombre de usuario.

1. Los nombres de usuario solo pueden usar caracteres alfanuméricos.

2. Los únicos números en el nombre de usuario deben estar al final. Puede haber cero o más de ellos al final. El nombre de usuario no puede comenzar con el número.

3. Las letras del nombre de usuario pueden ser minúsculas y mayúsculas.

4. Los nombres de usuario deben tener al menos dos caracteres. Un nombre de usuario de dos caracteres solo puede usar letras del alfabeto como caracteres.

Task => Cambie la expresión regular userCheckpara que se ajuste a las restricciones enumeradas anteriormente.
 */

let username = "JackOfAllTrades";
let userCheck = /^[a-z][a-z]+\d*$|^[a-z]\d\d+$/i;
let result = userCheck.test(username);
console.log(result)

/*
Explicación:

^: coincidir al inicio de la cadena
[a-zA-Z]{2,}: coincidir con dos o más letras del alfabeto (mayúsculas o minúsculas)
\d*: coincidir con cero o más dígitos numéricos al final del nombre de usuario
$: coincidir con el final de la cadena
Esta expresión regular coincide con nombres de usuario que comienzan con dos o más letras del alfabeto, seguidas de cero o más dígitos numéricos. En particular, satisface las restricciones especificadas de que los nombres de usuario no pueden comenzar con un número, solo pueden usar caracteres alfanuméricos y los únicos números permitidos deben estar al final.

*/

// Pruebas:

console.log(userCheck.test("BadUs3rnam3")); // false
console.log(userCheck.test("Z97")); // true
