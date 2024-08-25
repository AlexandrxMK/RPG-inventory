#include <iostream>
#include "../headers/Arma.h"

Arma::Arma() {}

Arma::Arma(int tipo, std::string nome, Tempo duracao, float preco, int quantidade, bool equipado, float dano, float alcance, int tipoDano) 
:  Item (tipo, nome, duracao, preco, quantidade, equipado) {
    this->dano = dano;
    this->alcance = alcance;
    this->tipoDano = tipoDano;
}

float Arma::getDano() {
    return dano;
}

void Arma::setDano(float dano) {
    this->dano = dano;
}

float Arma::getAlcance() {
    return alcance;
}

void Arma::setAlcance(float alcance){
    this->alcance = alcance;
}

int Arma::getTipoDano() {
    return tipoDano;
}

void Arma::setTipoDano(int tipoDano){
    this->tipoDano = tipoDano;
}
