/* Silvana Dorita Ruiz Olivarría A01252346
Luis Rodolfo Bojórquez Pineda A01250513
TC1030
Programación Orientada a Objetos
Grupo 700
29 de mayo de 2021*/
#ifndef Personajes_h
#define Personajes_h

#include "Monedas.h"
#include "Medallon.h"

class Personaje {
    protected:
        string nombre;
        int monedas;
        int HP;
        vector<Item*> inventario;
    public:
        Personaje();
        Personaje(string);

        virtual string getName();
        virtual int getMonedas();
        virtual int getVida();
        virtual vector<Item*> getInventario();
        virtual void hit();

        void setMonedas(int);

        void setName(string);
        void setVida(int);
        void setVidaZero();

        void addItemMoneda();
        void addItemMedallon();

        void showInventory();

};

Personaje::Personaje() {
    nombre = "Nobody";
    HP = 0;
    monedas = 0;
} 

Personaje::Personaje(string nom) {
    nombre = nom;
}

string Personaje::getName(){
    return nombre;
}

int Personaje::getMonedas(){
    return monedas;
}

int Personaje::getVida(){
    return HP;
}

vector<Item*> Personaje::getInventario(){
    return inventario;
}

void Personaje::setMonedas(int mon){
    monedas = mon;
}

void Personaje::hit(){
    cout <<"The character hits someone." << endl;

}

void Personaje::addItemMoneda(){

    Item* objItems;

    objItems = new Moneda();

    inventario.push_back(objItems);
}

void Personaje::addItemMedallon(){

    Item* objItems;

    objItems = new Medallon();

    inventario.push_back(objItems);

}

void Personaje::setName(string n){
    nombre = n;
}

void Personaje::setVida(int v){
    HP = HP - v;
}
void Personaje::setVidaZero(){
    HP = 0;
}
void Personaje::showInventory(){
    
    cout <<endl;
    cout << "----------Displaying the Inventory:----------"<<endl;
    for(int i = 0; i<inventario.size(); i++){
        if(inventario[i]->getName() == "Coins"){
            cout<< inventario[i]->getName()<<"..... You got: "<<monedas<<endl;
            cout<< inventario[i]->getDescripcion()<<endl;
            cout<<endl;
        }
        else{
            cout<< inventario[i]->getName()<<endl;
            cout<< inventario[i]->getDescripcion()<<endl;
            cout<<endl;
        }
    }
}


#endif
