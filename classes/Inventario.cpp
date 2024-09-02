#include <iostream>
#include <fstream>
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
      std::cout << "Índice: " << index << std::endl;
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
      std::cout << "Índice: " << i << std::endl;
      std::cout << "Tipo: " << this->readOne(i)->getTipo() << std::endl;
      std::cout << "Nome: " << this->readOne(i)->getNome() << std::endl;
    }
  }
  return true;
}

void Inventario::readOne(std::string nome){
  int index;
  if (!this->read(nome)){
    return;
  }
  std::cout << std::endl << "Digite o índice que deseja procurar: ";
  std::cin >> index;
  if (index > this->itens.size()-1 || index < 0) { std::cout << "Índice inválido!" << std::endl; return; }
  this->readOne(index)->toString();
  std::cout << "\nItem lido com sucesso!" << std::endl;
}

Item* Inventario::readOne(int index) {
  return this->itens[index];
}

void Inventario::update(int index) {
  switch(this->itens[index]->getTipo()) {
      case ARMA_TYPE:
          utils::updateArma(this->itens[index]);
          break;
      case POCAO_TYPE:
          utils::updatePocao(this->itens[index]);
          break;
      case ANEL_TYPE:
          utils::updateAnel(this->itens[index]);
          break;
      default:
          std::cout << "Tipo invalido!" << std::endl; 
  }
}

void Inventario::Delete(std::string nome) {
  int index;
  if (!this->read(nome)){
    return;
  }
  std::cout << std::endl << "Digite o índice do item que deseja excluir: ";
  std::cin >> index;
  if (index > this->itens.size()-1 || index < 0) { std::cout << "Índice inválido!" << std::endl; return; } 
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
      count += i->getQuantidade();
    }
  }
  return count;
}


long double Inventario::PrecoTotal(){
  long long aux = 0;
  for (auto& item : itens){
    if (item) {
      aux += item->getPreco() * (long double) item->getQuantidade(); 
    }
  }
  return aux;
}

int Inventario::countTotal() {
  return this->countByType(ANEL_TYPE) + this->countByType(ARMA_TYPE) + this->countByType(POCAO_TYPE);
}

void Inventario::relatorio() {
  std::cout << "Total de Itens: " << this->countTotal() << std::endl;
  std::cout << "Total de Aneis: " << this->countByType(ANEL_TYPE) << std::endl;
  std::cout << "Total de Armas: " << this->countByType(ARMA_TYPE) << std::endl;
  std::cout << "Total de Pocoes: " << this->countByType(POCAO_TYPE) << std::endl;
  std::cout << "Preco Total dos Itens: R$" << this->PrecoTotal() << std::endl;
}

void Inventario::loadData() {
    std::fstream file;

    file.open("data.txt", std::ios_base::in);

    if (!file.is_open()) {
        std::cerr << "Não foi possível abrir o arquivo " << std::endl;
        return;
    }

    while (true) {
      int tipo;
      long long quantidade, duracao;
      long double preco;
      bool equipado;
      std::string nome;
      file >> tipo;
      file.ignore();
      if (!file) break;
      getline(file, nome);
      file >> duracao;
      file.ignore();
      file >> preco;
      file >> quantidade;
      file >> equipado;
      file.ignore();

      switch(tipo) {
        case ARMA_TYPE: {
          long long dano;
          long long alcance;
          int tipoDano;

          file >> dano;
          file >> alcance;
          file >> tipoDano;
          file.ignore();

          this->itens.push_back(new Arma(tipo, nome, duracao, preco, quantidade, equipado, dano, alcance, tipoDano));
        }
          break;
        case POCAO_TYPE: {
          std::string efeito;
          std::getline(file, efeito);

          this->itens.push_back(new Pocao(tipo, nome, duracao, preco, quantidade, equipado, efeito));
        }
          break;  
        case ANEL_TYPE: {
          long long buff;
          long long debuff;
          std::string efeito;

          file >> buff;
          file >> debuff;
          file.ignore();
          std::getline(file, efeito);

          this->itens.push_back(new Anel(tipo, nome, duracao, preco, quantidade, equipado, buff, debuff, efeito));
        }
          break;
      }
    }

  file.close();
}


void Inventario::saveData() {
    std::fstream file;

    file.open("data.txt", std::ios_base::out);

    if (!file.is_open()) {
        std::cerr << "Não foi possível abrir o arquivo " << std::endl;
        return;
    }

    for (Item* i : this->itens) {
      file << i->getTipo() << std::endl;
      file << i->getNome() << std::endl;
      file << i->getDuracao().getSecTempo() << std::endl;
      file << i->getPreco() << std::endl;
      file << i->getQuantidade() << std::endl;
      file << i->getEquipado() << std::endl;

      switch(i->getTipo()) {
        case ARMA_TYPE: {
          file << dynamic_cast<Arma*>(i)->getDano() << std::endl;
          file << dynamic_cast<Arma*>(i)->getAlcance() << std::endl;
          file << dynamic_cast<Arma*>(i)->getTipoDano() << std::endl;;
        }
          break;
        case POCAO_TYPE: {
          file << dynamic_cast<Pocao*>(i)->getEfeito() << std::endl;
        }
          break;  
        case ANEL_TYPE: {
          file << dynamic_cast<Anel*>(i)->getBuff() << std::endl;
          file << dynamic_cast<Anel*>(i)->getDeBuff() << std::endl;
          file << dynamic_cast<Anel*>(i)->getEfeito() << std::endl;
        }
          break;
      }
    }

  file.close();
}