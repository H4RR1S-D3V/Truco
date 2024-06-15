#include <iostream>
#include "jugar.h"
#include "robarMano.h"

void jugar()
{
    /*
        FLUJO:
            1. ROBAR
            2. CHEQUEAR
            3. ROBAR 2
            4. CHEQUEAR 2
            5. COMPARAR
            6. JUGADOR 1
                {

                }
            7. JUGADOR 2
                {

                }
    */
    int vManoJugador1[3];
    int vManoJugador2[3];

    robarMano(vManoJugador1);

}
