#pragma once
#include "./headers/Item.h"
#include <vector>

class utils {
  public:
    static Item* createArma();
    static Item* createAnel();
    static Item* createPocao();
    static void menuItem();
    static void menuArma();
    static void menuAnel();
    static void menuPocao();
    static void updateItem(Item* item, int comand);
    static void updateArma(Item* item);
    static void updateAnel(Item* item);
    static void updatePocao(Item* item);
};