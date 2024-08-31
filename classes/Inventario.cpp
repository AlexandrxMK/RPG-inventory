#include <iostream>
#include <string>
#include "../headers/Inventario.h"

Inventario::Inventario() {}

void Inventario::create(Item* item) {
    this->itens.push_back(item);
}

std::vector<Item*> Inventario::readAll() {
  return this->itens;
}

Item* Inventario::readOne(std::string nome) {
  int index = utils::findIndex(this->itens, readOne(nome));
  //if (index == -1) std::cout << "Item inexistente" << std::endl; return;
  return readOne(index);
}

Item* Inventario::readOne(int index) {
  return this->itens[index];
}

void Inventario::update(Item* item, int index) {
  this->itens[index] = item;
}

void Inventario::Delete(std::string nome) {
  int index = utils::findIndex(this->itens, readOne(nome));
  if (index == -1) std::cout << "Item inexistente" << std::endl; return;
  Delete(index);
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

void Inventario::relatorio() {
  std::cout << "Total de Itens: " << this->itens.size() << std::endl;
  std::cout << "Total de Aneis: " << this->countByType(ANEL_TYPE) << std::endl;
  std::cout << "Total de Armas: " << this->countByType(ARMA_TYPE) << std::endl;
  std::cout << "Total de Pocoes: " << this->countByType(POCAO_TYPE) << std::endl;
}
