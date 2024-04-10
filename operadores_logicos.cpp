#include <iostream>

using namespace std;

/*
     [] declarar 4 variables tipo int
     [] declaramos una variable para el resultado de la operacion (tipo bool)
     [] inicializamos las variables
     [] realizamos una operacion aritmetica y de logica
     [] mostramos el resultado
*/

int main() {

    int n1, n2, n3, n4;

    bool respuesta;

    n1 = 5;
    n2 = 10;
    n3 = 15;
    n4 = 10;

    respuesta = ( n1 > n2 ); // da false (0)
    respuesta = ( n1 < n2 ); // da true (1)

    cout << respuesta << endl;


    return 0;

}

/*

 asignacion  [ = ]
 comparacion [ == ]
  negacion   [ != ]
  mayor que  [ > ]
  menor que  [ < ]
    and      [ && ]
     or      [ || ]

*/
