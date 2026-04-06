class Departamento;
class Aluno;

class Disciplina {
    private:
        int id;
        char nome[30];
        char area_do_conhecimento[50];

        int n_alunos;
        int lim_alunos;

        Departamento* pDpto;

        Aluno* pAlunoPrim;
        Aluno* pAlunoAtual;
    public:
        Disciplina* pDisciplinaProx;
        Disciplina* pDisciplinaAnte;
        
        Disciplina(int id, char* nome, char* ac, Departamento* pDpto, 
        Disciplina* pDisciplinaAnte, Disciplina* pDisciplinaProx,
        Aluno* pAlunoProx, Aluno* pAlunoAnte, int n_alunos = 0, int lim_alunos = 45);
        ~Disciplina();
        Departamento* getDpto() { return pDpto; };
        int getId() { return id; };
        char* getNome() { return nome; };
        void setDpto(Departamento* ponteiro) { pDpto = ponteiro; };
        void setId(int i) { id = i; };
        void setNome(char* n);
        void incluaAluno(Aluno* aluno);
        void listeAlunos();
};