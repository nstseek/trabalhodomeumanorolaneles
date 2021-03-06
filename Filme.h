/*
 * Arquivo: Filme.h
 * Autor: Rafael Lopes Schneider e Arthur Costa Ribeiro
 * Data: 5 maio 2019
 *
 */
#ifndef FILME_H
#define FILME_H
#define ATORES_MAX 10
#include <string>
#include "Diretor.h"
#include "Ator.h"

using namespace std;

class Filme {
    private:
        string nome;
        string ano;
        Diretor* diretor;
        Ator* atores[ATORES_MAX];
        unsigned int num_atores;
    public:
        Filme(string nome_, string ano_);
        void adicionarDiretor(Diretor* dir);
        void removerDiretor();
        void adicionarAtor(Ator* ator);
        void removerAtor();
        string getNome();
        string getAno();
        Diretor* getDiretor();
        void getAtores();
        bool consultarAtor(string nome);
        unsigned int getNumAtores();
        string toString();
        string toString(bool file);
        // retornar pointer pra array? ok
        // namespace filme? n é namespace, é nome de classe, parece igual porem diferente
};

#endif