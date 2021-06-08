/* Silvana Dorita Ruiz Olivarría A01252346
Luis Rodolfo Bojórquez Pineda A01250513
TC1030
Programación Orientada a Objetos
Grupo 700
29 de mayo de 2021*/

#include "Items.h"

class Medallon: public Item{
    public:
        Medallon();
        void use();

};

Medallon::Medallon(){
    name = "Medallon";
    descripcion = "This medallion is really precious and powerful.";
}


void Medallon::use(){
    cout<<"This medallion is really precious and powerful. Its function is currently unknown, though."<<endl;

}