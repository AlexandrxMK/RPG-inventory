#pragma once
#include "./headers/Item.h"
#include <vector>

class utils {
  public:
    static int findIndex(std::vector<Item*> itens, Item* item);
    static Item* createArma();
    static Item* createAnel();
    static Item* createPocao();
};