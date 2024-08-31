#pragma once
#include <iostream>
#include <vector>
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
        std::vector<Item*> readAll();
        void update(Item *item, int index);
        void Delete(std::string nome);
        void Delete(int index);
        Item* readOne(std::string nome);
        Item* readOne(int index);
        int countByType(int tipo);
        void relatorio(); // Qtd de elementos totais, qtd elementos por classe, preco total
};
