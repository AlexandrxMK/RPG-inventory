#pragma once
#include <iostream>
#include "Tempo.h"

class Item {
    protected:
        int tipo;
        std::string nome;
        Tempo duracao;
        long long preco;
        long long quantidade;
        bool equipado;
    public:
        Item();
       
        Item (int tipo, std::string nome, Tempo duracao, long double preco, long long quantidade, bool equipado); 

        int getTipo();

        std::string getNome();

        Tempo getDuracao();

        long double getPreco();

        long long getQuantidade();

        bool getEquipado();

        void setTipo(int tipo);

        void setNome(std::string& nome);

        void setDuracao(long long duracao);

        void setPreco(long double preco);

        void setQuantidade(long long quantidade);

        void setEquipado(bool equipado);

        virtual void  toString();

        virtual ~Item();
};
