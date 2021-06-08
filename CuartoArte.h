/* Silvana Dorita Ruiz Olivarría A01252346
Luis Rodolfo Bojórquez Pineda A01250513
TC1030
Programación Orientada a Objetos
Grupo 700
29 de mayo de 2021*/

#include "Cuartos.h"

class CuartoArte: public Cuarto{
    public:
        CuartoArte();
        void randomAcertijo();
};

CuartoArte::CuartoArte(){
    descripCuarto = "This rooms looks like an art gallery. It is full of paintings of fairy-tale scenes.";
    status = false; // singnifica que el cuarto no esta completado
    acertijo  = "Aquí va el acertijo";
    respCorrecta  = 1; //La respuesta 1 es blablabla
}

void CuartoArte::randomAcertijo(){
    srand(time(0));


    Sleep(500);
    srand (time(NULL));
    int min = 1;
    int max = 4;
    int range = max - min + 1;
    int race = rand() % range + min;

    if(race == 1){
        acertijo = "I guard precious treasures and yet my body never moves, but I open like a book when something of yours is used.\n When finally I am gutted always feel quite blue. I always feel so useless without the gold that I consume.";
        respCorrecta = 1; //A chest
    }

    else if(race == 2){
        acertijo = "I am made out of five letters, And I am made out of seven letters; \nI have keys but I do not have locks, I am concerned with time, but not with clocks.";
        respCorrecta = 2; //A piano
    }

    else if(race == 3){
        acertijo = "Brought to the table. Cut and served. Never eaten.";
        respCorrecta = 3; //Deck of Cards
    }

    else if(race == 4){
        acertijo = "Towns without houses, forests without trees, mountains without boulders and waterless seas.";
        respCorrecta = 4; //A map
    }

}
