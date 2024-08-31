#include <iostream>
#include <string>
#include "../headers/Inventario.h"

Inventario::Inventario() {}

void Inventario::create(Item* item) {
    this->itens.push_back(item);
}

void Inventario::readAll() {
  std::cout << "\nRetornando todos os itens do inventario: " << std::endl;
  std::cout << std::endl;
  int index = 0;
  for (Item* i : this->itens) {
      std::cout << "Index: " << index << std::endl;
      i->toString();
      std::cout << std::endl;
      index++;
  }
}

// void Inventario::readOne(std::string nome) {
//     std::vector<int> v;
//     for (int i=0; i < itens.size(); i++) {
//         if (this->itens[i]->getNome().find(nome) < this->itens[i]->getNome().length()) {
//             v.push_back(i);
//         }
//     }

//     if (v.size()) {
//       for (int i : v) {
//         std::cout << "Index: " << i << std::endl;
//         this->readOne(i)->toString();
//       }
//     } else {
//       std::cout << "Not Found" << std::endl;
//     }
// }

bool Inventario::read(std::string nome){
  std::vector<int> v;
  for (int i=0; i < itens.size(); i++) {
      if (this->itens[i]->getNome().find(nome) < this->itens[i]->getNome().length()) {
          v.push_back(i);
      }
  }

  if (!v.size()){
    std::cout << "Nome nao encontrado." << std::endl;
    return false;
  } 
  if (v.size() > 1) {
    std::cout << "Mais de 1 nome detectado: " << std::endl;
    for (int i : v){
      std::cout << "Nome: " << itens[i]->getNome() << " - " << i << std::endl;
    }
  } else {
    for (int i : v){
      std::cout << "Index: " << i << std::endl;
      this->readOne(i)->toString();
    }
  }
  return true;
}

void Inventario::readOne(std::string nome){
  int index;
  if (!this->read(nome)){
    return;
  }
  std::cout << std::endl << "Digite o index que deseja procurar: ";
  std:: cin >> index;
  this->readOne(index)->toString();
  std::cout << "\nItem listado com sucesso!" << std::endl;
}

Item* Inventario::readOne(int index) {
  return this->itens[index];
}

void Inventario::update(Item* item, int index) {
  this->itens[index] = item;
}

void Inventario::Delete(std::string nome) {
  int index;
  if (!this->read(nome)){
    return;
  }
  std::cout << std::endl << "Digite o Index do item que deseja excluir: ";
  std::cin >> index;
  Delete(index);
  std::cout << "\n Item deletado com sucesso!" << std::endl;
}

void Inventario::Delete(int index) {
  this->itens.erase(this->itens.begin()+index);
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
  for (auto& item : itens){
    if (item) {
      aux += item->getPreco() * (float) item->getQuantidade(); 
    }
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
