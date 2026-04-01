#ifndef _ALUNO_H_
#define _ALUNO_H_

#include "pessoa.h"

class Aluno : public Pessoa {
    private:
        int ra;
    public:
        Aluno(Mdy mdy, char* nome, int idade, int id, int ra);
        ~Aluno();
        void setRa(int novoRa) { ra = novoRa; };
        int getRa() { return ra; };

};

#endif