#include <iostream>
#include "../headers/Item.h"

Item::Item() {}

Item::Item(int tipo, std::string nome, Tempo duracao, long double preco, long long quantidade, bool equipado){
    this->tipo = tipo;
    this->nome = nome;
    this->duracao = duracao;
    this->preco = preco;
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

Tempo Item::getDuracao(){
    return this->duracao;
}
void Item::setDuracao(long long duracao){
    this->duracao.setTempo(duracao);
}

long double Item::getPreco(){
    return this->preco;
}
void Item::setPreco(long double preco){
    this->preco = preco;
}

long long Item::getQuantidade(){
    return this->quantidade;
}
void Item::setQuantidade(long long quantidade){
    this->quantidade = quantidade;
}

bool Item::getEquipado(){
    return this->equipado;
}
void Item::setEquipado(bool equipado){
    this->equipado = equipado;
}

void Item::toString() {
    const std::string types[] = TYPES_D;
    std::cout << "Tipo: " << this->tipo << " - " <<  types[this->tipo] << std::endl;
    std::cout << "Nome: " << this->nome << std::endl;
    std::cout << "Duracao: " << this->duracao.formatarTempo() << std::endl;
    std::cout << "Preco: " << this->preco << std::endl;
    std::cout << "Quantidade: " << this->quantidade << std::endl;
    std::cout << "Equipado: " << this->equipado << std::endl;
}

Item::~Item() {}
