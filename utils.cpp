#include "./headers/Item.h"
#include "Constantes.h"
#include <vector>


int findIndex(std::vector<Item*> itens, Item* item) {
    for (int i=0; i < itens.size(); i++) {
        if (itens[i]->getNome() == item->getNome()) {
            return i;
        }
    }
    return -1;
}

Item* createArma() {
    std::string nome;
    float preco, dano, alcance;
    int quantidade, tipoDano, tempo;

    std::cout << std::endl;
    std::cout << "Digite o nome da arma: ";
    std::getline(std::cin, nome);
    
    std::cout << "Digite a duracao: ";
    std::cin >> tempo;
    
    std::cout << "Digite o preco da arma: ";
    std::cin >> preco;
    
    std::cout << "Digite a quantidade: ";
    std::cin >> quantidade;

    std::cout << "Digite a quantidade de dano: ";
    std::cin >> dano;

    std::cout << "Digite p alcance: ";
    std::cin >> alcance;
    
    std::cout << "Digite o tipo de dano da arma: (0 - Magico | 1 - Fisico | 2 - Puro) ";
    std::cin >> tipoDano;

    std::cin.ignore();
    
    Item* arma = new Arma(ARMA_TYPE, nome, Tempo(tempo), preco, quantidade, false, dano, alcance, tipoDano);

    return arma;
}


Item* createAnel() {
    std::string nome, efeito;
    float preco, dano, alcance;
    int quantidade, buff, debuff, tempo;

    std::cout << std::endl;
    std::cout << "Digite o nome do anel: ";
    std::getline(std::cin, nome);
    
    std::cout << "Digite a duracao: ";
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

    return anel;
}


Item* createPocao() {
    std::string nome, efeito;
    float preco, dano, alcance;
    int quantidade, tempo;
    bool equipado;

    std::cout << std::endl;
    std::cout << "Digite o nome da pocao: ";
    std::getline(std::cin, nome);
    
    std::cout << "Digite a duracao da pocao: ";
    std::cin >> tempo;
    
    std::cout << "Digite o preco da pocao: ";
    std::cin >> preco;
    
    std::cout << "Digite a quantidade: ";
    std::cin >> quantidade;
    
    std::cin.ignore();

    std::cout << "Digite o efeito da pocao: ";
    std::getline(std::cin, efeito);
    
    Item* pocao = new Pocao(POCAO_TYPE, nome, Tempo(tempo), preco, quantidade, false, efeito);

    return pocao;
}