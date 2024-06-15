#include <iostream>

#include "elegirOpcion.h"
#include "jugar.h"

using namespace std;

void elegirOpcion(char opcion)
{
    switch(opcion)
    {
    case 1:
        jugar();
        break;
    case 2:
        reglas();
        break;
    case 3:
        creditos();
        break;
    default:
        cout << endl << "ELIJA UNA OPCION VALIDA" << endl;
        break;
    }
}
