#include <iostream>
#include <string>
#include "../headers/Inventario.h"
#include "../headers/Anel.h"
#include "../headers/Arma.h"
#include "../headers/Item.h"
#include "../headers/Pocao.h"
#include "../headers/Tempo.h"
#include "../utils.cpp"

Inventario::Inventario() {}

void Inventario::create(Item item) {
    this->itens.push_back(item);
}

std::vector<Item> Inventario::readAll() {
  return this->itens;
}

Item Inventario::readOne(std::string nome) {
  int index = findIndex(this->itens, readOne(nome));
  //if (index == -1) std::cout << "Item inexistente" << std::endl; return;
  return readOne(index);
}

Item Inventario::readOne(int index) {
  return this->itens[index];
}

void Inventario::update(Item item, int index) {
  this->itens[index] = item;
}

void Inventario::Delete(std::string nome) {
  int index = findIndex(this->itens, readOne(nome));
  if (index == -1) std::cout << "Item inexistente" << std::endl; return;
  Delete(index);
}

void Inventario::Delete(int index) {
  this->itens.erase(this->itens.begin()+index, this->itens.end()+index+1);
}

