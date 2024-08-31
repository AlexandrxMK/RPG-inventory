#pragma once
#include <iostream>
#include <vector>
#include <fstream> // adicionando arquivo
#include "Item.h"
#include "Anel.h"
#include "Arma.h"
#include "Pocao.h"
#include "../Constantes.h"
#include "../utils.h"

class Inventario {

    public:
        std::vector<Item*> itens;
        Inventario();
        void create(Item* item);
        void readAll();
        void update(Item *item, int index);
        void Delete(std::string nome);
        void Delete(int index);
        void readOne(std::string nome); 
        Item* readOne(int index);
        int countByType(int tipo);
        float PrecoTotal();
        void relatorio(); // Qtd de elementos totais, qtd elementos por classe, preco total     
};
