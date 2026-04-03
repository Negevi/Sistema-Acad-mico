class Departamento;
class Aluno;

class Disciplina {
    private:
        int id;
        char nome[30];
        char area_do_conhecimento[50];
        Departamento* pDpto;
        Aluno* alunos[45];
    public:
        Disciplina* pProx;
        Disciplina(int id, char* nome, char* ac, 
            Departamento* pDpto = nullptr, Disciplina* pProx = nullptr, Aluno* alunos = nullptr);
        ~Disciplina();
        Departamento* getDpto() { return pDpto; };
        int getId() { return id; };
        char* getNome() { return nome; };
        void setDpto(Departamento* ponteiro) { pDpto = ponteiro; };
        void setId(int i) { id = i; };
        void setNome(char* n);
};