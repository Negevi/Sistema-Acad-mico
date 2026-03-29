#ifndef _UNIVERSIDADE_H_
#define _UNIVERSIDADE_H_

class Departamento;

class Universidade {
    private:
        Departamento* pDpto[30];
        char nome[100];
    public:
        Universidade();
        ~Universidade();
        void setDpto(Departamento* dpto, int index);
        void setNome(char* n);
        char* getNome() { return nome; };

};

#endif