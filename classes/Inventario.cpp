#include <iostream>
#include <string>
#include "../headers/Inventario.h"

Inventario::Inventario() {}

void Inventario::create(Item* item) {
    this->itens.push_back(item);
}

void Inventario::readAll() {
  std::cout << "Retornando todos os itens do inventario: " << std::endl;
  int index = 0;
  for (Item* i : this->itens) {
      std::cout << "Index: " << index << std::endl;
      i->toString();
      index++;
  }
}

std::vector<int> Inventario::readOne(std::string nome) {
    std::vector<int> v;
    for (int i=0; i < itens.size(); i++) {
        if (this->itens[i]->getNome().find(nome) < this->itens[i]->getNome().length()) {
            v.push_back(i);
        }
    }
    return v;
}

Item* Inventario::readOne(int index) {
  return this->itens[index];
}

void Inventario::update(Item* item, int index) {
  this->itens[index] = item;
}

void Inventario::Delete(std::string nome) {
  //int index = utils::findIndex(this->itens, readOne(nome));
  //if (index == -1) std::cout << "Item inexistente" << std::endl; return;
  //Delete(index);
}

void Inventario::Delete(int index) {
  this->itens.erase(this->itens.begin()+index, this->itens.end()+index+1);
}

int Inventario::countByType(int tipo) {
  int count = 0;
  for (Item* i : this->itens) {
    if (i->getTipo() == tipo) {
      count++;
    }
  }
  return count;
}


float Inventario::PrecoTotal(){
  float aux = 0;
  for (int i = 0; i < itens.size(); i++){
    aux += itens[i]->getPreco();
  }
  return aux;
}

void Inventario::relatorio() {
  std::cout << "Total de Itens: " << this->itens.size() << std::endl;
  std::cout << "Total de Aneis: " << this->countByType(ANEL_TYPE) << std::endl;
  std::cout << "Total de Armas: " << this->countByType(ARMA_TYPE) << std::endl;
  std::cout << "Total de Pocoes: " << this->countByType(POCAO_TYPE) << std::endl;
  std::cout << "Preco Total dos Itens: R$" << this->PrecoTotal() << std::endl;  
}
