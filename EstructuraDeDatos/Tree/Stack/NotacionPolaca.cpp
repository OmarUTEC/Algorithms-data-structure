/*
Evaluar una expresión en notación polaca inversa (también conocida como RPN) utilizando una pila. La expresión se representa como una cadena de caracteres, donde los números son operandos y los operadores son caracteres como +, -, * y /. La solución consiste en recorrer la cadena de caracteres y cuando se encuentra un operando, agregarlo a la pila de operandos. Cuando se encuentra un operador, se toman los dos últimos operandos de la pila, se aplica el operador y se guarda el resultado en la pila. Al final, la última cosa en la pila es el resultado de la expresión.
*/

#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Función para evaluar una expresión en notación polaca inversa
int evaluate(string expression) {
  stack<int> operandStack; // Pila para almacenar los operandos

  // Recorrer cada carácter en la expresión
  for (char c : expression) {
    if (isdigit(c)) { // Si el carácter es un dígito, agregarlo a la pila de operandos
      operandStack.push(c - '0');
    } else { // Si el carácter es un operador
      int op2 = operandStack.top(); // Obtener el segundo operando
      operandStack.pop();
      int op1 = operandStack.top(); // Obtener el primer operando
      operandStack.pop();
      int result; // Variable para almacenar el resultado
      switch (c) {
        case '+':
          result = op1 + op2;
          break;
        case '-':
          result = op1 - op2;
          break;
        case '*':
          result = op1 * op2;
          break;
        case '/':
          if (op2 == 0) {
            cout << "Error: división por cero" << endl;
            return 0;
          }
          result = op1 / op2;
          break;
        default:
          cout << "Error: operador desconocido" << endl;
          return 0;
      }
      operandStack.push(result); // Guardar el resultado en la pila de operandos
    }
  }

  if (operandStack.size() != 1) {
    cout << "Error: expresión inválida" << endl;
    return 0;
  }

  return operandStack.top(); // Devolver el resultado final
}

int main() {
  string expression = "42*1+3+"; // (4*2)+1+3=12
  cout << "Resultado: " << evaluate(expression) << endl;
  return 0;
}
