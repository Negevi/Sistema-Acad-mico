#include <iostream>
#include "universidade.h"
#include "departamento.h"
#include "disciplina.h"
#include "professor.h"
#include "aluno.h"
 
void initialize() {
    std::cout << "=== Inicializando sistema universitario ===" << std::endl;
 
    // --- Universidade ---
    Universidade univ;
    univ.setNome((char*)"Universidade Federal do Parana");
    std::cout << "\nUniversidade criada: " << univ.getNome() << std::endl;
 
    // --- Departamentos ---
    Departamento dptoCiencias(1, (char*)"Ciencias da Computacao");
    Departamento dptoMatematica(2, (char*)"Matematica");
 
    dptoCiencias.setUniv(&univ);
    dptoMatematica.setUniv(&univ);
 
    univ.setDpto(&dptoCiencias, 0);
    univ.setDpto(&dptoMatematica, 1);
 
    std::cout << "\nDepartamentos criados:" << std::endl;
    std::cout << "  [" << dptoCiencias.getId() << "] " << dptoCiencias.getNome() << std::endl;
    std::cout << "  [" << dptoMatematica.getId() << "] " << dptoMatematica.getNome() << std::endl;
 
    // --- Disciplinas ---
    Disciplina d1(101, (char*)"Algoritmos", (char*)"Computacao", &dptoCiencias);
    Disciplina d2(102, (char*)"Estrutura de Dados", (char*)"Computacao", &dptoCiencias);
    Disciplina d3(201, (char*)"Calculo I", (char*)"Matematica", &dptoMatematica);
 
    dptoCiencias.incluirDisciplina(&d1);
    dptoCiencias.incluirDisciplina(&d2);
    dptoMatematica.incluirDisciplina(&d3);
 
    std::cout << "\nDisciplinas do departamento de Ciencias da Computacao:" << std::endl;
    dptoCiencias.listarDisciplinas();
    std::cout << "Disciplinas do departamento de Matematica:" << std::endl;
    dptoMatematica.listarDisciplinas();
 
    // --- Professores ---
    Mdy nascProf(15, 6, 1980);
    Professor prof1(nascProf, (char*)"Dr. Carlos Silva", 44, 1, &univ, &dptoCiencias);
 
    std::cout << "\nProfessor criado: " << prof1.getNome() << std::endl;
    prof1.ondeTrabalho();
    prof1.qualDpto();
 
    // --- Alunos ---
    Mdy nascAluno(20, 3, 2002);
    Aluno aluno1(nascAluno, (char*)"Ana Souza", 23, 1, 987654);
 
    std::cout << "\nAluno criado: " << aluno1.getNome()
              << " | RA: " << aluno1.getRa() << std::endl;
 
    // --- Calcular idade a partir da data atual ---
    Mdy hoje;
    hoje.mdyAtual();
    prof1.calcularIdade(hoje);
    aluno1.calcularIdade(hoje);
 
    std::cout << "\nIdades calculadas:" << std::endl;
    std::cout << "  " << prof1.getNome() << ": " << prof1.getIdade() << " anos" << std::endl;
    std::cout << "  " << aluno1.getNome() << ": " << aluno1.getIdade() << " anos" << std::endl;
 
    std::cout << "\n=== Sistema inicializado com sucesso! ===" << std::endl;
}
 
int main() {
    initialize();
    return 0;
}

// MAIN FEITO PELO CLAUDE. PEDI UM CODIGO PARA SIMLPESMENTE INICIALIZAR PARA VER SE TUDO ESTAVA RODANDO CERTO!