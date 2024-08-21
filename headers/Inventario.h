#pragma once
#include <iostream>
#include <vector>
#include "Item.h"

class Inventario {
    private:
        std::vector<Item> itens;
    
    public:
        Inventario();
        void create(Item item);
        std::vector<Item> readAll();
        void update(Item item, int index);
        void Delete(std::string nome);
        void Delete(int index);
        Item readOne(std::string nome);
        Item readOne(int index);
        void relatorio(); //Qtd de elementos totais, qtd elementos por classe 
};
