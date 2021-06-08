/* Silvana Dorita Ruiz Olivarría A01252346
Luis Rodolfo Bojórquez Pineda A01250513
TC1030
Programación Orientada a Objetos
Grupo 700
29 de mayo de 2021*/

#include "Cuartos.h"

class Cocina: public Cuarto{
    public:
        Cocina();
        void randomAcertijo();
};

Cocina::Cocina(){
    descripCuarto = "The kitchen is kind of messy, there are cooking books everywhere, these in particular included dishes fot fairies, dragons, dwarfs, trolls, and unicorns.";
    status = false; // singnifica que el cuarto no esta completado
    acertijo  = "Aquí va el acertijo";
    respCorrecta  = 1; //La respuesta 1 es blablabla
}

void Cocina::randomAcertijo(){
    srand(time(0));


    Sleep(500);
    srand (time(NULL));
    int min = 1;
    int max = 4;
    int range = max - min + 1;
    int race = rand() % range + min;

    if(race == 1){
        acertijo = "I am what is desired above of all fame and wealth. Without me it is assured that you will begin to lose your health.\nI am not a fluid dancer, but you can put me on a shelf. What am I? ";
        respCorrecta = 1; //Food
    }

    else if(race == 2){
        acertijo = "What tastes better than it smells?";
        respCorrecta = 2; //A tongue
    }
    
    else if(race == 3){
        acertijo = "The foolish man wastes me, The average man spends me, And wise man invests me, Yet all men succumb to me. What am I?";
        respCorrecta = 3; //Time 
    }

    else if(race == 4){
        acertijo = "What is not alive but grows, does not breaths but needs air.";
        respCorrecta = 4; //A fire
    }

}
