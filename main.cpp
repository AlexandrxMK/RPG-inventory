#include <iostream>
#include "./headers/Inventario.h"

using namespace std;

int main() {
    Inventario *inventario = new Inventario();
    int comand;

    while(cin >> comand, comand) {
        switch(comand) {
            case 1: {
                int tipo;
                cout << "Digite o tipo de item(0 - Arma | 1 - Poção | 2 - Anel): ";
                cin >> tipo;

                switch(tipo) {
                    case 0:
                        inventario->create(createArma());
                        break;
                    case 1:
                        inventario->create(createPocao());
                        break;
                    case 2:
                        inventario->create(createAnel());
                        break;
                    default:
                        cout << "Tipo inválido!" << endl; 
                }
            }
                break;
            case 2: {
                cout << "READ";
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
