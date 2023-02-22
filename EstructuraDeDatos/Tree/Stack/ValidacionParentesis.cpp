/*
Ejercicio: Validación de paréntesis

Dado una expresión matemática en forma de cadena, escribir un programa para determinar si los paréntesis están equilibrados. Por ejemplo, la cadena "(())" está equilibrada mientras que "())" no lo está.

Solución:

1. Crear una pila vacía
2. Recorrer la cadena de expresión matemática:
    a. Si el carácter actual es un paréntesis de apertura "(", agregarlo a la pila.
    b. Si el carácter actual es un paréntesis de cierre ")", extraer un elemento de la pila.
    c. Si la pila está vacía después de extraer un elemento o si el carácter actual no es un paréntesis, la expresión no está equilibrada.
3. Al final, si la pila está vacía, la expresión está equilibrada, de lo contrario, no está equilibrada.
*/

#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Función para verificar si la expresión está equilibrada
bool isBalanced(string expression) {
    // Crear una pila vacía
    stack<char> stk;
    // Recorrer la cadena de expresión matemática
    for (char c : expression) {
        // Si el carácter actual es un paréntesis de apertura "(", agregarlo a la pila
        if (c == '(') {
            stk.push(c);
        // Si el carácter actual es un paréntesis de cierre ")", extraer un elemento de la pila
        } else if (c == ')') {
            // Si la pila está vacía después de extraer un elemento, la expresión no está equilibrada
            if (stk.empty()) {
                return false;
            }
            stk.pop();
        }
    }
    // Al final, si la pila está vacía, la expresión está equilibrada, de lo contrario, no está equilibrada
    return stk.empty();
}

int main() {
    string expression;
    // Solicitar al usuario que ingrese la expresión matemática
    cout << "Enter an expression: ";
    cin >> expression;
    // Verificar si la expresión está equilibrada y mostrar el resultado
    if (isBalanced(expression)) {
        cout << "The expression is balanced." << endl;
    } else {
        cout << "The expression is not balanced." << endl;
    }
    return 0;
}
