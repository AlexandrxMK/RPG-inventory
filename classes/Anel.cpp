#include <iostream>
#include <string>
#include "../headers/Anel.h"

Anel::Anel() {
    this->buff=0;
    this->debuff=0;
    this->efeito = "";
}

Anel::Anel(int tipo, std::string nome, Tempo duracao, float preco, int quantidade, bool equipado, int buff, int debuff, std::string efeito) 
: Item(tipo, nome, duracao, preco, quantidade, equipado) {
    this->buff=buff;
    this->debuff=debuff;
    this->efeito=efeito;
}

std::string Anel::getEfeito() {
    return this->efeito;
}

int Anel::getBuff() {
    return this->buff;
}

int Anel::getDeBuff() {
    return this->debuff;
}

void Anel::setBuff(int buff) {
    this->buff=buff;
}

void Anel::setDeBuff(int debuff) {
    this->debuff=debuff;
}

void Anel::setEfeito(std::string& efeito) {
    this->efeito = efeito;
}

void Anel::toString() {
    std::cout << "Tipo: " << this->tipo << std::endl;
    std::cout << "Nome: " << this->nome << std::endl;
    std::cout << "Duracao (s): " << this->duracao.formatarTempo() << std::endl;
    std::cout << "Quantidade: " << this->quantidade << std::endl;
    std::cout << "Equipado: " << this->equipado << std::endl;
    std::cout << "Buff: " << this->buff << std::endl;
    std::cout << "DeBuff: " << this->debuff << std::endl;
    std::cout << "Efeito: " << this->efeito << std::endl;
}
