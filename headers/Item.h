#pragma once
#include <iostream>
#include <tempo.h>

class Item {
    protected:
        int tipo;
        std::string nome;
        std::string efeito;
        Tempo duracao; // Mudar para o tipo da classe TEMPO
        float preco;
        int quantidade;
        bool equipado;
    public:
        Item(){};
        Item (int tipo, std::string nome, std::string efeito, Tempo duracao, float preco, int quantidade, bool equipado); 

        int getTipo();

        std::string getNome();

        std::string getEfeito();

        Tempo getDuracao();

        float getPreco();

        int getQuantidade();

        bool getEquipado();

        void setTipo(int tipo);

        void setNome(std::string& nome);

        void setEfeito(std::string& efeito);

        void setDuracao(Tempo duracao);

        void setPreco(float preco);

        void setQuantidade(int quantidade);

        void setEquipado(bool equipado);
};
