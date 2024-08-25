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