#include <iostream>
#include "./headers/Inventario.h"

using namespace std;

void printMenu() {
    cout << endl;
    cout << "=============================" << endl;
    cout << "        MENU PRINCIPAL       " << endl;
    cout << "=============================" << endl;
    cout << "1 - Create" << endl;
    cout << "2 - ReadOne" << endl;
    cout << "3 - ReadAll" << endl;
    cout << "4 - Update" << endl;
    cout << "5 - Delete" << endl;
    cout << "6 - Relatorio" << endl;
    cout << "0 - Sair" << endl;
    cout << "=============================" << endl;
    cout << endl;
}

int main() {
    Inventario *inventario = new Inventario();
    string auxNome;
    int comand;

    printMenu();

    while(cin >> comand, comand) {
        cin.ignore();

        switch(comand) {
            case 1: {
                int type;
                cout << "Digite o tipo de item (0 - Arma | 1 - Pocao | 2 - Anel): ";
                cin >> type;
                cin.ignore();

                switch(type) {
                    case ARMA_TYPE:
                        inventario->create(utils::createArma());
                        break;
                    case POCAO_TYPE:
                        inventario->create(utils::createPocao());
                        break;
                    case ANEL_TYPE:
                        inventario->create(utils::createAnel());
                        break;
                    default:
                        cout << "Tipo invalido!" << endl; 
                }
            }
                break;
            case 2: {
                cout << "Digite o nome do item que deseja pesquisar: ";
                getline(cin, auxNome);
                inventario->readOne(auxNome);
            }
                break;
            case 3: {
                inventario->readAll();
            }
                break;
            case 4: {
                cout << "UPDATE";
            }
                break;
            case 5: {
                cout << "Digite o nome do item que deseja deletar: ";
                getline(cin, auxNome);
                inventario->Delete(auxNome);
            }
                break;
            case 6: {
                inventario->relatorio();
            }
                break;
        }

        printMenu();
    }
    
    cout << endl;
    cout << "=============================" << endl;
    cout << "Programa Encerrado." << endl;
    return 0;
}
