#include <iostream>
#include <fmt/core.h>
#include <fmt/format.h>
#include <fmt/color.h>
#include <fmt/ranges.h>
using namespace std;

//Repositorio consultado de la libreria fmt: https://github.com/fmtlib/fmt

int main(){
    fmt::print("Hola fmt\n");

    int n1 = 1;
    int n2 = 2;

    // Imprimiendo con fmt
    fmt::print("\nEl número 1 es: {}\nEl número 2 es: {}\n", n1, n2);
    /*
    //Haciendolo con cout
    cout << "El número 1 es: " << n1 << endl;
    cout << "El número 2 es: " << n2 << endl;
    */

    //Usando los índices de los argumentos/varibles para imprimir en diferente orden
    fmt::print("\nEl número 2 es: {1}\nEl número 1 es: {0}\nY el tercer número es: {1}\n", n1, n2);

   //Usando fmt::format, para almacenar una cadena con formato en una variable String
    string cadena = "2 + 2 es = 4";
    string cadena_formateada = fmt::format("\nEsta es mi cadena formateada: {}\n", cadena);
    cout << cadena_formateada;

   //Imprimiendo con color
    // fmt::print(bg(fmt::color::red), "\n\nProbando cadenas con color de fondo");

    fmt::print(fg(fmt::color::red) 
                | bg(fmt::color::light_gray) 
                | fmt::emphasis::underline , "\nC++ es bastante bueno");


    //Imprimiendo un vector
    int numeros[] = {0 ,1, 2, 3};
    fmt::print("\n\nEl vector de numeros es {}\n", numeros);
    
    //Usando fmt::join
    cout << "\nUsando fmt::join para imprimir un vector:";
    fmt::print("\nEl vector de numeros es [{}]\n", fmt::join(numeros, "; "));
    // fmt::print("\nEl vector de numeros es {{{}}}\n", fmt::join(numeros, ", "));

    // Esto no se puede hacer con cout a menos que se use un bucle for
    // cout << "Arreglo: " << numeros;

    fmt::print("{:_<30}\n", "Texto Izquierda"); //"Texto Izquierda" contiene 15 caracteres, en este caso se ajusta un campo de 16 espacios para ajustar el texto
    fmt::print("{:_>30}\n", "Texto Derecha"); // "Texto Derecha" contiene 13 caracteres, ... 14 espacios para ajustar el texto
    fmt::print("{:_^30}\n", "Texto centrado"); // "Texto centrado" contiene 14 caracteres, ...  16 espacios para ajustar el texto

    return 0;
}
