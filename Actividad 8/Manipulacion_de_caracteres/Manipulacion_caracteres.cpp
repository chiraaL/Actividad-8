#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char letra = 'a'; // Declaración de un carácter
    char mayuscula = toupper(letra); // Convertir carácter a mayúscula usando función toupper() de biblioteca cctype
    cout << "La letra en mayúscula es: " << mayuscula << endl; // Imprimir el carácter en mayúscula
    cin.get();
    return 0;
}
