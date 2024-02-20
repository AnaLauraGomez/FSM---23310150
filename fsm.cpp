#include <iostream>


int main(int argc, char const *argv[])
{
    /* Máquinas de estado finito (FSM)

        Pérmite representar mediante un esquema el comportamiento de un sistema dado

        Es un sistema que va a tomar una entrada, esta va a modificar el estado en el que se encuentra y va a producir 
        una salida

        Una FSM es la representacion de un sistema que va a tomar una entrada, va a modificar el estado en el que se 
        encuentra y va a producir una salida
     */

    /* Elementos 

        Estados: Deben ser claramente definidos. 

        Transiciones: Debe haber una forma de definir cómo se realizan las transiciones entre los diferentes estados.

        Funciones de transición: Estas funciones se encargan de cambiar el estado de la máquina de acuerdo con ciertos eventos o condiciones.

        Funciones de consulta: Deben proporcionarse funciones para consultar el estado actual de la máquina.

        Clase de la máquina de estados: Es recomendable encapsular todos estos elementos en una clase que represente la máquina de estados. 
    */

   /* Estructura 

        Es necesario definir claramente los estados, las transiciones entre ellos, 
        implementar funciones de transición y consulta, y encapsular todo en una clase que represente la máquina de estados.
   */

  /* Implementacion en el codigo
  
    Se puede utilizar para controlar el flujo del juego, especialmente para manejar los diferentes estados del juego, 
    como el estado del combate teniendo en cuenta que existan stuns, habilidades, opcion de revivir etc. Ademas la opcion
    como en pokemon de legir iniciar o no la batalla con el enemigo 

    Tambien para la Lógica para el estado de fin de juego cuando el jugador muere, por ejemplo, 
    muestra la pantalla de fin de juego y espera que el usuario elija volver a empezar o salir del juego
    si el usuario elige volver a empezar podria cambiar el estado del juego a GameState::MainStart por ejemplos o
    si el usuario elige salir del juego, finaliza el bucle principal y termina el programa
  */



    

    
    return 0;
}
