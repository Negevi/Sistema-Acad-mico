#ifndef _DEPARTAMENTO_H_
#define _DEPARTAMENTO_H_

class Departamento {
    private:
        int id;
        char nome[30];
    public:
        Departamento(int id, char* nome);
        ~Departamento();
        int getId() { return id; };
        char* getNome() { return nome; };
        void setNome(char* n);
};

#endif