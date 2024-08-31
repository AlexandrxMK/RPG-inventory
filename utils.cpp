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