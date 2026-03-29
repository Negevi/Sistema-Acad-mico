#ifndef _PESSOA_H_
#define _PESSOA_H_

class Mdy {
    private:
        int dia;
        int mes;
        int ano;
    public:
        Mdy(int dia = 0, int mes = 0, int ano = 0);
        ~Mdy();
        void mdyAtual();
        int getAno() { return ano; };
        int getMes() { return mes; };
        int getDia() { return dia; };
};

class Pessoa {
    private:
        Mdy nascimento;
        int idade;
        char nome[30];
        int id;
    public:
        Pessoa(Mdy nasc, char* nome, int idade, int id);
        ~Pessoa();
        Mdy getNascimento() { return nascimento; };
        int getId() { return id; };
        int getIdade() { return idade; };
        char* getNome() { return nome; };
        void calcularIdade(Mdy atual);
        void setNome(char* n);
        void setId(int i) { id = i; };
        void setIdade(int i) { idade = i; };
        void setNascimento(Mdy mdy) { nascimento = mdy; };
};

#endif