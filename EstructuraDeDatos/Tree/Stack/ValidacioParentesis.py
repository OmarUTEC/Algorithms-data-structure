"""
Ejercicio: Validación de paréntesis

Dado una expresión matemática en forma de cadena, escribir un programa para determinar si los paréntesis están equilibrados. Por ejemplo, la cadena "(())" está equilibrada mientras que "())" no lo está.
"""

# Crear una pila vacía
stack = []

# Función para verificar si la expresión está equilibrada
def isBalanced(expression):
    for c in expression:
        # Si el carácter actual es un paréntesis de apertura "(", agregarlo a la pila
        if c == '(':
            stack.append(c)
        # Si el carácter actual es un paréntesis de cierre ")", extraer un elemento de la pila
        elif c == ')':
            # Si la pila está vacía después de extraer un elemento, la expresión no está equilibrada
            if len(stack) == 0:
                return False
            stack.pop()
    # Al final, si la pila está vacía, la expresión está equilibrada, de lo contrario, no está equilibrada
    return len(stack) == 0

# Solicitar al usuario que ingrese la expresión matemática
expression = input("Enter an expression: ")

# Verificar si la expresión está equilibrada y mostrar el resultado
if isBalanced(expression):
    print("The expression is balanced.")
else:
    print("The expression is not balanced.")
