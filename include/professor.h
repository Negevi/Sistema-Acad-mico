#ifndef _PROFESSOR_H_
#define _PROFESSOR_H_

#include "pessoa.h"

class Departamento;
class Universidade;

class Professor : public Pessoa {
    private: 
        Universidade* univFiliado;
        Departamento* dptoAfiliado;
    public:
        Professor(Mdy mdy, char* nome, int idade, int id,
        Universidade* pUniv = nullptr,
        Departamento* pDpto = nullptr);
        ~Professor();
        void ondeTrabalho();
        void qualDpto();
        void setUnivFiliado(Universidade* pUniv) { univFiliado = pUniv; };
        void setDpto(Departamento* pDpto) { dptoAfiliado = pDpto; };
};

#endif