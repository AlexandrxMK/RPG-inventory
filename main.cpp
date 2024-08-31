#include <iostream>
#include "./headers/Inventario.h"

using namespace std;

int main() {
    Inventario *inventario = new Inventario();
    int comand;

    while(cin >> comand, comand) {
        cin.ignore();

        switch(comand) {
            case 1: {
                int tipo;
                cout << "Digite o tipo de item(0 - Arma | 1 - Pocao | 2 - Anel): ";
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

            }
                break;
            case 3: {
                cout << "UPDATE";
            }
                break;
            case 4: {
                cout << "DELETE";
            }
                break;
            case 5: {
                inventario->relatorio();
            }
                break;
        }
    }

    return 0;
}
