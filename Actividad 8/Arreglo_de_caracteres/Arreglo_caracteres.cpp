#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char cadena1[] = "Hola"; // Declaración de una cadena de caracteres
    char cadena2[] = " Mundo!"; // Declaración de otra cadena de caracteres
    char resultado[20]; // Declaración de un arreglo de caracteres para almacenar el resultado de la concatenación

    strcpy(resultado, cadena1); // Copiar cadena1 en resultado
    strcat(resultado, cadena2); // Concatenar cadena2 a resultado

    cout << "La cadena concatenada es: " << resultado << endl; // Imprimir el resultado de la concatenación
    cin.get();
    return 0;
}
