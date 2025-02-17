#include <iostream>
#include <string>
using namespace std;

int main() {
    string cadena = "Programacion en C++"; // Declaración de una cadena de caracteres utilizando la clase string
    string subcadena = cadena.substr(13, 3); // Obtener subcadena "C++" utilizando el método substr() de clase string
    cout << "La subcadena es: " << subcadena << endl; // Imprimir la subcadena
    cin.get();
    return 0;
}
