#include <iostream>
using namespace std;

// Función para sumar los elementos de un arreglo
int sumaArreglo(int arr[], int tam) {
    int suma = 0;
    for (int i = 0; i < tam; ++i) {
        suma += arr[i]; // Suma los elementos del arreglo
    }
    return suma;
}

int main() {
    int arreglo[] = {1, 2, 3, 4, 5};
    int tamano = sizeof(arreglo) / sizeof(arreglo[0]); // Calcula el tamaño del arreglo
    int resultado = sumaArreglo(arreglo, tamano); // Llama a la función para sumar los elementos del arreglo
    cout << "La suma de los elementos del arreglo es: " << resultado << endl; // Imprime el resultado
    cin.get();
    return 0;
    
}
