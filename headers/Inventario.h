#pragma once
#include <iostream>
#include "Item.h"

class Inventario {
    private:
        Item itens[100];
    
    public:
        void create(Item item);
        void readAll();
        void update(Item item, int index);
        void Delete(int index);
        
        void readOne(Item item, int index);
        void relatorio();

};
