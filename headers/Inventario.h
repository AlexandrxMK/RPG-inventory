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

    // definir o que vai ser private e adicionar o arquivo

    public:
        std::vector<Item*> itens;
        Inventario();
        void create(Item* item);
        void readAll();
        void update(int index);
        void Delete(std::string nome);
        void Delete(int index);
        void readOne(std::string nome); 

    
        bool read(std::string nome);

        void loadData();
        void saveData();


        Item* readOne(int index);
        int countByType(int tipo);
        long double PrecoTotal();
        void relatorio(); // Qtd de elementos totais, qtd elementos por classe, preco total     
};
