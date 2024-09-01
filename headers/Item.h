#pragma once
#include <iostream>
#include "Tempo.h"

class Item {
    protected:
        int tipo;
        std::string nome;
        Tempo duracao;
        float preco;
        int quantidade;
        bool equipado;
    public:
        Item();
       
        Item (int tipo, std::string nome, Tempo duracao, float preco, int quantidade, bool equipado); 

        int getTipo();

        std::string getNome();

        Tempo getDuracao();

        float getPreco();

        int getQuantidade();

        bool getEquipado();

        void setTipo(int tipo);

        void setNome(std::string& nome);

        void setDuracao(int duracao);

        void setPreco(float preco);

        void setQuantidade(int quantidade);

        void setEquipado(bool equipado);

        virtual void  toString();

        virtual ~Item();
};
