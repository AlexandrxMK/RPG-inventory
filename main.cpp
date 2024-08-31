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
    int comand;

    printMenu();

    while(cin >> comand, comand) {
        cin.ignore();

        switch(comand) {
            case 1: {
                int tipo;
                cout << "Digite o tipo de item (0 - Arma | 1 - Pocao | 2 - Anel): ";
                cin >> tipo;
                cin.ignore();

                switch(tipo) {
                    case 0:
                        inventario->create(utils::createArma());
                        break;
                    case 1:
                        inventario->create(utils::createPocao());
                        break;
                    case 2:
                        inventario->create(utils::createAnel());
                        break;
                    default:
                        cout << "Tipo invalido!" << endl; 
                }
            }
                break;
            case 2: {
                string auxNome;

                cout << "Digite o nome do item que deseja pesquisar: ";
                getline(cin, auxNome);

                vector<int> aux = inventario->readOne(auxNome);

                if (aux.size()) {
                  for (int i : aux) cout << "Index: " << i << endl << inventario->readOne(i)->getNome();
                } else {
                  cout << "Not Found" << endl;
                }
            }
                break;
            case 3: {
                cout << "ReadAll";
            }
                break;
            case 4: {
                cout << "UPDATE";
            }
                break;
            case 5: {
                cout << "DELETE";
            }
            case 6: {
                inventario->relatorio();
            }
                break;
            case 0: {
                cout << "======================" << endl;
                cout << "Saindo do Programa." << endl;
            }
        }

        printMenu();
    }

    return 0;
}
