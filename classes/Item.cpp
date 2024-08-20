#include <iostream>
#include "../headers/Item.h"

//tirar efeito e colocar em anel e pocao

Item::Item(int tipo, std::string nome, std::string efeito, Tempo duracao, float preco, int quantidade, bool equipado){
    this->tipo = tipo;
    this->nome = nome;
    this->efeito = efeito;
    this->duracao = duracao;
    this->quantidade = quantidade;
    this->equipado = equipado;
}

int Item::getTipo(){
    return this->tipo;
}
void Item::setTipo(int tipo){
    this->tipo = tipo;
}

std::string Item::getNome(){
    return this->nome;
}
void Item::setNome(std::string& nome){
    this->nome = nome;
}

std::string Item::getEfeito(){
    return this->nome;
}
void Item::setEfeito(std::string& efeito){
    this->efeito = efeito;
}

Tempo Item::getDuracao(){
    return this->duracao;
}
void Item::setDuracao(Tempo duracao){
    this->duracao = duracao;
}

float Item::getPreco(){
    return this->preco;
}
void Item::setPreco(float preco){
    this->preco = preco;
}

int Item::getQuantidade(){
    return this->preco;
}
void Item::setQuantidade(int quantidade){
    this->quantidade = quantidade;
}

bool Item::getEquipado(){
    return this->preco;
}
void Item::setEquipado(bool equipado){
    this->equipado = equipado;
}