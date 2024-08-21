#include "./headers/Item.h"
#include <vector>

int findIndex(std::vector<Item> itens, Item item) {
    for (int i=0; i < itens.size(); i++) {
        if (itens[i].getNome() == item.getNome()) {
            return i;
        }
    }
    return -1;
}
