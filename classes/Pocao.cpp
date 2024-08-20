#include <iostream>
#include <string>
#include "../headers/Pocao.h"

Pocao::Pocao() {
    this->efeito = "";
}

Pocao::Pocao(std::string efeito) {
    this->efeito = efeito;
}

std::string Pocao::getEfeito() {
    return this->efeito;
}

void Pocao::setEfeito(std::string efeito) {
    this->efeito = efeito;
}