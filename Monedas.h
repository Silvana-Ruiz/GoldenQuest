/* Silvana Dorita Ruiz Olivarría A01252346
Luis Rodolfo Bojórquez Pineda A01250513
TC1030
Programación Orientada a Objetos
Grupo 700
29 de mayo de 2021*/
#include "Items.h"
#include <stdlib.h>
#include <stdio.h> 
#include <time.h> 
#include <Windows.h>

class Moneda: public Item{
    public:
        Moneda();
        void use();

};

Moneda::Moneda(){
    name = "Coins";
    descripcion = "You have adquired coins!";
    valor = 0; 
}

void Moneda::use(){
    srand(time(0));

    Sleep(500);
    srand (time(NULL));
    int min = 10;
    int max = 25;
    int range = max - min + 1;
    valor = rand() % range + min;
    cout<<"You have adquired "<< valor << " coins."<<endl;

}