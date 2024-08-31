#include <iostream>
#include <string>
#include "../headers/Pocao.h"

Pocao::Pocao() {
    this->efeito = "";
}

Pocao::Pocao(int tipo, std::string nome, Tempo duracao, float preco, int quantidade, bool equipado, std::string efeito) 
: Item (tipo, nome, duracao, preco, quantidade, equipado){
    this->efeito = efeito;
}

std::string Pocao::getEfeito() {
    return this->efeito;
}

void Pocao::setEfeito(std::string& efeito) {
    this->efeito = efeito;
}

void Pocao::toString() {
    std::cout << "Tipo: " << this->tipo << " - Pocao" << std::endl;
    std::cout << "Nome: " << this->nome << std::endl;
    std::cout << "Duracao: " << this->duracao.formatarTempo() << std::endl;
    std::cout << "Quantidade: " << this->quantidade << std::endl;
    std::cout << "Equipado: " << this->equipado << std::endl;
    std::cout << "Efeito: " << this->efeito << std::endl;
}
