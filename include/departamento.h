#ifndef _DEPARTAMENTO_H_
#define _DEPARTAMENTO_H_

class Universidade;
class Disciplina;

class Departamento {
    private:
        int id;
        char nome[30];
        Universidade* pUniv;
        Disciplina *pDisciplPrim;
        Disciplina* pDiscAtual;
    public:
        Departamento(int id, char* nome);
        ~Departamento();
        Universidade* getUniv() { return pUniv; };
        int getId() { return id; };
        char* getNome() { return nome; };
        void setUniv(Universidade* uni) { pUniv = uni; };
        void setNome(char* n);
        void setId(int i) { id = i; };
        void incluirDisciplina(Disciplina* include);
        void listarDisciplinas();
};

#endif