#include "./utils.h"
#include "./headers/Inventario.h"
#include "Constantes.h"

Item* utils::createArma() {
    std::string nome;
    float preco, dano, alcance;
    int quantidade, tipoDano, tempo;

    std::cout << std::endl;
    std::cout << "Digite o nome da arma: ";
    std::getline(std::cin, nome);
    
    std::cout << "Digite a duracao (s): ";
    std::cin >> tempo;
    
    std::cout << "Digite o preco da arma: ";
    std::cin >> preco;
    
    std::cout << "Digite a quantidade: ";
    std::cin >> quantidade;

    std::cout << "Digite a quantidade de dano: ";
    std::cin >> dano;

    std::cout << "Digite o alcance (m): ";
    std::cin >> alcance;
    
    std::cout << "Digite o tipo de dano da arma: (0 - Magico | 1 - Fisico | 2 - Puro) ";
    std::cin >> tipoDano;

    std::cin.ignore();
    
    Item* arma = new Arma(ARMA_TYPE, nome, Tempo(tempo), preco, quantidade, false, dano, alcance, tipoDano);

    std::cout << "Item criado com sucesso!" << std:: endl;

    return arma;
}


Item* utils::createAnel() {
    std::string nome, efeito;
    float preco, dano, alcance;
    int quantidade, buff, debuff, tempo;

    std::cout << std::endl;
    std::cout << "Digite o nome do anel: ";
    std::getline(std::cin, nome);
    
    std::cout << "Digite a duracao (s): ";
    std::cin >> tempo;
    
    std::cout << "Digite o preco do anel: ";
    std::cin >> preco;
    
    std::cout << "Digite a quantidade: ";
    std::cin >> quantidade;

    std::cout << "Digite o tipo de buff: (0 - Magico | 1 - Fisico | 2 - Puro) ";
    std::cin >> buff;
    
    std::cout << "Digite o tipo de debuff: (0 - Magico | 1 - Fisico | 2 - Puro) ";
    std::cin >> debuff;
    
    std::cin.ignore();

    std::cout << "Digite o efeito do anel: ";
    std::getline(std::cin, efeito);
    
    Item* anel = new Anel(ANEL_TYPE, nome, Tempo(tempo), preco, quantidade, false, buff, debuff, efeito);

    std::cout << "Item criado com sucesso!" << std:: endl;

    return anel;
}


Item* utils::createPocao() {
    std::string nome, efeito;
    float preco, dano, alcance;
    int quantidade, tempo;
    bool equipado;

    std::cout << std::endl;
    std::cout << "Digite o nome da pocao: ";
    std::getline(std::cin, nome);
    
    std::cout << "Digite a duracao da pocao (s): ";
    std::cin >> tempo;
    
    std::cout << "Digite o preco da pocao: ";
    std::cin >> preco;
    
    std::cout << "Digite a quantidade: ";
    std::cin >> quantidade;
    
    std::cin.ignore();

    std::cout << "Digite o efeito da pocao: ";
    std::getline(std::cin, efeito);
    
    Item* pocao = new Pocao(POCAO_TYPE, nome, Tempo(tempo), preco, quantidade, false, efeito);

    std::cout << "Item criado com sucesso!" << std:: endl;

    return pocao;
}

void utils::menuItem() {
    std::cout << "Indique o atributo que deseja alterar ou 0 para finalizar a edicao: " << std::endl;
    std::cout << "1 - Nome" << std::endl;
    std::cout << "2 - Duracao" << std::endl;
    std::cout << "3 - Preco" << std::endl;
    std::cout << "4 - Quantidade" << std::endl;
    std::cout << "5 - Estado (Equipado/Não Equipado)" << std::endl;
}

void utils::menuArma() {
    utils::menuItem();
    std::cout << "6 - Dano" << std::endl;
    std::cout << "7 - Alcance" << std::endl;
    std::cout << "8 - Tipo de Dano" << std::endl;
}

void utils::menuAnel() {
    utils::menuItem();
    std::cout << "6 - Buff" << std::endl;
    std::cout << "7 - Debuff" << std::endl;
    std::cout << "8 - Efeito" << std::endl;
}

void utils::menuPocao() {
    utils::menuItem();
    std::cout << "6 - Efeito" << std::endl;
}

void utils::updateItem(Item* item, int comand) {
    switch (comand) {
        case 1: {
            std::string auxNome;
            std::cout << "Digite o novo nome: ";
            std::getline(std::cin, auxNome);
            item->setNome(auxNome);
        }
            break;
        case 2: {
            int auxTempo;
            std::cout << "Digite a nova duracao (em segundos): ";
            std::cin >> auxTempo;
            std::cin.ignore();
            item->setDuracao(auxTempo);
        }
            break;
        case 3: {
            float auxPreco;
            std::cout << "Digite o novo preco: $ ";
            std::cin >> auxPreco;
            std::cin.ignore();
            item->setPreco(auxPreco);
        }
            break;
        case 4: {
            int auxQtd;
            std::cout << "Digite a nova quantidade: ";
            std::cin >> auxQtd;
            std::cin.ignore();
            item->setQuantidade(auxQtd);
        }
            break;
        case 5: {
            item->setEquipado(!item->getEquipado());
            std::string auxEquip = item->getEquipado() ? "Atributo alterado para True" : "Atributo alterado para False";
            std::cout << auxEquip << std::endl;
        }
            break;
    }
}

void utils::updateArma(Item* item) {
    int comand;

    utils::menuArma();

    while(std::cin >> comand, comand) {
        std::cin.ignore();

        updateItem(item, comand);

        switch (comand) {
            case 6: {
                float auxDano;
                std::cout << "Digite o novo dano: ";
                std::cin >> auxDano;
                std::cin.ignore();
                dynamic_cast<Arma*>(item)->setDano(auxDano);
            }
                break;
            case 7: {
                float auxAlcance;
                std::cout << "Digite o novo alcance: ";
                std::cin >> auxAlcance;
                std::cin.ignore();
                dynamic_cast<Arma*>(item)->setAlcance(auxAlcance);
            }
                break;
            case 8: {
                float auxTipoDano;
                std::cout << "Digite o novo tipo de dano (0 - Magico | 1 - Fisico | 2 - Puro): ";
                std::cin >> auxTipoDano;
                std::cin.ignore();
                dynamic_cast<Arma*>(item)->setTipoDano(auxTipoDano);
            }
                break;
            default:
                std::cout << "Atributo não existente ou não editável" << std::endl;
                break;
        }
        
        utils::menuArma();
    }
}

void utils::updateAnel(Item* item) {
    int comand;

    utils::menuAnel();

    while(std::cin >> comand, comand) {
        std::cin.ignore();

        updateItem(item, comand);

        switch (comand) {
            case 6: {
                int auxBuff;
                std::cout << "Digite o novo buff (0 - Magico | 1 - Fisico | 2 - Puro): ";
                std::cin >> auxBuff;
                std::cin.ignore();
                dynamic_cast<Anel*>(item)->setBuff(auxBuff);
            }
                break;
            case 7: {
                int auxDeBuff;
                std::cout << "Digite o novo debuff (0 - Magico | 1 - Fisico | 2 - Puro): ";
                std::cin >> auxDeBuff;
                std::cin.ignore();
                dynamic_cast<Anel*>(item)->setDeBuff(auxDeBuff);
            }
                break;
            case 8: {
                std::string auxEfeito;
                std::cout << "Digite o novo efeito: ";
                std::getline(std::cin, auxEfeito);
                dynamic_cast<Anel*>(item)->setEfeito(auxEfeito);
            }
                break;
            default:
                std::cout << "Atributo não existente ou não editável" << std::endl;
                break;
        }
        utils::menuAnel();
    }
}

void utils::updatePocao(Item* item) {
    int comand;

    utils::menuPocao();

    while(std::cin >> comand, comand) {
        std::cin.ignore();

        updateItem(item, comand);

        switch (comand) {
            case 6: {
                std::string auxEfeito;
                std::cout << "Digite o novo efeito: ";
                std::getline(std::cin, auxEfeito);
                dynamic_cast<Pocao*>(item)->setEfeito(auxEfeito);
            }
                break;
            default:
                std::cout << "Atributo não existente ou não editável" << std::endl;
                break;
        }
        utils::menuPocao();
    }
}