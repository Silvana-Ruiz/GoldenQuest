/* Silvana Dorita Ruiz Olivarría A01252346
Luis Rodolfo Bojórquez Pineda A01250513
TC1030
Programación Orientada a Objetos
Grupo 700
29 de mayo de 2021*/
#ifndef Items_h
#define Items_h

class Item{
    protected:
        string name;
        string descripcion;
        int valor;
    public:
        Item();

        virtual string getName();
        virtual string getDescripcion();
        virtual int getValor();

        virtual void use();

};

Item::Item(){
    name = "";
    descripcion = "";
    valor = 0;
}

string Item::getName(){
    return name;
}

string Item::getDescripcion(){
    return descripcion;
}

int Item::getValor(){
    return valor;
}

void Item::use(){
    cout<<"Este use no se debe llamar"<<endl;
}

#endif