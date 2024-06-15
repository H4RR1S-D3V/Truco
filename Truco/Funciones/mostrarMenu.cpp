#include <iostream>
#include <windows.h>

#include "mostrarMenu.h"
#include "jugar.h"
#include "elegirOpcion.h"

using namespace std;

void mostrarMenu()
{
    cout << "EMULO QUE MUESTRO EL MENU";

    char opcion;

    do
    {

        cout << "1: JUGAR" << endl;
        cout << "2: REGLAS" << endl;
        cout << "3: CREDITOS" << endl;
        cout << "-------------" << endl;
        cout << "0: SALIR" << endl;
        cout << "-------------" << endl;
        cout << "ELIJA UNA OPCION: " << endl;

        cin >> opcion;

        elegirOpcion(opcion);

    }
    while(opcion != '0');
}
