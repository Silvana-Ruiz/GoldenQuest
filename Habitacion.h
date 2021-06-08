<<<<<<< Updated upstream
/* Silvana Dorita Ruiz Olivarría A01252346
Luis Rodolfo Bojórquez Pineda A01250513
TC1030
Programación Orientada a Objetos
Grupo 700
29 de mayo de 2021*/

#include "Cuartos.h"

class Habitacion: public Cuarto{
    public:
        Habitacion();
        void randomAcertijo();
};

Habitacion::Habitacion(){
    descripCuarto = "This room has a really big bed, next to it it there is are big-brown shoes. The floor is covered with a purple carpet and the ceiling is painted green.";
    status = false; // singnifica que el cuarto no esta completado
    acertijo  = "Aquí va el acertijo";
    respCorrecta  = 1; //La respuesta 1 es blablabla
}

void Habitacion::randomAcertijo(){
    srand(time(0));


    Sleep(500);
    srand (time(NULL));
    int min = 1;
    int max = 4;
    int range = max - min + 1;
    int race = rand() % range + min;
    

    if(race == 1){
        acertijo = "The more you walk on me the more we get along, and while other may still use me, with you is where I belong.";
        respCorrecta = 1; //Shoes
    }

    else if(race == 2){
        acertijo = "What belongs to you, but other people use it more than you do?";
        respCorrecta = 2; //Your name
    }

    else if(race == 3){
        acertijo = "Two bodies in one, the longer I stand, the faster I run. ";
        respCorrecta = 3; //A hourglass
    }

    else if(race == 4){
        acertijo = "You never see it, but it's almost always there, and most people quickly notice when it's absent.";
        respCorrecta = 4; //Oxygen
    }

}
=======
/* Silvana Dorita Ruiz Olivarría A01252346
Luis Rodolfo Bojórquez Pineda A01250513
TC1030
Programación Orientada a Objetos
Grupo 700
29 de mayo de 2021*/

#include "Cuartos.h"

class Habitacion: public Cuarto{
    public:
        Habitacion();
};

Habitacion:: Habitacion(){
    descripCuarto = "Descripcion de habitacion";
    status = false;
    acertijo = "";
}
>>>>>>> Stashed changes
