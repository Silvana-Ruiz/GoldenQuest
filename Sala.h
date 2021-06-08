/* Silvana Dorita Ruiz Olivarría A01252346
Luis Rodolfo Bojórquez Pineda A01250513
TC1030
Programación Orientada a Objetos
Grupo 700
29 de mayo de 2021*/

#include "Cuartos.h"

class Sala: public Cuarto{
    public:
        Sala();
        void randomAcertijo();
        
};

Sala::Sala(){
    descripCuarto = "This room has a huge sofa and Tv. The Tv is turned on and tuned in a cooking channel for mythical cratures. Everything looks pretty neat.";
    status = false; // singnifica que el cuarto no esta completado
    acertijo  = "Acertijo";
    respCorrecta  = 1; //La respuesta es 1
}

void Sala::randomAcertijo(){
    srand(time(0));


    Sleep(500);
    srand (time(NULL));
    int min = 1;
    int max = 4;
    int range = max - min + 1;
    int race = rand() % range + min;

    if(race == 1){
        acertijo = "It has a golden head. It has a golden tail. It has no body.";
        respCorrecta = 1; //A coin
    }

    else if(race == 2){
        acertijo = "What must you first give to me in order to keep it?";
        respCorrecta = 2; //Your word
    }

    else if(race == 3){
        acertijo = "When one does not know what it is, then it is something. When one knows what it is, then it is nothing.";
        respCorrecta = 3; //A riddle.
    }

    else if(race == 4){
        acertijo = "You keep it, but it never ages. Once shared it is gone forever.";
        respCorrecta = 4; //A secret
    }

}