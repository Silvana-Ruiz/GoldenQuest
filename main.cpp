/* Silvana Dorita Ruiz Olivarría A01252346
Luis Rodolfo Bojórquez Pineda A01250513
TC1030
Programación Orientada a Objetos
Grupo 700
29 de mayo de 2021*/
#include<iostream>
#include<vector>
#include<string>
#include<limits>
using namespace std;

#include "Jugador.h"
#include "Troll.h"
#include "Sala.h"
#include "Cocina.h"
#include "CuartoArte.h"
#include "Habitacion.h"

void fight(vector<Personaje*> vecPersonaje){
    cout << "Even though I did not have enough coins, I will fight to win it all! Let's start the combat, Troll!" << endl;
    system("pause");
    system("cls");
    const int ATTACK = 20;
    
    while(vecPersonaje[0]->getVida()>0 || vecPersonaje[1]->getVida()>0){
        int hits = (rand() % ATTACK) + 1;
        
        if (vecPersonaje[0]->getVida()<=0 || vecPersonaje[1]->getVida()<=0){
            break;
        }
        vecPersonaje[0]->hit();
        vecPersonaje[1]->setVida(hits);
        if(vecPersonaje[0] -> getVida() < 0){
            vecPersonaje[0] -> setVidaZero();
        }
        if(vecPersonaje[1] -> getVida()< 0){
            vecPersonaje[1] -> setVidaZero();
                
        }
        cout << "The troll has " << vecPersonaje[1] -> getVida() << "% HP."  <<endl;
        cout << "You have " <<  vecPersonaje[0] -> getVida() << " % HP." << endl;
        cout << "..............................................." << endl;
        system("pause");
        if (vecPersonaje[0]->getVida()<=0 || vecPersonaje[1]->getVida()<=0){
            break;
        }

        else{
            vecPersonaje[1] ->hit();
            hits = (rand() % ATTACK) + 1;
            vecPersonaje[0]->setVida(hits);
            if(vecPersonaje[0] -> getVida() < 0){
                vecPersonaje[0] -> setVidaZero();
            }
            if(vecPersonaje[1] -> getVida()< 0){
                vecPersonaje[1] -> setVidaZero();
            }
            cout << "The troll has " << vecPersonaje[1] -> getVida() << "% HP."  <<endl;
            cout << "You have " <<  vecPersonaje[0] -> getVida() << " % HP." << endl;
            cout << "..............................................." << endl;
            system("pause");
        }

         
    }
    if(vecPersonaje[0]->getVida() == 0){
            cout<<"You lost and the troll stole your coins."<<endl;
            exit(1);
        }
    else{
        
        cout<<"You beat the troll"<<endl;
        cout<<"Wow, we made it! You can now take the riches and call yourself a winner."<<endl;
        system("pause");
        exit(1);
    }
}

void funcionfinal(vector<Personaje*> vecPersonaje){
    vector<Item*> inv1;
    cout<<"The door of the Secret room has been opened. Wow! I have never I my life seen this many gems, coins, and diamonds."<< endl
    << "The room is completely full of them! We have finally made it!" << endl;
    system("pause");
    cout<<"Suddenly, footsteps can be heard. A troll appears before our eyes and he does not seem friendly." << endl;
    system("pause");
    system("cls");
    cout << "Troll: So are you trying to steal my riches? Pathetic. Multiple people have tried it before and no one has been" << endl
    << "able to do so." << endl;
    system("pause");
    cout << "Troll: However, today I am feeling generous so I might allow you to leave with my riches only if you have more coins than me." <<endl
    << "Haha, but I doubt it, you will never take my riches." << endl;
    system("pause");
    system("cls");
    cout << "You have " << vecPersonaje[0]->getMonedas() << " coins." << endl;
    cout << "The troll has " << vecPersonaje[1]->getMonedas() << " coins." << endl;
    system("pause");
    if(vecPersonaje[0]->getMonedas() >= vecPersonaje[1]->getMonedas()){
        cout<<"Troll: I cannot belive this! I am not a lier, therefore, you are now the rightful owner of the riches. "<<endl;
        system("pause");
        cout<<"Wow, we made it! You can now take the riches and call yourself a winner."<<endl;
        system("pause");
        exit(1);
    }
    else{
        cout<<"Troll: I knew that you were set up for failure. No one will ever take my riches!"<<endl;
        system("pause");
        system("cls");
        inv1 = vecPersonaje[0]->getInventario();
        if(inv1.size() == 2){
            cout<<"Nonetheless, the medallion starts shining, its value is actually greater than all of the coins of the troll."<<endl;
            system("pause");
            cout<<"So, you have won all of the riches."<<endl;
            cout<<"Wow, we made it! You can now take the riches and call yourself a winner."<<endl;
            system("pause");
        }
        else{
            fight(vecPersonaje);
        }
    }

}

int main(){
    Moneda i1;
    Sala s1;
    Cocina c1;
    CuartoArte a1;
    Habitacion h1;


    string n = "";
    string resp = "";
    string resMedallon = "";
    int cuarto = 0;
    int nvalor = 0;
    int nvalor1 = 0;
    int oldvalor = 0;


    cout << "In a land far, far away, plenty of riches stay hidden. All of the individuals who have dared to seek them" << endl
    << "have lost their lives. Those with an eager heart expose themselves to the risks and decide to undertake the mission" << endl
    << "with the purpose of becoming victorious and finally, solving the mystery about the disappearances of the previous adventurers. " << endl
    << "The amount is located inside of a giant mansion with an eccentric aura, where there are four rooms that must be inspected " << endl
    << "head-to-toe; there is also another room but no one really knows what is inside of it since it is locked. These rooms have riddles"<< endl
    <<"that must be answered correctly to obtain coins gradually. This mission is not meant fo the impatient. However, just like in life " << endl
    << "there is always a shorter road. Legend says that a medallion exists, which is quite useful, although no one knows its function." << endl
    << "Only the people who have used it are familiar with its wonders."<< endl;
    system("pause");
    system("cls");
    cout << "Rumor says that not being greedy enough lead those audicious beings to lose it all." << endl;
    system("pause");
    cout << "Are you sure that you want to take part in this and risk it all to participate in the quest? " << endl;
    system("pause");
    cout << "Who is behind a all of these disappearances? " << endl;
    system("pause");
    system("cls");


    cout << "Oh! So you are the adventurer who wants to take part in this quest. I have heard awful stories related to this mission." << endl
    << "Legend says that only the reckless will survive. But, do not worry, I will guide you through it all and I will make sure that" << endl
    << "you leave the mansion with all the riches. Would you tell me your name again please?" << endl;

    cin >> n;

    cout << "Oh " << n << ", of course! I have heard lots about you. Well, nice to meet you."<<endl;
    system("pause");
    system("cls");

    vector<Personaje*> vecPersonaje;
    Personaje *objPersonaje;

    objPersonaje = new Jugador(n);
    vecPersonaje.push_back(objPersonaje);

    objPersonaje = new Troll();
    vecPersonaje.push_back(objPersonaje);

    nvalor1 = static_cast<Troll *>(vecPersonaje[1])->randomMonedas();
    vecPersonaje[1]->addItemMoneda();
    vecPersonaje[1]->setMonedas(nvalor1);


    cout<<"I will lead you to the mansion. As you can probably tell it is pretty lonely there. We"<<endl
    << "we should start walking now if we want to arrive by noon. The building is impressive, it" << endl
    << "sets the tone to the rest of the quest. The first time I ever saw it I was sort of scared," << endl
    << "but do not fear, you will be fine." << endl;
    system("pause");
    system("cls");
    cout<<"After an hour of walking, we have finally arrived to the location. The house has an obscure feel."<<endl
    << "Come in, do not shy away."<< endl;
    system("pause");
    cout << "There are four main rooms, the lounge, kitchen, arts room, and bedroom. All of these have a" <<endl
    << "riddle, which must be answered correctly to obtain coins. There is also a fifth room, but I am not "<< endl
    << "entirely sure of its inside because it is locked. Maybe if we answer all of the riddles available," << endl
    << "we would be able to maybe take a peak in the fifth room." << endl; 
    system("pause");
    system("cls");
    while(cuarto > 6 || cuarto < 1){
        cout<<"So, which room are you feeling?"<<endl; 
        cout << " [1] Lounge \n [2] Kitchen \n [3] Arts room \n [4] Bedroom \n [5] The secret room \n [6] Your Inventory \n [7] Give up" << endl;
        while(!(cin >> cuarto)){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input.  Try again:\n";
	    }
        system("cls");
        if(cuarto == 1){
            if(s1.getStatus() == false){

                s1.entrar();
                cout<<s1.getDescripCuarto()<<endl;
                system("pause");
                system("cls");
                int resp;
                s1.randomAcertijo();

                cout << s1.getAcertijo() << endl;

                cout<< "Choose your answer: "<<endl
                <<"[1] A coin"<<endl
                <<"[2] Your word"<<endl
                <<"[3] A riddle"<<endl
                <<"[4] A secret"<<endl;

                cin >> resp; //respuesta de opción múltiple al acertijo
                if(s1.getRespCorrecta() != resp){
                    cout << "Oh no! The answer is wrong, we have failed to correctly solve the riddle. We have to enter this room again and try to guess correctly the riddle." << endl;
                    system("pause");
                    system("cls");
                }
                else{
                    cout << "You are terrific! You have the skills of a detective! You have adquired coins."<<endl;
                    if(vecPersonaje[0]->getMonedas() == 0){
                        vecPersonaje[0]->addItemMoneda();
                        i1.use();
                        nvalor = i1.getValor();
                        vecPersonaje[0]->setMonedas(nvalor);
                    }
                    else{
                        i1.use();
                        nvalor = i1.getValor();
                        oldvalor = vecPersonaje[0]->getMonedas();
                        nvalor = oldvalor + nvalor;
                        vecPersonaje[0]->setMonedas(nvalor);
                    }
                s1.setStatus(true);
                } 
                cuarto = 0;
                s1.salir();
                system("pause");
                system("cls");
            }
            else{
                cout<<"We have already entered this room."<<endl;
                system("pause");
                system("cls");
                cuarto = 0;
            }
        }
        else if(cuarto == 2){
                if(c1.getStatus() == false){

                c1.entrar();
                cout<<c1.getDescripCuarto()<<endl;
                system("pause");
                system("cls");

                int resp;
                c1.randomAcertijo();
                cout << c1.getAcertijo() << endl;

                cout<< "Choose your answer: "<<endl
                <<"[1] Food"<<endl
                <<"[2] A tongue"<<endl
                <<"[3] Time"<<endl
                <<"[4] A fire"<<endl;

                cin >> resp; //respuesta de opción múltiple al acertijo
                if(c1.getRespCorrecta() != resp){
                    cout << "Oh no! The answer is wrong, we have failed to correctly solve the riddle. We have to enter this room again and try to guess correctly the riddle." << endl;
                    system("pause");
                    system("cls");
                    }
                else{
                    cout << "You are terrific! You have the skills of a detective! You have adquired coins."<<endl;
                    if(vecPersonaje[0]->getMonedas() == 0){
                        vecPersonaje[0]->addItemMoneda();
                        i1.use();
                        nvalor = i1.getValor();
                        vecPersonaje[0]->setMonedas(nvalor);
                        
                    }
                    else{
                        i1.use();
                        nvalor = i1.getValor();
                        oldvalor = vecPersonaje[0]->getMonedas();
                        nvalor = oldvalor + nvalor;
                        vecPersonaje[0]->setMonedas(nvalor);
                    }
                c1.setStatus(true);    
                } 
                cuarto = 0;
                c1.salir();
                system("pause");
                system("cls");
            }
            else{
                cout<<"We have already entered this room."<<endl;
                system("pause");
                system("cls");
                cuarto = 0;
            }
        }
        else if(cuarto == 3){
                if(a1.getStatus() == false){

                a1.entrar();
                cout<<a1.getDescripCuarto()<<endl;
                system("pause");
                system("cls");
                int resp;
                a1.randomAcertijo();

                cout << a1.getAcertijo() << endl;

                cout<< "Choose your answer: "<<endl
                <<"[1] A chest"<<endl
                <<"[2] A piano"<<endl
                <<"[3] Deck of Cards"<<endl
                <<"[4] A map"<<endl;

                cin >> resp; //respuesta de opción múltiple al acertijo
                if(a1.getRespCorrecta() != resp){
                    cout << "Oh no! The answer is wrong, we have failed to correctly solve the riddle. We have to enter this room again and try to guess correctly the riddle." << endl;
                    system("pause");
                    system("cls");
                    }
                else{
                    cout << "You are terrific! You have the skills of a detective! You have adquired coins."<<endl;
                    if(vecPersonaje[0]->getMonedas() == 0){
                        vecPersonaje[0]->addItemMoneda();
                        i1.use();
                        nvalor = i1.getValor();
                        vecPersonaje[0]->setMonedas(nvalor);
                        
                    }
                    else{
                        i1.use();
                        nvalor = i1.getValor();
                        oldvalor = vecPersonaje[0]->getMonedas();
                        nvalor = oldvalor + nvalor;
                        vecPersonaje[0]->setMonedas(nvalor);
                        cout<<vecPersonaje[0]->getMonedas()<<endl;
                    }
                a1.setStatus(true);    
                } 
                cuarto = 0;
                a1.salir();
                system("pause");
                system("cls");
            }
            else{
                cout<<"We have already entered this room."<<endl;
                system("pause");
                system("cls");
                cuarto = 0;
            }
        }
        else if(cuarto == 4){
                if(h1.getStatus() == false){

                h1.entrar();
                cout<<h1.getDescripCuarto()<<endl;
                system("pause");
                system("cls");
                int resp;
                h1.randomAcertijo();

                cout << h1.getAcertijo() << endl;

                cout<< "Choose your answer: "<<endl
                <<"[1] Shoes"<<endl
                <<"[2] Your name"<<endl
                <<"[3] A hourglass"<<endl
                <<"[4] Oxygen"<<endl;

                cin >> resp; //respuesta de opción múltiple al acertijo
                if(h1.getRespCorrecta() != resp){
                    cout << "Oh no! The answer is wrong, we have failed to correctly solve the riddle. We have to enter this room again and try to guess correctly the riddle." << endl;
                    system("pause");
                    system("cls");
                    
                    }
                else{
                    cout << "You are terrific! You have the skills of a detective! You have adquired coins."<<endl;
                    if(vecPersonaje[0]->getMonedas() == 0){
                        vecPersonaje[0]->addItemMoneda();
                        i1.use();
                        nvalor = i1.getValor();
                        vecPersonaje[0]->setMonedas(nvalor);
                    }
                    else{
                        i1.use();
                        nvalor = i1.getValor();
                        oldvalor = vecPersonaje[0]->getMonedas();
                        nvalor = oldvalor + nvalor;
                        vecPersonaje[0]->setMonedas(nvalor);
                    }
                h1.setStatus(true);    
                } 
                cuarto = 0;
                h1.salir();
                system("pause");
                system("cls");
            }
            else{
                cout<<"We have already entered this room."<<endl;
                system("pause");
                system("cls");
                cuarto = 0;
            }
        }
        else if(cuarto == 5){
            if(s1.getStatus() == true && c1.getStatus() == true && a1.getStatus() == true && h1.getStatus() == true){
                cout<<"An image is suddenly visible on the door of the secret room, an emblem that represent each of the"<<endl
                << "past rooms is shown. A new previously not visible saying appears on the wall. It reads the following:"<< endl;
                system("pause");
                system("cls");
                cout<<"Who is behind of all the disappearances? (Give a single-word answer.)"<<endl;
                cin>>resMedallon;
                if(resMedallon == "troll" ||resMedallon == "Troll" || resMedallon == "Trol" || resMedallon == "TROLL" || resMedallon == "trol" ){
                    vecPersonaje[0]->addItemMedallon();
                    cout << "Congratulations! You have adquired the medallion, only those with a top-analyzing skills have gotten it." << endl
                    << "Its use is not clear for now, but it is important." << endl;

                    system("pause");
                    system("cls");
                    funcionfinal(vecPersonaje);
                }
                else{
                    funcionfinal(vecPersonaje);
                }
            }
            else{
                cout<<"I think that we have not searched in all of the previous rooms. We should probably go back and chechk which are we missing to answer the riddle in."<<endl;
                system("pause");
                system("cls");
                cuarto = 0;
            }
        }
        else if(cuarto == 6){
            vecPersonaje[0]->showInventory();
            system("pause");
            system("cls");
            cuarto = 0;
        }
        else if(cuarto == 7){
            cout<<"Better luck next time!"<<endl;
            system("pause");
            exit(1);
        }
        else{
            cout<<"We should try another number from the ones shown."<<endl; 
            cout<<cuarto<<endl;          
            cuarto = 0;
        }
    }
    return 0;
}
