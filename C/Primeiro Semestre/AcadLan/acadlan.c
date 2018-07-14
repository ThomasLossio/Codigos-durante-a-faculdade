/* 
 * File:   main.c
 * Author: Thiago
 *
 * Created on 28 de Abril de 2014, 23:19
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int acadlan = 0, Menu = 0, OpcaoMenu = 0, OpcaCadastroMenu = 0, OpcaCadastrar = 0, OpcaoCursoCadastro = 0, OpcaoCadastro = 0, OpcaoCurso1 = 0, OpcaoCurso2 = 0, ProfessorCadastradoSI = 0, ProfessorCadastradoDI = 0, Professor1Cadastrado1 = 0, Professor2Cadastrado1 = 0, Professor3Cadastrado1 = 0, ProfessorGeral = 0, OpcaoProfessorGeral = 0;

    int FlagMenu = 0, FlagEscolhaCadastro = 0, FlagCursoCadastro = 0, FlagOpcaoCurso = 0, FlagEscolhaCadastro2 = 0, FlagCursoCadastro2 = 0, FlagOpcaoCurso2 = 0, FlagOpcaoCursoPLotado1, FlagOpcaoCursoPLotado2;
    int CadastroCurso1 = 0, cadastro_professor_curso = 0, cadastro_professor_disciplina = 0, curso_exc_prof = 0, dic_exc_prof = 0, exc_prof = 0;

    char cadastro_curso[2] = "s";
    char cadastro_curso1[2] = "s", cadastro_curso2[2] = "S";

    char Alt_Professor[81] = "";

    int ProfessorSI1 = 0;
    int ProfessorSI2 = 0;
    int ProfessorSI3 = 0;
    int ProfessorSI4 = 0;
    int ProfessorSI5 = 0;
    int ProfessorSI6 = 0;

    int cpfsi1 = 0, cpfsi2 = 0, cpfsi3 = 0, cpfsi4 = 0, cpfsi5 = 0, cpfsi6 = 0;

    char NomeProfSI1[81] = "";
    char NomeProfSI2[81] = "";
    char NomeProfSI3[81] = "";
    char NomeProfSI4[81] = "";
    char NomeProfSI5[81] = "";
    char NomeProfSI6[81] = "";

    int PSI1 = 0, PSI2 = 0, PSI3 = 0, PSI4 = 0, PSI5 = 0, PSI6 = 0; // PROFESSOR ESTA CADASTRADO OU NAO

    int DiciplinaProfessorSI1 = 0;
    int DiciplinaProfessorSI2 = 0;
    int DiciplinaProfessorSI3 = 0;
    int DiciplinaProfessorSI4 = 0;
    int DiciplinaProfessorSI5 = 0;
    int DiciplinaProfessorSI6 = 0;

    int ProfessorDI1 = 0;
    int ProfessorDI2 = 0;
    int ProfessorDI3 = 0;
    int ProfessorDI4 = 0;
    int ProfessorDI5 = 0;
    int ProfessorDI6 = 0;

    int cpfdi1 = 0, cpfdi2 = 0, cpfdi3 = 0, cpfdi4 = 0, cpfdi5 = 0, cpfdi6 = 0;

    char NomeProfDI1[81] = "";
    char NomeProfDI2[81] = "";
    char NomeProfDI3[81] = "";
    char NomeProfDI4[81] = "";
    char NomeProfDI5[81] = "";
    char NomeProfDI6[81] = "";

    int PDI1 = 0, PDI2 = 0, PDI3 = 0, PDI4 = 0, PDI5 = 0, PDI6 = 0; // PROFESSOR ESTA CADASTRADO OU NAO

    int DiciplinaProfessorDI1 = 0;
    int DiciplinaProfessorDI2 = 0;
    int DiciplinaProfessorDI3 = 0;
    int DiciplinaProfessorDI4 = 0;
    int DiciplinaProfessorDI5 = 0;
    int DiciplinaProfessorDI6 = 0;

    int Professor1CadastradoDI1 = 0, Professor2CadastradoDI1 = 0, Professor3CadastradoDI1 = 0;

    char nomecurso1[81] = "", nomecurso2[81] = "";

    int curso1 = 0;
    char curso1semestre1m1[81] = "";
    char curso1semestre1m2[81] = "";
    char curso1semestre2m1[81] = "";
    char curso1semestre2m2[81] = "";
    char curso1semestre3m1[81] = "";
    char curso1semestre3m2[81] = "";
    char curso2semestre1m1[81] = "";
    char curso2semestre1m2[81] = "";
    char curso2semestre2m1[81] = "";
    char curso2semestre2m2[81] = "";
    char curso2semestre3m1[81] = "";
    char curso2semestre3m2[81] = "";

    int curso2 = 0;
    int escolhacurso = 0, escolha_alt = 0, escolha_alt_curso = 0, alt_curso = 0, alt_disci = 0, alt_prof_curso = 0, alt_prof = 0;

    int alteracao_cadastro = 0, oq_exluir = 0, exc_curso = 0;

    char nomealuno1c1m1[81] = "", nomealuno2c1m1[81] = "", nomealuno3c1m1[81] = "", nomealuno4c1m1[81] = "", nomealuno5c1m1[81] = "";
    char nomealuno1c1m2[81] = "", nomealuno2c1m2[81] = "", nomealuno3c1m2[81] = "", nomealuno4c1m2[81] = "", nomealuno5c1m2[81] = "";
    char nomealuno1c1m3[81] = "", nomealuno2c1m3[81] = "", nomealuno3c1m3[81] = "", nomealuno4c1m3[81] = "", nomealuno5c1m3[81] = "";
    char nomealuno1c1m4[81] = "", nomealuno2c1m4[81] = "", nomealuno3c1m4[81] = "", nomealuno4c1m4[81] = "", nomealuno5c1m4[81] = "";
    char nomealuno1c1m5[81] = "", nomealuno2c1m5[81] = "", nomealuno3c1m5[81] = "", nomealuno4c1m5[81] = "", nomealuno5c1m5[81] = "";
    char nomealuno1c1m6[81] = "", nomealuno2c1m6[81] = "", nomealuno3c1m6[81] = "", nomealuno4c1m6[81] = "", nomealuno5c1m6[81] = "";

    int aluno1c1m1 = 0, aluno2c1m1 = 0, aluno3c1m1 = 0, aluno4c1m1 = 0, aluno5c1m1 = 0;
    int aluno1c1m2 = 0, aluno2c1m2 = 0, aluno3c1m2 = 0, aluno4c1m2 = 0, aluno5c1m2 = 0;
    int aluno1c1m3 = 0, aluno2c1m3 = 0, aluno3c1m3 = 0, aluno4c1m3 = 0, aluno5c1m3 = 0;
    int aluno1c1m4 = 0, aluno2c1m4 = 0, aluno3c1m4 = 0, aluno4c1m4 = 0, aluno5c1m4 = 0;
    int aluno1c1m5 = 0, aluno2c1m5 = 0, aluno3c1m5 = 0, aluno4c1m5 = 0, aluno5c1m5 = 0;
    int aluno1c1m6 = 0, aluno2c1m6 = 0, aluno3c1m6 = 0, aluno4c1m6 = 0, aluno5c1m6 = 0;

    int cpf1 = 0, cpf2 = 0, cpf3 = 0, cpf4 = 0, cpf5 = 0, cpf6 = 0, cpf7 = 0, cpf8 = 0, cpf9 = 0, cpf10 = 0;
    int cpf11 = 0, cpf12 = 0, cpf13 = 0, cpf14 = 0, cpf15 = 0, cpf16 = 0, cpf17 = 0, cpf18 = 0, cpf19 = 0, cpf20 = 0;
    int cpf21 = 0, cpf22 = 0, cpf23 = 0, cpf24 = 0, cpf25 = 0, cpf26 = 0, cpf27 = 0, cpf28 = 0, cpf29 = 0, cpf30 = 0;
    int cpf31 = 0, cpf32 = 0, cpf33 = 0, cpf34 = 0, cpf35 = 0, cpf36 = 0, cpf37 = 0, cpf38 = 0, cpf39 = 0, cpf40 = 0;
    int cpf41 = 0, cpf42 = 0, cpf43 = 0, cpf44 = 0, cpf45 = 0, cpf46 = 0, cpf47 = 0, cpf48 = 0, cpf49 = 0, cpf50 = 0;
    int cpf51 = 0, cpf52 = 0, cpf53 = 0, cpf54 = 0, cpf55 = 0, cpf56 = 0, cpf57 = 0, cpf58 = 0, cpf59 = 0, cpf60 = 0;

    char nomealuno1c2m1[81] = "", nomealuno2c2m1[81] = "", nomealuno3c2m1[81] = "", nomealuno4c2m1[81] = "", nomealuno5c2m1[81] = "";
    char nomealuno1c2m2[81] = "", nomealuno2c2m2[81] = "", nomealuno3c2m2[81] = "", nomealuno4c2m2[81] = "", nomealuno5c2m2[81] = "";
    char nomealuno1c2m3[81] = "", nomealuno2c2m3[81] = "", nomealuno3c2m3[81] = "", nomealuno4c2m3[81] = "", nomealuno5c2m3[81] = "";
    char nomealuno1c2m4[81] = "", nomealuno2c2m4[81] = "", nomealuno3c2m4[81] = "", nomealuno4c2m4[81] = "", nomealuno5c2m4[81] = "";
    char nomealuno1c2m5[81] = "", nomealuno2c2m5[81] = "", nomealuno3c2m5[81] = "", nomealuno4c2m5[81] = "", nomealuno5c2m5[81] = "";
    char nomealuno1c2m6[81] = "", nomealuno2c2m6[81] = "", nomealuno3c2m6[81] = "", nomealuno4c2m6[81] = "", nomealuno5c2m6[81] = "";

    int aluno1c2m1 = 0, aluno2c2m1 = 0, aluno3c2m1 = 0, aluno4c2m1 = 0, aluno5c2m1 = 0;
    int aluno1c2m2 = 0, aluno2c2m2 = 0, aluno3c2m2 = 0, aluno4c2m2 = 0, aluno5c2m2 = 0;
    int aluno1c2m3 = 0, aluno2c2m3 = 0, aluno3c2m3 = 0, aluno4c2m3 = 0, aluno5c2m3 = 0;
    int aluno1c2m4 = 0, aluno2c2m4 = 0, aluno3c2m4 = 0, aluno4c2m4 = 0, aluno5c2m4 = 0;
    int aluno1c2m5 = 0, aluno2c2m5 = 0, aluno3c2m5 = 0, aluno4c2m5 = 0, aluno5c2m5 = 0;
    int aluno1c2m6 = 0, aluno2c2m6 = 0, aluno3c2m6 = 0, aluno4c2m6 = 0, aluno5c2m6 = 0;

    char alt_aluno[81] = "", cadastro_av1[2] = "", cadastro_av2[2] = "";

    int q_aluno = 0, cursocadastroaluno = 0, disciplinacadastroaluno = 0, alt_aluno_curso = 0, alt_disci_aluno = 0, alt_al = 0, esc_curso_aluno = 0;
    int esc_disciplina_aluno = 0, esc_aluno_nota = 0;

    float nota1_aluno1c1m1 = 0, nota2_aluno1c1m1 = 0, nota1_aluno2c1m1 = 0, nota2_aluno2c1m1 = 0, nota1_aluno3c1m1 = 0, nota2_aluno3c1m1 = 0, nota1_aluno4c1m1 = 0, nota2_aluno4c1m1 = 0, nota1_aluno5c1m1 = 0, nota2_aluno5c1m1 = 0;
    float nota1_aluno1c1m2 = 0, nota2_aluno1c1m2 = 0, nota1_aluno2c1m2 = 0, nota2_aluno2c1m2 = 0, nota1_aluno3c1m2 = 0, nota2_aluno3c1m2 = 0, nota1_aluno4c1m2 = 0, nota2_aluno4c1m2 = 0, nota1_aluno5c1m2 = 0, nota2_aluno5c1m2 = 0;
    float nota1_aluno1c1m3 = 0, nota2_aluno1c1m3 = 0, nota1_aluno2c1m3 = 0, nota2_aluno2c1m3 = 0, nota1_aluno3c1m3 = 0, nota2_aluno3c1m3 = 0, nota1_aluno4c1m3 = 0, nota2_aluno4c1m3 = 0, nota1_aluno5c1m3 = 0, nota2_aluno5c1m3 = 0;
    float nota1_aluno1c1m4 = 0, nota2_aluno1c1m4 = 0, nota1_aluno2c1m4 = 0, nota2_aluno2c1m4 = 0, nota1_aluno3c1m4 = 0, nota2_aluno3c1m4 = 0, nota1_aluno4c1m4 = 0, nota2_aluno4c1m4 = 0, nota1_aluno5c1m4 = 0, nota2_aluno5c1m4 = 0;
    float nota1_aluno1c1m5 = 0, nota2_aluno1c1m5 = 0, nota1_aluno2c1m5 = 0, nota2_aluno2c1m5 = 0, nota1_aluno3c1m5 = 0, nota2_aluno3c1m5 = 0, nota1_aluno4c1m5 = 0, nota2_aluno4c1m5 = 0, nota1_aluno5c1m5 = 0, nota2_aluno5c1m5 = 0;
    float nota1_aluno1c1m6 = 0, nota2_aluno1c1m6 = 0, nota1_aluno2c1m6 = 0, nota2_aluno2c1m6 = 0, nota1_aluno3c1m6 = 0, nota2_aluno3c1m6 = 0, nota1_aluno4c1m6 = 0, nota2_aluno4c1m6 = 0, nota1_aluno5c1m6 = 0, nota2_aluno5c1m6 = 0;

    int nota1 = 0, nota2 = 0, nota3 = 0, nota4 = 0, nota5 = 0, nota6 = 0, nota7 = 0, nota8 = 0, nota9 = 0, nota10 = 0;
    int nota11 = 0, nota12 = 0, nota13 = 0, nota14 = 0, nota15 = 0, nota16 = 0, nota17 = 0, nota18 = 0, nota19 = 0, nota20 = 0;
    int nota21 = 0, nota22 = 0, nota23 = 0, nota24 = 0, nota25 = 0, nota26 = 0, nota27 = 0, nota28 = 0, nota29 = 0, nota30 = 0;
    int nota31 = 0, nota32 = 0, nota33 = 0, nota34 = 0, nota35 = 0, nota36 = 0, nota37 = 0, nota38 = 0, nota39 = 0, nota40 = 0;
    int nota41 = 0, nota42 = 0, nota43 = 0, nota44 = 0, nota45 = 0, nota46 = 0, nota47 = 0, nota48 = 0, nota49 = 0, nota50 = 0;
    int nota51 = 0, nota52 = 0, nota53 = 0, nota54 = 0, nota55 = 0, nota56 = 0, nota57 = 0, nota58 = 0, nota59 = 0, nota60 = 0;

    float calc1 = 0, calc2 = 0, calc3 = 0, calc4 = 0, calc5 = 0, calc6 = 0, calc7 = 0, calc8 = 0, calc9 = 0, calc10 = 0;
    float calc11 = 0, calc12 = 0, calc13 = 0, calc14 = 0, calc15 = 0, calc16 = 0, calc17 = 0, calc18 = 0, calc19 = 0, calc20 = 0;
    float calc21 = 0, calc22 = 0, calc23 = 0, calc24 = 0, calc25 = 0, calc26 = 0, calc27 = 0, calc28 = 0, calc29 = 0, calc30 = 0;
    float calc31 = 0, calc32 = 0, calc33 = 0, calc34 = 0, calc35 = 0, calc36 = 0, calc37 = 0, calc38 = 0, calc39 = 0, calc40 = 0;
    float calc41 = 0, calc42 = 0, calc43 = 0, calc44 = 0, calc45 = 0, calc46 = 0, calc47 = 0, calc48 = 0, calc49 = 0, calc50 = 0;
    float calc51 = 0, calc52 = 0, calc53 = 0, calc54 = 0, calc55 = 0, calc56 = 0, calc57 = 0, calc58 = 0, calc59 = 0, calc60 = 0;

    float mg1 = 0, mg2 = 0, mg3 = 0, mg4 = 0, mg5 = 0, mg6 = 0, mg7 = 0, mg8 = 0, mg9 = 0, mg10 = 0;
    float mg11 = 0, mg12 = 0, mg13 = 0, mg14 = 0, mg15 = 0, mg16 = 0, mg17 = 0, mg18 = 0, mg19 = 0, mg20 = 0;
    float mg21 = 0, mg22 = 0, mg23 = 0, mg24 = 0, mg25 = 0, mg26 = 0, mg27 = 0, mg28 = 0, mg29 = 0, mg30 = 0;
    float mg31 = 0, mg32 = 0, mg33 = 0, mg34 = 0, mg35 = 0, mg36 = 0, mg37 = 0, mg38 = 0, mg39 = 0, mg40 = 0;
    float mg41 = 0, mg42 = 0, mg43 = 0, mg44 = 0, mg45 = 0, mg46 = 0, mg47 = 0, mg48 = 0, mg49 = 0, mg50 = 0;
    float mg51 = 0, mg52 = 0, mg53 = 0, mg54 = 0, mg55 = 0, mg56 = 0, mg57 = 0, mg58 = 0, mg59 = 0, mg60 = 0;

    float avf1 = 0, avf2 = 0, avf3 = 0, avf4 = 0, avf5 = 0, avf6 = 0, avf7 = 0, avf8 = 0, avf9 = 0, avf10 = 0;
    float avf11 = 0, avf12 = 0, avf13 = 0, avf14 = 0, avf15 = 0, avf16 = 0, avf17 = 0, avf18 = 0, avf19 = 0, avf20 = 0;
    float avf21 = 0, avf22 = 0, avf23 = 0, avf24 = 0, avf25 = 0, avf26 = 0, avf27 = 0, avf28 = 0, avf29 = 0, avf30 = 0;
    float avf31 = 0, avf32 = 0, avf33 = 0, avf34 = 0, avf35 = 0, avf36 = 0, avf37 = 0, avf38 = 0, avf39 = 0, avf40 = 0;
    float avf41 = 0, avf42 = 0, avf43 = 0, avf44 = 0, avf45 = 0, avf46 = 0, avf47 = 0, avf48 = 0, avf49 = 0, avf50 = 0;
    float avf51 = 0, avf52 = 0, avf53 = 0, avf54 = 0, avf55 = 0, avf56 = 0, avf57 = 0, avf58 = 0, avf59 = 0, avf60 = 0;

    float nota1_aluno1c2m1 = 0, nota2_aluno1c2m1 = 0, nota1_aluno2c2m1 = 0, nota2_aluno2c2m1 = 0, nota1_aluno3c2m1 = 0, nota2_aluno3c2m1 = 0, nota1_aluno4c2m1 = 0, nota2_aluno4c2m1 = 0, nota1_aluno5c2m1 = 0, nota2_aluno5c2m1 = 0;
    float nota1_aluno1c2m2 = 0, nota2_aluno1c2m2 = 0, nota1_aluno2c2m2 = 0, nota2_aluno2c2m2 = 0, nota1_aluno3c2m2 = 0, nota2_aluno3c2m2 = 0, nota1_aluno4c2m2 = 0, nota2_aluno4c2m2 = 0, nota1_aluno5c2m2 = 0, nota2_aluno5c2m2 = 0;
    float nota1_aluno1c2m3 = 0, nota2_aluno1c2m3 = 0, nota1_aluno2c2m3 = 0, nota2_aluno2c2m3 = 0, nota1_aluno3c2m3 = 0, nota2_aluno3c2m3 = 0, nota1_aluno4c2m3 = 0, nota2_aluno4c2m3 = 0, nota1_aluno5c2m3 = 0, nota2_aluno5c2m3 = 0;
    float nota1_aluno1c2m4 = 0, nota2_aluno1c2m4 = 0, nota1_aluno2c2m4 = 0, nota2_aluno2c2m4 = 0, nota1_aluno3c2m4 = 0, nota2_aluno3c2m4 = 0, nota1_aluno4c2m4 = 0, nota2_aluno4c2m4 = 0, nota1_aluno5c2m4 = 0, nota2_aluno5c2m4 = 0;
    float nota1_aluno1c2m5 = 0, nota2_aluno1c2m5 = 0, nota1_aluno2c2m5 = 0, nota2_aluno2c2m5 = 0, nota1_aluno3c2m5 = 0, nota2_aluno3c2m5 = 0, nota1_aluno4c2m5 = 0, nota2_aluno4c2m5 = 0, nota1_aluno5c2m5 = 0, nota2_aluno5c2m5 = 0;
    float nota1_aluno1c2m6 = 0, nota2_aluno1c2m6 = 0, nota1_aluno2c2m6 = 0, nota2_aluno2c2m6 = 0, nota1_aluno3c2m6 = 0, nota2_aluno3c2m6 = 0, nota1_aluno4c2m6 = 0, nota2_aluno4c2m6 = 0, nota1_aluno5c2m6 = 0, nota2_aluno5c2m6 = 0;

    int nota61 = 0, nota62 = 0, nota63 = 0, nota64 = 0, nota65 = 0, nota66 = 0, nota67 = 0, nota68 = 0, nota69 = 0, nota70 = 0;
    int nota71 = 0, nota72 = 0, nota73 = 0, nota74 = 0, nota75 = 0, nota76 = 0, nota77 = 0, nota78 = 0, nota79 = 0, nota80 = 0;
    int nota81 = 0, nota82 = 0, nota83 = 0, nota84 = 0, nota85 = 0, nota86 = 0, nota87 = 0, nota88 = 0, nota89 = 0, nota90 = 0;
    int nota91 = 0, nota92 = 0, nota93 = 0, nota94 = 0, nota95 = 0, nota96 = 0, nota97 = 0, nota98 = 0, nota99 = 0, nota100 = 0;
    int nota101 = 0, nota102 = 0, nota103 = 0, nota104 = 0, nota105 = 0, nota106 = 0, nota107 = 0, nota108 = 0, nota109 = 0, nota110 = 0;
    int nota111 = 0, nota112 = 0, nota113 = 0, nota114 = 0, nota115 = 0, nota116 = 0, nota117 = 0, nota118 = 0, nota119 = 0, nota120 = 0;

    float calc61 = 0, calc62 = 0, calc63 = 0, calc64 = 0, calc65 = 0, calc66 = 0, calc67 = 0, calc68 = 0, calc69 = 0, calc70 = 0;
    float calc71 = 0, calc72 = 0, calc73 = 0, calc74 = 0, calc75 = 0, calc76 = 0, calc77 = 0, calc78 = 0, calc79 = 0, calc820 = 0;
    float calc81 = 0, calc82 = 0, calc83 = 0, calc84 = 0, calc85 = 0, calc86 = 0, calc87 = 0, calc88 = 0, calc89 = 0, calc90 = 0;
    float calc91 = 0, calc92 = 0, calc93 = 0, calc94 = 0, calc95 = 0, calc96 = 0, calc97 = 0, calc98 = 0, calc99 = 0, calc100 = 0;
    float calc101 = 0, calc102 = 0, calc103 = 0, calc104 = 0, calc105 = 0, calc106 = 0, calc107 = 0, calc108 = 0, calc109 = 0, calc110 = 0;
    float calc111 = 0, calc112 = 0, calc113 = 0, calc114 = 0, calc115 = 0, calc116 = 0, calc117 = 0, calc118 = 0, calc119 = 0, calc120 = 0;

    float mg61 = 0, mg62 = 0, mg63 = 0, mg64 = 0, mg65 = 0, mg66 = 0, mg67 = 0, mg68 = 0, mg69 = 0, mg70 = 0;
    float mg71 = 0, mg72 = 0, mg73 = 0, mg74 = 0, mg75 = 0, mg76 = 0, mg77 = 0, mg78 = 0, mg79 = 0, mg80 = 0;
    float mg81 = 0, mg82 = 0, mg83 = 0, mg84 = 0, mg85 = 0, mg86 = 0, mg87 = 0, mg88 = 0, mg89 = 0, mg90 = 0;
    float mg91 = 0, mg92 = 0, mg93 = 0, mg94 = 0, mg95 = 0, mg96 = 0, mg97 = 0, mg98 = 0, mg99 = 0, mg100 = 0;
    float mg101 = 0, mg102 = 0, mg103 = 0, mg104 = 0, mg105 = 0, mg106 = 0, mg107 = 0, mg108 = 0, mg109 = 0, mg110 = 0;
    float mg111 = 0, mg112 = 0, mg113 = 0, mg114 = 0, mg115 = 0, mg116 = 0, mg117 = 0, mg118 = 0, mg119 = 0, mg120 = 0;

    float avf61 = 0, avf62 = 0, avf63 = 0, avf64 = 0, avf65 = 0, avf66 = 0, avf67 = 0, avf68 = 0, avf69 = 0, avf70 = 0;
    float avf71 = 0, avf72 = 0, avf73 = 0, avf74 = 0, avf75 = 0, avf76 = 0, avf77 = 0, avf78 = 0, avf79 = 0, avf80 = 0;
    float avf81 = 0, avf82 = 0, avf83 = 0, avf84 = 0, avf85 = 0, avf86 = 0, avf87 = 0, avf88 = 0, avf89 = 0, avf90 = 0;
    float avf91 = 0, avf92 = 0, avf93 = 0, avf94 = 0, avf95 = 0, avf96 = 0, avf97 = 0, avf98 = 0, avf99 = 0, avf100 = 0;
    float avf101 = 0, avf102 = 0, avf103 = 0, avf104 = 0, avf105 = 0, avf106 = 0, avf107 = 0, avf108 = 0, avf109 = 0, avf110 = 0;
    float avf111 = 0, avf112 = 0, avf113 = 0, avf114 = 0, avf115 = 0, avf116 = 0, avf117 = 0, avf118 = 0, avf119 = 0, avf120 = 0;

    char notaaluno1[2] = "", notaaluno2[2] = "", notaaluno3[2] = "", notaaluno4[2] = "", notaaluno5[2] = "", notaaluno6[2] = "", notaaluno7[2] = "", notaaluno8[2] = "", notaaluno9[2] = "", notaaluno10[2] = "";
    char notaaluno11[2] = "", notaaluno12[2] = "", notaaluno13[2] = "", notaaluno14[2] = "", notaaluno15[2] = "", notaaluno16[2] = "", notaaluno17[2] = "", notaaluno18[2] = "", notaaluno19[2] = "", notaaluno20[2] = "";
    char notaaluno21[2] = "", notaaluno22[2] = "", notaaluno23[2] = "", notaaluno24[2] = "", notaaluno25[2] = "", notaaluno26[2] = "", notaaluno27[2] = "", notaaluno28[2] = "", notaaluno29[2] = "", notaaluno30[2] = "";
    char notaaluno31[2] = "", notaaluno32[2] = "", notaaluno33[2] = "", notaaluno34[2] = "", notaaluno35[2] = "", notaaluno36[2] = "", notaaluno37[2] = "", notaaluno38[2] = "", notaaluno39[2] = "", notaaluno40[2] = "";
    char notaaluno41[2] = "", notaaluno42[2] = "", notaaluno43[2] = "", notaaluno44[2] = "", notaaluno45[2] = "", notaaluno46[2] = "", notaaluno47[2] = "", notaaluno48[2] = "", notaaluno49[2] = "", notaaluno50[2] = "";
    char notaaluno51[2] = "", notaaluno52[2] = "", notaaluno53[2] = "", notaaluno54[2] = "", notaaluno55[2] = "", notaaluno56[2] = "", notaaluno57[2] = "", notaaluno58[2] = "", notaaluno59[2] = "", notaaluno60[2] = "";

    int consultas = 0, consultas_professor_curso = 0, consultas_professor_disciplina = 0, detalhe_prof = 0, consultas_professor_aluno = 0, consul_disciplina_aluno = 0;


    printf("========================================================================\n");
    printf("BEM VINDO AO AcadLan - FAÇA SUA ESCOLHA\n");
    printf("========================================================================\n");
    while (Menu == 0) {
        if (1 <= acadlan++) {
            printf("========================================================================\n");
            printf("AcadLan - FAÇA SUA ESCOLHA\n");
            printf("========================================================================\n");
        }
        printf("========================================================================\n");
        printf("CADASTRO [1] - CONSULTAS [2] - PAGAMENTO [3] -  SAIR [9]\n");
        printf("========================================================================\n");
        scanf("%d", &OpcaoMenu);

        while ((curso1 == 0 && curso2 == 0) && OpcaoMenu == 2 || OpcaoMenu == 3) {
            printf("CADASTRE UM CURSO PARA FAZER QUALQUER CONSULTA ::\n");
            scanf("%d", &OpcaoMenu);
            printf("\n\n");
        }

        while (OpcaoMenu != 1 && OpcaoMenu != 2 && OpcaoMenu != 3 && OpcaoMenu != 9) {
            printf("\nDIGITE SOMENTE UMA DAS OPÇOES CITADAS!\n");
            scanf("%d", &OpcaoMenu);
        }

        system("clear");
        switch (OpcaoMenu) {
            case 1:
            {
                printf("========================================================================\n");
                printf("ESCOLHA SUA OPÇAO DE CADASTRO ::\n");
                printf("========================================================================\n\n");
                printf("CADASTRAR         [1]\n");
                printf("ALTERAR CADASTRO  [2]\n");
                printf("\n========================================================================\n");
                scanf("%d", &OpcaCadastroMenu);

                while (curso1 == 0 && curso2 == 0 && OpcaCadastroMenu == 2) {
                    printf("CADASTRE UM CURSO PARA FAZER QUALQUER ALTERACAO ::\n");
                    scanf("%d", &OpcaoCadastro);
                    printf("\n\n");
                }

                while ((OpcaCadastroMenu != 1) && (OpcaCadastroMenu != 2)) {
                    printf("\nDIGITE SOMENTE UMA DAS OPÇOES CITADAS!\n");
                    scanf("%d", &OpcaCadastroMenu);
                }
                system("clear");
                switch (OpcaCadastroMenu) {
                    case 1:
                    {
                        printf("========================================================================\n");
                        printf("O QUE DESEJA CADASTRAR ::\n");
                        printf("========================================================================\n\n");
                        printf("CURSO      [1]\n");
                        printf("PROFESSOR  [2]\n");
                        printf("ALUNO      [3]\n");
                        printf("\n========================================================================\n");
                        scanf("%d", &OpcaoCadastro);

                        ProfessorGeral = (ProfessorCadastradoSI + ProfessorCadastradoDI);

                        if (ProfessorGeral > 11) {
                            OpcaoProfessorGeral = 1;
                        } else
                            if (ProfessorGeral < 12) {
                            OpcaoProfessorGeral = 0;
                        }

                        while (curso1 == 0 && curso2 == 0 && OpcaoCadastro == 2 || OpcaoCadastro == 3) {
                            printf("CADASTRE UM CURSO PARA FAZER QUALQUER OUTRO CADASTRO ::\n");
                            scanf("%d", &OpcaoCadastro);
                            printf("\n\n");
                        }

                        while (OpcaoCadastro != 1 && OpcaoCadastro != 2 && OpcaoCadastro != 3) {
                            scanf("%d", &OpcaoCadastro);

                            if (OpcaoCadastro != 1 && OpcaoCadastro != 2 && OpcaoCadastro != 3) {
                                printf("\nDIGITE SOMENTE UMA DAS OPÇOES CITADAS!\n");
                            }
                            if (OpcaoProfessorGeral != 0) {
                                printf("\nNUMERO EXEDIDO DE CADASTRO PARA PROFESSORES\n");
                                printf("POR FAVOR, ESCOLHA OUTRA OPERAÇAO ::\n");
                                OpcaoCadastro = 0;
                            }
                            if ((OpcaoCadastro == 2) && (CadastroCurso1 < 1)) {
                                printf("NENHUM CURSO CADASTRADO, FAVOR CADASTRAR ALGUM CURSO\n\n");
                                OpcaoCadastro = 0;
                            }
                        }
                        printf("\n\n");

                        system("clear");
                        switch (OpcaoCadastro) {
                            case 1:
                            {
                                if (curso1 == 0 || curso2 == 0) {
                                    strcpy(cadastro_curso, cadastro_curso1);
                                } else {
                                    printf("========================================================================\n");
                                    printf("TODOS OS CURSOS ESTAO CADASTRADOS!\n");
                                    printf("========================================================================\n\n");
                                }
                                while (strcmp(cadastro_curso, cadastro_curso1) == 0 || strcmp(cadastro_curso, cadastro_curso2) == 0) {
                                    printf("========================================================================\n");
                                    printf("DIGITE O NOME DO CURSO PARA CADASTRAR ::\n");
                                    printf("========================================================================\n\n");

                                    escolhacurso = 0;

                                    if (curso1 == 0) {
                                        scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomecurso1);
                                        curso1 = 1;
                                        escolhacurso = 1;
                                    } else
                                        if (curso2 == 0) {
                                        scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomecurso2);
                                        curso2 = 1;
                                        escolhacurso = 2;
                                    }
                                    printf("\n\n");
                                    switch (escolhacurso) {
                                        case 1:
                                        {
                                            printf("DIGITE O NOME DA DISCIPLINA 1 DO 1º SEMESTRE DO CURSO DE %s ::\n", nomecurso1);
                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", curso1semestre1m1);

                                            printf("\n\n");
                                            printf("DIGITE O NOME DA DISCIPLINA 2 DO 1º SEMESTRE DO CURSO DE %s ::\n", nomecurso1);
                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", curso1semestre1m2);

                                            printf("\n\n");
                                            printf("DIGITE O NOME DA DISCIPLINA 1 DO 2º SEMESTRE DO CURSO DE %s ::\n", nomecurso1);
                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", curso1semestre2m1);

                                            printf("\n\n");
                                            printf("DIGITE O NOME DA DISCIPLINA 2 DO 2º SEMESTRE DO CURSO DE %s ::\n", nomecurso1);
                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", curso1semestre2m2);

                                            printf("\n\n");
                                            printf("DIGITE O NOME DA DISCIPLINA 1 DO 3º SEMESTRE DO CURSO DE %s ::\n", nomecurso1);
                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", curso1semestre3m1);

                                            printf("\n\n");
                                            printf("DIGITE O NOME DA DISCIPLINA 2 DO 3º SEMESTRE DO CURSO DE %s ::\n", nomecurso1);
                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", curso1semestre3m2);

                                            printf("\n\n");
                                            printf("DESEJA CADASTRAR OUTRO CURSO ? ::   [S/N]\n");
                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", cadastro_curso);
                                            printf("\n\n");

                                            if (strcmp(cadastro_curso, "s") == 0 || strcmp(cadastro_curso, "S") == 0) {
                                                system("clear");
                                            }
                                            break;
                                        }
                                        case 2:
                                        {
                                            printf("DDIGITE O NOME DA DISCIPLINA 1 DO 1º SEMESTRE DO CURSO DE %s ::\n\n", nomecurso2);
                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", curso2semestre1m1);

                                            printf("\n\n");
                                            printf("DIGITE O NOME DA DISCIPLINA 2 DO 1º SEMESTRE DO CURSO DE %s ::\n", nomecurso2);
                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", curso2semestre1m2);

                                            printf("\n\n");
                                            printf("DIGITE O NOME DA DISCIPLINA 1 DO 2º SEMESTRE DO CURSO DE %s ::\n", nomecurso2);
                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", curso2semestre2m1);

                                            printf("\n\n");
                                            printf("DIGITE O NOME DA DISCIPLINA 2 DO 2º SEMESTRE DO CURSO DE %s ::\n", nomecurso2);
                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", curso2semestre2m2);

                                            printf("\n\n");
                                            printf("DIGITE O NOME DA DISCIPLINA 1 DO 3º SEMESTRE DO CURSO DE %s ::\n", nomecurso2);
                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", curso2semestre3m1);

                                            printf("\n\n");
                                            printf("DIGITE O NOME DA DISCIPLINA 2 DO 3º SEMESTRE DO CURSO DE %s ::\n", nomecurso2);
                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", curso2semestre3m2);

                                            strcpy(cadastro_curso, "n");
                                            break;
                                        }
                                    }
                                }
                                break;
                            }
                            case 2:
                            {
                                printf("\n\n");
                                printf("EM QUAL CURSO DESEJA CADASTRAR O PROFESSOR ::\n");
                                if (curso1 == 1 && curso2 == 1) {
                                    printf("%s [1]\n", nomecurso1);
                                    printf("%s [2]\n", nomecurso2);
                                    scanf("%d", &cadastro_professor_curso);
                                    while (cadastro_professor_curso != 1 && cadastro_professor_curso != 2) {
                                        printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                        scanf("%d", &cadastro_professor_curso);
                                    }
                                } else {
                                    if (curso1 == 0 && curso2 == 1) {
                                        printf("%s [1]\n", nomecurso2);
                                        scanf("%d", &cadastro_professor_curso);
                                        while (cadastro_professor_curso != 1) {
                                            printf("ESCOLHA SOMENTE A OPCAO CITADAS ::\n");
                                            scanf("%d", &cadastro_professor_curso);
                                        }
                                        cadastro_professor_curso = 2;

                                    } else {
                                        if (curso1 == 1 && curso2 == 0) {
                                            printf("%s [1]\n", nomecurso1);
                                            scanf("%d", &cadastro_professor_curso);
                                            while (cadastro_professor_curso != 1) {
                                                printf("ESCOLHA SOMENTE A OPCAO CITADAS ::\n");
                                                scanf("%d", &cadastro_professor_curso);
                                            }

                                        }
                                    }
                                }
                                switch (cadastro_professor_curso) {
                                    case 1:
                                    {
                                        printf("\n\n");
                                        printf("EM QUAL DISCIPLINA DESEJA CADASTRAR O PROFESSOR ::\n\n");
                                        printf("%s - 1º SEMESTRE [1]\n", curso1semestre1m1);
                                        printf("%s - 1º SEMESTRE [2]\n", curso1semestre1m2);
                                        printf("%s - 2º SEMESTRE [3]\n", curso1semestre2m1);
                                        printf("%s - 2º SEMESTRE [4]\n", curso1semestre2m2);
                                        printf("%s - 3º SEMESTRE [5]\n", curso1semestre3m1);
                                        printf("%s - 3º SEMESTRE [6]\n", curso1semestre3m2);
                                        scanf("%d", &cadastro_professor_disciplina);

                                        while (cadastro_professor_disciplina != 1 && cadastro_professor_disciplina != 2 && cadastro_professor_disciplina != 3 && cadastro_professor_disciplina != 4 && cadastro_professor_disciplina != 5 && cadastro_professor_disciplina != 6) {
                                            printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                            scanf("%d", &cadastro_professor_disciplina);
                                        }

                                        printf("\n\n");

                                        switch (cadastro_professor_disciplina) {
                                            case 1:
                                            {
                                                if (ProfessorSI1 == 0) {
                                                    printf("QUAL O NOME DO PROFESSOR ::\n");
                                                    scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", NomeProfSI1);
                                                    printf("CPF :: ");
                                                    scanf("%d", &cpfsi1);
                                                    ProfessorSI1 = 1;
                                                } else {
                                                    printf("HA PROFESSOR CADASTRADO NESTA DISCIPLINA\n");
                                                    printf("ESCOLHA OUTRA DISCIPLINA\n");
                                                }
                                                break;
                                            }
                                            case 2:
                                            {
                                                if (ProfessorSI2 == 0) {
                                                    printf("QUAL O NOME DO PROFESSOR :: ");
                                                    scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", NomeProfSI2);
                                                    printf("CPF :: ");
                                                    scanf("%d", &cpfsi2);
                                                    ProfessorSI2 = 1;
                                                } else {
                                                    printf("HA PROFESSOR CADASTRADO NESTA DISCIPLINA\n");
                                                    printf("ESCOLHA OUTRA DISCIPLINA\n");
                                                }
                                                break;
                                            }
                                            case 3:
                                            {
                                                if (ProfessorSI3 == 0) {
                                                    printf("QUAL O NOME DO PROFESSOR ::\n");
                                                    scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", NomeProfSI3);
                                                    printf("CPF :: ");
                                                    scanf("%d", &cpfsi3);
                                                    ProfessorSI3 = 1;
                                                } else {
                                                    printf("HA PROFESSOR CADASTRADO NESTA DISCIPLINA\n");
                                                    printf("ESCOLHA OUTRA DISCIPLINA\n");
                                                }
                                                break;
                                            }
                                            case 4:
                                            {
                                                if (ProfessorSI4 == 0) {
                                                    printf("QUAL O NOME DO PROFESSOR ::\n");
                                                    scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", NomeProfSI4);
                                                    printf("CPF :: ");
                                                    scanf("%d", &cpfsi4);
                                                    ProfessorSI4 = 1;
                                                } else {
                                                    printf("HA PROFESSOR CADASTRADO NESTA DISCIPLINA\n");
                                                    printf("ESCOLHA OUTRA DISCIPLINA\n");
                                                }
                                                break;
                                            }
                                            case 5:
                                            {
                                                if (ProfessorSI5 == 0) {
                                                    printf("QUAL O NOME DO PROFESSOR ::\n");
                                                    scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", NomeProfSI5);
                                                    printf("CPF :: ");
                                                    scanf("%d", &cpfsi5);
                                                    ProfessorSI5 = 1;
                                                } else {
                                                    printf("HA PROFESSOR CADASTRADO NESTA DISCIPLINA\n");
                                                    printf("ESCOLHA OUTRA DISCIPLINA\n");
                                                }
                                                break;
                                            }
                                            case 6:
                                            {
                                                if (ProfessorSI6 == 0) {
                                                    printf("QUAL O NOME DO PROFESSOR ::\n");
                                                    scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", NomeProfSI6);
                                                    printf("CPF :: ");
                                                    scanf("%d", &cpfsi6);
                                                    ProfessorSI6 = 1;
                                                } else {
                                                    printf("HA PROFESSOR CADASTRADO NESTA DISCIPLINA\n");
                                                    printf("ESCOLHA OUTRA DISCIPLINA\n");
                                                }
                                                break;
                                            }
                                        }
                                        ProfessorCadastradoSI++;
                                        break;
                                    }//termino case 1

                                    case 2:
                                    {
                                        printf("\n\n");
                                        printf("EM QUAL DISCIPLINA DESEJA CADASTRAR O PROFESSOR ::\n\n");
                                        printf("%s - 1º SEMESTRE [1]\n", curso2semestre1m1);
                                        printf("%s - 1º SEMESTRE [2]\n", curso2semestre1m2);
                                        printf("%s - 2º SEMESTRE [3]\n", curso2semestre2m1);
                                        printf("%s - 2º SEMESTRE [4]\n", curso2semestre2m2);
                                        printf("%s - 3º SEMESTRE [5]\n", curso2semestre3m1);
                                        printf("%s - 3º SEMESTRE [6]\n", curso2semestre3m2);
                                        scanf("%d", cadastro_professor_disciplina);

                                        while (cadastro_professor_disciplina != 1 && cadastro_professor_disciplina != 2 && cadastro_professor_disciplina != 3 && cadastro_professor_disciplina != 4 && cadastro_professor_disciplina != 5 && cadastro_professor_disciplina != 6) {
                                            printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                            scanf("%d", &cadastro_professor_disciplina);
                                        }

                                        switch (cadastro_professor_disciplina) {
                                            case 1:
                                            {
                                                if (ProfessorDI1 == 0) {
                                                    printf("QUAL O NOME DO PROFESSOR ::\n");
                                                    scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", NomeProfDI1);
                                                    printf("CPF :: ");
                                                    scanf("%d", &cpfdi1);
                                                    ProfessorDI1 = 1;
                                                } else {
                                                    printf("HA PROFESSOR CADASTRADO NESTA DISCIPLINA\n");
                                                    printf("ESCOLHA OUTRA DISCIPLINA\n");
                                                }
                                                break;
                                            }
                                            case 2:
                                            {
                                                if (ProfessorDI2 == 0) {
                                                    printf("QUAL O NOME DO PROFESSOR ::\n");
                                                    scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", NomeProfDI2);
                                                    printf("CPF :: ");
                                                    scanf("%d", &cpfdi2);
                                                    ProfessorDI2 = 1;
                                                } else {
                                                    printf("HA PROFESSOR CADASTRADO NESTA DISCIPLINA\n");
                                                    printf("ESCOLHA OUTRA DISCIPLINA\n");
                                                }
                                                break;
                                            }
                                            case 3:
                                            {
                                                if (ProfessorDI3 == 0) {
                                                    printf("QUAL O NOME DO PROFESSOR ::\n");
                                                    scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", NomeProfDI3);
                                                    printf("CPF :: ");
                                                    scanf("%d", &cpfdi3);
                                                    ProfessorDI3 = 1;
                                                } else {
                                                    printf("HA PROFESSOR CADASTRADO NESTA DISCIPLINA\n");
                                                    printf("ESCOLHA OUTRA DISCIPLINA\n");
                                                }
                                                break;
                                            }
                                            case 4:
                                            {
                                                if (ProfessorDI4 == 0) {
                                                    printf("QUAL O NOME DO PROFESSOR ::\n");
                                                    scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", NomeProfDI4);
                                                    printf("CPF :: ");
                                                    scanf("%d", &cpfdi4);
                                                    ProfessorDI4 = 1;
                                                } else {
                                                    printf("HA PROFESSOR CADASTRADO NESTA DISCIPLINA\n");
                                                    printf("ESCOLHA OUTRA DISCIPLINA\n");
                                                }
                                                break;
                                            }
                                            case 5:
                                            {
                                                if (ProfessorDI5 == 0) {
                                                    printf("QUAL O NOME DO PROFESSOR ::\n");
                                                    scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", NomeProfDI5);
                                                    printf("CPF :: ");
                                                    scanf("%d", &cpfdi5);
                                                    ProfessorDI5 = 1;
                                                } else {
                                                    printf("HA PROFESSOR CADASTRADO NESTA DISCIPLINA\n");
                                                    printf("ESCOLHA OUTRA DISCIPLINA\n");
                                                }
                                                break;
                                            }
                                            case 6:
                                            {
                                                if (ProfessorDI6 == 0) {
                                                    printf("QUAL O NOME DO PROFESSOR ::\n");
                                                    scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", NomeProfDI6);
                                                    printf("CPF :: ");
                                                    scanf("%d", &cpfdi6);
                                                    ProfessorDI6 = 1;
                                                } else {
                                                    printf("HA PROFESSOR CADASTRADO NESTA DISCIPLINA\n");
                                                    printf("ESCOLHA OUTRA DISCIPLINA\n");
                                                }
                                                break;
                                            }
                                        }
                                        ProfessorCadastradoDI++;
                                        break;
                                    }//termino case 2
                                }

                                break; // fim case 2
                            }

                            case 3:
                            {
                                printf("\n\n");
                                printf("O QUE DESEJA CADASTRAR EM ALUNO ::\n");
                                printf("NOVO ALUNO      [1]\n");
                                printf("NOTAS DE ALUNO  [2]\n");
                                scanf("%d", &q_aluno);

                                while (q_aluno != 1 && q_aluno != 2) {
                                    printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                    scanf("%d", &q_aluno);
                                }

                                switch (q_aluno) {

                                    case 1:
                                    {
                                        printf("EM QUAL CURSO DESEJA CADASTRAR O ALUNO ::\n");
                                        if (curso1 == 1 && curso2 == 1) {
                                            printf("%s [1]\n", nomecurso1);
                                            printf("%s [2]\n", nomecurso2);
                                            scanf("%d", &cursocadastroaluno);
                                            while (cursocadastroaluno != 1 && cursocadastroaluno != 2) {
                                                printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                                scanf("%d", &cursocadastroaluno);
                                            }
                                        } else {
                                            if (curso1 == 0 && curso2 == 1) {
                                                printf("%s [1]\n", nomecurso2);
                                                scanf("%d", &cursocadastroaluno);
                                                while (cursocadastroaluno != 1) {
                                                    printf("ESCOLHA SOMENTE A OPCAO CITADAS ::\n");
                                                    scanf("%d", &cursocadastroaluno);
                                                }
                                                cursocadastroaluno = 2;

                                            } else {
                                                if (curso1 == 1 && curso2 == 0) {
                                                    printf("%s [1]\n", nomecurso1);
                                                    scanf("%d", &cursocadastroaluno);
                                                    while (cursocadastroaluno != 1) {
                                                        printf("ESCOLHA SOMENTE A OPCAO CITADAS ::\n");
                                                        scanf("%d", &cursocadastroaluno);
                                                    }

                                                }
                                            }
                                        }

                                        switch (cursocadastroaluno) {
                                            case 1:
                                            {
                                                printf("EM QUAL DISCIPLINA DESEJA CADASTRAR O ALUNO ::\n\n");
                                                printf("%s - 1º SEMESTRE [1]\n", curso1semestre1m1);
                                                printf("%s - 1º SEMESTRE [2]\n", curso1semestre1m2);
                                                printf("%s - 2º SEMESTRE [3]\n", curso1semestre2m1);
                                                printf("%s - 2º SEMESTRE [4]\n", curso1semestre2m2);
                                                printf("%s - 3º SEMESTRE [5]\n", curso1semestre3m1);
                                                printf("%s - 3º SEMESTRE [6]\n", curso1semestre3m2);
                                                scanf("%d", &disciplinacadastroaluno);

                                                while (disciplinacadastroaluno != 1 && disciplinacadastroaluno != 2 && disciplinacadastroaluno != 3 && disciplinacadastroaluno != 4 && disciplinacadastroaluno != 5 && disciplinacadastroaluno != 6) {
                                                    printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                                    scanf("%d", &disciplinacadastroaluno);
                                                }

                                                switch (disciplinacadastroaluno) {
                                                    case 1:
                                                    {
                                                        printf("QUAL NOME DO ALUNO PARA CADASTRAR ::\n");

                                                        if (aluno1c1m1 == 0) {
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno1c1m1);
                                                            printf("CPF :: ");
                                                            scanf("%d", &cpf1);
                                                            aluno1c1m1 = 1;
                                                            printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                        } else {
                                                            if (aluno2c1m1 == 0) {
                                                                scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno2c1m1);
                                                                printf("CPF :: ");
                                                                scanf("%d", &cpf2);
                                                                aluno2c1m1 = 1;
                                                                printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                            } else {
                                                                if (aluno3c1m1 == 0) {
                                                                    scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno3c1m1);
                                                                    printf("CPF :: ");
                                                                    scanf("%d", &cpf3);
                                                                    aluno3c1m1 = 1;
                                                                    printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                                } else {
                                                                    if (aluno4c1m1 == 0) {
                                                                        scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno4c1m1);
                                                                        printf("CPF :: ");
                                                                        scanf("%d", &cpf4);
                                                                        aluno4c1m1 = 1;
                                                                        printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                                    } else {
                                                                        if (aluno5c1m1 == 0) {
                                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno5c1m1);
                                                                            printf("CPF :: ");
                                                                            scanf("%d", &cpf5);
                                                                            aluno5c1m1 = 1;
                                                                            printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        break;
                                                    } //case 1
                                                    case 2:
                                                    {
                                                        printf("QUAL NOME DO ALUNO PARA CADASTRAR ::\n");

                                                        if (aluno1c1m2 == 0) {
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno1c1m2);
                                                            printf("CPF :: ");
                                                            scanf("%d", &cpf6);
                                                            aluno1c1m2 = 1;
                                                            printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                        } else {
                                                            if (aluno2c1m2 == 0) {
                                                                scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno2c1m2);
                                                                printf("CPF :: ");
                                                                scanf("%d", &cpf7);
                                                                aluno2c1m2 = 1;
                                                                printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                            } else {
                                                                if (aluno3c1m2 == 0) {
                                                                    scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno3c1m2);
                                                                    printf("CPF :: ");
                                                                    scanf("%d", &cpf8);
                                                                    aluno3c1m2 = 1;
                                                                    printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                                } else {
                                                                    if (aluno4c1m2 == 0) {
                                                                        scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno4c1m2);
                                                                        printf("CPF :: ");
                                                                        scanf("%d", &cpf9);
                                                                        aluno4c1m2 = 1;
                                                                        printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                                    } else {
                                                                        if (aluno5c1m2 == 0) {
                                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno5c1m2);
                                                                            printf("CPF :: ");
                                                                            scanf("%d", &cpf10);
                                                                            aluno5c1m2 = 1;
                                                                            printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        break;
                                                    } //case 2
                                                    case 3:
                                                    {
                                                        printf("QUAL NOME DO ALUNO PARA CADASTRAR ::\n");

                                                        if (aluno1c1m3 == 0) {
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno1c1m3);
                                                            printf("CPF :: ");
                                                            scanf("%d", &cpf11);
                                                            aluno1c1m3 = 1;
                                                            printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                        } else {
                                                            if (aluno2c1m3 == 0) {
                                                                scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno2c1m3);
                                                                printf("CPF :: ");
                                                                scanf("%d", &cpf12);
                                                                aluno2c1m3 = 1;
                                                                printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                            } else {
                                                                if (aluno3c1m3 == 0) {
                                                                    scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno3c1m3);
                                                                    printf("CPF :: ");
                                                                    scanf("%d", &cpf13);
                                                                    aluno3c1m3 = 1;
                                                                    printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                                } else {
                                                                    if (aluno4c1m3 == 0) {
                                                                        scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno4c1m3);
                                                                        printf("CPF :: ");
                                                                        scanf("%d", &cpf14);
                                                                        aluno4c1m3 = 1;
                                                                        printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                                    } else {
                                                                        if (aluno5c1m3 == 0) {
                                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno5c1m3);
                                                                            printf("CPF :: ");
                                                                            scanf("%d", &cpf15);
                                                                            aluno5c1m3 = 1;
                                                                            printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        break;
                                                    } //case 3
                                                    case 4:
                                                    {
                                                        printf("QUAL NOME DO ALUNO PARA CADASTRAR ::\n");

                                                        if (aluno1c1m4 == 0) {
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno1c1m4);
                                                            printf("CPF :: ");
                                                            scanf("%d", &cpf16);
                                                            aluno1c1m4 = 1;
                                                            printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                        } else {
                                                            if (aluno2c1m4 == 0) {
                                                                scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno2c1m4);
                                                                printf("CPF :: ");
                                                                scanf("%d", &cpf17);
                                                                aluno2c1m4 = 1;
                                                                printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                            } else {
                                                                if (aluno3c1m4 == 0) {
                                                                    scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno3c1m4);
                                                                    printf("CPF :: ");
                                                                    scanf("%d", &cpf18);
                                                                    aluno3c1m4 = 1;
                                                                    printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                                } else {
                                                                    if (aluno4c1m4 == 0) {
                                                                        scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno4c1m4);
                                                                        printf("CPF :: ");
                                                                        scanf("%d", &cpf19);
                                                                        aluno4c1m4 = 1;
                                                                        printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                                    } else {
                                                                        if (aluno5c1m4 == 0) {
                                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno5c1m4);
                                                                            printf("CPF :: ");
                                                                            scanf("%d", &cpf20);
                                                                            aluno5c1m4 = 1;
                                                                            printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        break;
                                                    } //case 4
                                                    case 5:
                                                    {
                                                        printf("QUAL NOME DO ALUNO PARA CADASTRAR ::\n");

                                                        if (aluno1c1m5 == 0) {
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno1c1m5);
                                                            printf("CPF :: ");
                                                            scanf("%d", &cpf21);
                                                            aluno1c1m5 = 1;
                                                            printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                        } else {
                                                            if (aluno2c1m5 == 0) {
                                                                scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno2c1m5);
                                                                printf("CPF :: ");
                                                                scanf("%d", &cpf22);
                                                                aluno2c1m5 = 1;
                                                                printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                            } else {
                                                                if (aluno3c1m5 == 0) {
                                                                    scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno3c1m5);
                                                                    printf("CPF :: ");
                                                                    scanf("%d", &cpf23);
                                                                    aluno3c1m5 = 1;
                                                                    printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                                } else {
                                                                    if (aluno4c1m5 == 0) {
                                                                        scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno4c1m5);
                                                                        printf("CPF :: ");
                                                                        scanf("%d", &cpf24);
                                                                        aluno4c1m5 = 1;
                                                                        printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                                    } else {
                                                                        if (aluno5c1m5 == 0) {
                                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno5c1m5);
                                                                            printf("CPF :: ");
                                                                            scanf("%d", &cpf25);
                                                                            aluno5c1m5 = 1;
                                                                            printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        break;
                                                    }//case 5
                                                    case 6:
                                                    {
                                                        printf("QUAL NOME DO ALUNO PARA CADASTRAR ::\n");

                                                        if (aluno1c1m6 == 0) {
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno1c1m6);
                                                            printf("CPF :: ");
                                                            scanf("%d", &cpf26);
                                                            aluno1c1m6 = 1;
                                                            printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                        } else {
                                                            if (aluno2c1m6 == 0) {
                                                                scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno2c1m6);
                                                                printf("CPF :: ");
                                                                scanf("%d", &cpf27);
                                                                aluno2c1m6 = 1;
                                                                printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                            } else {
                                                                if (aluno3c1m6 == 0) {
                                                                    scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno3c1m6);
                                                                    printf("CPF :: ");
                                                                    scanf("%d", &cpf28);
                                                                    aluno3c1m6 = 1;
                                                                    printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                                } else {
                                                                    if (aluno4c1m6 == 0) {
                                                                        scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno4c1m6);
                                                                        printf("CPF :: ");
                                                                        scanf("%d", &cpf29);
                                                                        aluno4c1m6 = 1;
                                                                        printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                                    } else {
                                                                        if (aluno5c1m6 == 0) {
                                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno5c1m6);
                                                                            printf("CPF :: ");
                                                                            scanf("%d", &cpf30);
                                                                            aluno5c1m6 = 1;
                                                                            printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        break;
                                                    }//case 6
                                                }//switch disciplinacadastroaluno

                                                break;
                                            }//case 1
                                            case 2:
                                            {
                                                printf("EM QUAL DISCIPLINA DESEJA CADASTRAR O ALUNO ::\n\n");
                                                printf("%s - 1º SEMESTRE [1]\n", curso2semestre1m1);
                                                printf("%s - 1º SEMESTRE [2]\n", curso2semestre1m2);
                                                printf("%s - 2º SEMESTRE [3]\n", curso2semestre2m1);
                                                printf("%s - 2º SEMESTRE [4]\n", curso2semestre2m2);
                                                printf("%s - 3º SEMESTRE [5]\n", curso2semestre3m1);
                                                printf("%s - 3º SEMESTRE [6]\n", curso2semestre3m2);

                                                scanf("%d", &disciplinacadastroaluno);

                                                while (disciplinacadastroaluno != 1 && disciplinacadastroaluno != 2 && disciplinacadastroaluno != 3 && disciplinacadastroaluno != 4 && disciplinacadastroaluno != 5 && disciplinacadastroaluno != 6) {
                                                    printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                                    scanf("%d", &disciplinacadastroaluno);
                                                }

                                                switch (disciplinacadastroaluno) {
                                                    case 1:
                                                    {
                                                        printf("QUAL NOME DO ALUNO PARA CADASTRAR ::\n");

                                                        if (aluno1c2m1 == 0) {
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno1c2m1);
                                                            printf("CPF :: ");
                                                            scanf("%d", &cpf31);
                                                            aluno1c2m1 = 1;
                                                            printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                        } else {
                                                            if (aluno2c2m1 == 0) {
                                                                scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno2c2m1);
                                                                printf("CPF :: ");
                                                                scanf("%d", &cpf32);
                                                                aluno2c1m1 = 1;
                                                                printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                            } else {
                                                                if (aluno3c2m1 == 0) {
                                                                    scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno3c2m1);
                                                                    printf("CPF :: ");
                                                                    scanf("%d", &cpf33);
                                                                    aluno3c2m1 = 1;
                                                                    printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                                } else {
                                                                    if (aluno4c2m1 == 0) {
                                                                        scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno4c2m1);
                                                                        printf("CPF :: ");
                                                                        scanf("%d", &cpf34);
                                                                        aluno4c2m1 = 1;
                                                                        printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                                    } else {
                                                                        if (aluno5c2m1 == 0) {
                                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno5c2m1);
                                                                            printf("CPF :: ");
                                                                            scanf("%d", &cpf35);
                                                                            aluno5c2m1 = 1;
                                                                            printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        break;
                                                    } //case 1
                                                    case 2:
                                                    {
                                                        printf("QUAL NOME DO ALUNO PARA CADASTRAR ::\n");

                                                        if (aluno1c2m2 == 0) {
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno1c2m2);
                                                            printf("CPF :: ");
                                                            scanf("%d", &cpf36);
                                                            aluno1c2m2 = 1;
                                                            printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                        } else {
                                                            if (aluno2c2m2 == 0) {
                                                                scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno2c2m2);
                                                                printf("CPF :: ");
                                                                scanf("%d", &cpf37);
                                                                aluno2c2m2 = 1;
                                                                printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                            } else {
                                                                if (aluno3c2m2 == 0) {
                                                                    scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno3c2m2);
                                                                    printf("CPF :: ");
                                                                    scanf("%d", &cpf38);
                                                                    aluno3c2m2 = 1;
                                                                    printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                                } else {
                                                                    if (aluno4c2m2 == 0) {
                                                                        scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno4c2m2);
                                                                        printf("CPF :: ");
                                                                        scanf("%d", &cpf39);
                                                                        aluno4c2m2 = 1;
                                                                        printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                                    } else {
                                                                        if (aluno5c2m2 == 0) {
                                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno5c2m2);
                                                                            printf("CPF :: ");
                                                                            scanf("%d", &cpf40);
                                                                            aluno5c2m2 = 1;
                                                                            printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        break;
                                                    } //case 2
                                                    case 3:
                                                    {
                                                        printf("QUAL NOME DO ALUNO PARA CADASTRAR ::\n");

                                                        if (aluno1c2m3 == 0) {
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno1c2m3);
                                                            printf("CPF :: ");
                                                            scanf("%d", &cpf41);
                                                            aluno1c2m3 = 1;
                                                            printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                        } else {
                                                            if (aluno2c2m3 == 0) {
                                                                scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno2c2m3);
                                                                printf("CPF :: ");
                                                                scanf("%d", &cpf42);
                                                                aluno2c2m3 = 1;
                                                                printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                            } else {
                                                                if (aluno3c2m3 == 0) {
                                                                    scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno3c2m3);
                                                                    printf("CPF :: ");
                                                                    scanf("%d", &cpf43);
                                                                    aluno3c2m3 = 1;
                                                                    printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                                } else {
                                                                    if (aluno4c2m3 == 0) {
                                                                        scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno4c2m3);
                                                                        printf("CPF :: ");
                                                                        scanf("%d", &cpf44);
                                                                        aluno4c2m3 = 1;
                                                                        printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                                    } else {
                                                                        if (aluno5c2m3 == 0) {
                                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno5c2m3);
                                                                            printf("CPF :: ");
                                                                            scanf("%d", &cpf45);
                                                                            aluno5c2m3 = 1;
                                                                            printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        break;
                                                    } //case 3
                                                    case 4:
                                                    {
                                                        printf("QUAL NOME DO ALUNO PARA CADASTRAR ::\n");

                                                        if (aluno1c2m4 == 0) {
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno1c2m4);
                                                            printf("CPF :: ");
                                                            scanf("%d", &cpf46);
                                                            aluno1c2m4 = 1;
                                                            printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                        } else {
                                                            if (aluno2c2m4 == 0) {
                                                                scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno2c2m4);
                                                                printf("CPF :: ");
                                                                scanf("%d", &cpf47);
                                                                aluno2c2m4 = 1;
                                                                printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                            } else {
                                                                if (aluno3c2m4 == 0) {
                                                                    scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno3c2m4);
                                                                    printf("CPF :: ");
                                                                    scanf("%d", &cpf48);
                                                                    aluno3c2m4 = 1;
                                                                    printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                                } else {
                                                                    if (aluno4c2m4 == 0) {
                                                                        scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno4c2m4);
                                                                        printf("CPF :: ");
                                                                        scanf("%d", &cpf49);
                                                                        aluno4c2m4 = 1;
                                                                        printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                                    } else {
                                                                        if (aluno5c2m4 == 0) {
                                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno5c2m4);
                                                                            printf("CPF :: ");
                                                                            scanf("%d", &cpf50);
                                                                            aluno5c2m4 = 1;
                                                                            printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        break;
                                                    } //case 4
                                                    case 5:
                                                    {
                                                        printf("QUAL NOME DO ALUNO PARA CADASTRAR ::\n");

                                                        if (aluno1c2m5 == 0) {
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno1c2m5);
                                                            printf("CPF :: ");
                                                            scanf("%d", &cpf51);
                                                            aluno1c2m5 = 1;
                                                            printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                        } else {
                                                            if (aluno2c2m5 == 0) {
                                                                scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno2c2m5);
                                                                printf("CPF :: ");
                                                                scanf("%d", &cpf52);
                                                                aluno2c2m5 = 1;
                                                                printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                            } else {
                                                                if (aluno3c2m5 == 0) {
                                                                    scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno3c2m5);
                                                                    printf("CPF :: ");
                                                                    scanf("%d", &cpf53);
                                                                    aluno3c2m5 = 1;
                                                                    printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                                } else {
                                                                    if (aluno4c2m5 == 0) {
                                                                        scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno4c2m5);
                                                                        printf("CPF :: ");
                                                                        scanf("%d", &cpf54);
                                                                        aluno4c2m5 = 1;
                                                                        printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                                    } else {
                                                                        if (aluno5c2m5 == 0) {
                                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno5c2m5);
                                                                            printf("CPF :: ");
                                                                            scanf("%d", &cpf55);
                                                                            aluno5c2m5 = 1;
                                                                            printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        break;
                                                    }//case 5
                                                    case 6:
                                                    {
                                                        printf("QUAL NOME DO ALUNO PARA CADASTRAR ::\n");

                                                        if (aluno1c2m6 == 0) {
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno1c2m6);
                                                            printf("CPF :: ");
                                                            scanf("%d", &cpf56);
                                                            aluno1c2m6 = 1;
                                                            printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                        } else {
                                                            if (aluno2c2m6 == 0) {
                                                                scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno2c2m6);
                                                                printf("CPF :: ");
                                                                scanf("%d", &cpf57);
                                                                aluno2c2m6 = 1;
                                                                printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                            } else {
                                                                if (aluno3c2m6 == 0) {
                                                                    scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno3c2m6);
                                                                    printf("CPF :: ");
                                                                    scanf("%d", &cpf58);
                                                                    aluno3c2m6 = 1;
                                                                    printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                                } else {
                                                                    if (aluno4c2m6 == 0) {
                                                                        scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno4c2m6);
                                                                        printf("CPF :: ");
                                                                        scanf("%d", &cpf59);
                                                                        aluno4c2m6 = 1;
                                                                        printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                                    } else {
                                                                        if (aluno5c2m6 == 0) {
                                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomealuno5c2m6);
                                                                            printf("CPF :: ");
                                                                            scanf("%d", &cpf60);
                                                                            aluno5c2m6 = 1;
                                                                            printf("NOME DO ALUNO CADASTRADO COM SUCESSO\n");
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        break;
                                                    }//case 6
                                                }//switch disciplinacadastroaluno

                                                break;
                                            }
                                        } //switch cursocadastroaluno
                                        break;
                                    }
                                    case 2:
                                    {
                                        printf("DE QUAL CURSO DESEJA CADASTRAR A NOTA DO ALUNO ::\n");
                                        if (curso1 == 1 && curso2 == 1) {
                                            printf("%s [1]\n", nomecurso1);
                                            printf("%s [2]\n", nomecurso2);
                                            scanf("%d", &esc_curso_aluno);

                                            while (esc_curso_aluno != 1 && esc_curso_aluno != 2) {
                                                printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                                scanf("%d", &esc_curso_aluno);
                                            }
                                        } else {
                                            if (curso1 == 0 && curso2 == 1) {
                                                printf("%s [1]\n", nomecurso2);
                                                scanf("%d", &esc_curso_aluno);

                                                while (esc_curso_aluno != 1) {
                                                    printf("ESCOLHA SOMENTE A OPCAO CITADAS ::\n");
                                                    scanf("%d", &esc_curso_aluno);
                                                }
                                                esc_curso_aluno = 2;

                                            } else {
                                                if (curso1 == 1 && curso2 == 0) {
                                                    printf("%s [1]\n", nomecurso1);
                                                    scanf("%d", &esc_curso_aluno);

                                                    while (esc_curso_aluno != 1) {
                                                        printf("ESCOLHA SOMENTE A OPCAO CITADAS ::\n");
                                                        scanf("%d", &esc_curso_aluno);
                                                    }
                                                }
                                            }
                                        }

                                        switch (esc_curso_aluno) {
                                            case 1:
                                            {
                                                printf("DE QUAL DISCIPLINA E O ALUNO ::\n");
                                                printf("%s - 1º SEMESTRE [1]\n", curso1semestre1m1);
                                                printf("%s - 1º SEMESTRE [2]\n", curso1semestre1m2);
                                                printf("%s - 2º SEMESTRE [3]\n", curso1semestre2m1);
                                                printf("%s - 2º SEMESTRE [4]\n", curso1semestre2m2);
                                                printf("%s - 3º SEMESTRE [5]\n", curso1semestre3m1);
                                                printf("%s - 3º SEMESTRE [6]\n", curso1semestre3m2);
                                                scanf("%d", &esc_disciplina_aluno);

                                                while (esc_disciplina_aluno != 1 && esc_disciplina_aluno != 2 && esc_disciplina_aluno != 3 && esc_disciplina_aluno != 4 && esc_disciplina_aluno != 5 && esc_disciplina_aluno != 6) {
                                                    printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                                    scanf("%d", &esc_disciplina_aluno);
                                                }

                                                switch (esc_disciplina_aluno) {
                                                    case 1:
                                                    {
                                                        printf("ESCOLHA O ALUNO PARA CADASTRAR A NOTA ::\n");
                                                        printf("%s [1]", nomealuno1c1m1);
                                                        printf("%s [2]", nomealuno2c1m1);
                                                        printf("%s [3]", nomealuno3c1m1);
                                                        printf("%s [4]", nomealuno4c1m1);
                                                        printf("%s [5]", nomealuno5c1m1);
                                                        scanf("%d", &esc_aluno_nota);

                                                        while (esc_aluno_nota != 1 && esc_aluno_nota != 2 && esc_aluno_nota != 3 && esc_aluno_nota != 4 && esc_aluno_nota != 5) {
                                                            printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                                            scanf("%d", &esc_aluno_nota);
                                                        }

                                                        switch (esc_aluno_nota) {
                                                            case 1:
                                                            {
                                                                if (nota1 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno1c1m1);
                                                                        scanf("%f", &nota1_aluno1c1m1);
                                                                        nota1 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota2 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno1c1m1);
                                                                            scanf("%f", &nota2_aluno1c1m1);
                                                                            nota2 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc1 = ((nota1_aluno1c1m1 + nota2_aluno1c1m1) / 2);

                                                                if (calc1 >= 7 && nota1 == 1 && nota2 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc1 < 7 && nota1 == 1 && nota2 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota2 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno1);

                                                                            while (strcmp(notaaluno1, "s") != 0 && strcmp(notaaluno1, "S") != 0 && strcmp(notaaluno1, "n") != 0 && strcmp(notaaluno1, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno1);
                                                                            }
                                                                            if (strcmp(notaaluno1, "s") == 0 || strcmp(notaaluno1, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%f", &avf1);
                                                                                mg1 = ((avf1 + calc1) / 2);
                                                                                if (mg1 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg1 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }

                                                                break;
                                                            }
                                                            case 2:
                                                            {
                                                                if (nota3 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno2c1m1);
                                                                        scanf("%f", &nota1_aluno2c1m1);
                                                                        nota3 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota4 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno2c1m1);
                                                                            scanf("%f", &nota2_aluno2c1m1);
                                                                            nota4 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc2 = ((nota1_aluno2c1m1 + nota2_aluno2c1m1) / 2);

                                                                if (calc2 >= 7 && nota3 == 1 && nota4 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc2 < 7 && nota3 == 1 && nota4 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota4 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno2);

                                                                            while (strcmp(notaaluno2, "s") != 0 && strcmp(notaaluno2, "S") != 0 && strcmp(notaaluno2, "n") != 0 && strcmp(notaaluno2, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno2);
                                                                            }
                                                                            if (strcmp(notaaluno2, "s") == 0 || strcmp(notaaluno2, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%f", &avf2);
                                                                                mg2 = ((avf2 + calc2) / 2);
                                                                                if (mg2 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg2 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                break;
                                                            }
                                                            case 3:
                                                            {
                                                                if (nota5 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno3c1m1);
                                                                        scanf("%f", &nota1_aluno3c1m1);
                                                                        nota5 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota6 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno3c1m1);
                                                                            scanf("%f", &nota2_aluno3c1m1);
                                                                            nota6 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc3 = ((nota1_aluno3c1m1 + nota2_aluno3c1m1) / 2);

                                                                if (calc3 >= 7 && nota5 == 1 && nota6 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc3 < 7 && nota5 == 1 && nota6 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota6 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno3);

                                                                            while (strcmp(notaaluno3, "s") != 0 && strcmp(notaaluno3, "S") != 0 && strcmp(notaaluno3, "n") != 0 && strcmp(notaaluno3, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno3);
                                                                            }
                                                                            if (strcmp(notaaluno3, "s") == 0 || strcmp(notaaluno3, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%f", &avf3);
                                                                                mg1 = ((avf3 + calc3) / 2);
                                                                                if (mg3 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg3 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                break;
                                                            }
                                                            case 4:
                                                            {
                                                                if (nota7 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno4c1m1);
                                                                        scanf("%f", &nota1_aluno4c1m1);
                                                                        nota7 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota8 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno4c1m1);
                                                                            scanf("%f", &nota2_aluno4c1m1);
                                                                            nota8 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc4 = ((nota1_aluno4c1m1 + nota2_aluno4c1m1) / 2);

                                                                if (calc4 >= 7 && nota7 == 1 && nota8 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc4 < 7 && nota7 == 1 && nota8 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota8 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno4);

                                                                            while (strcmp(notaaluno4, "s") != 0 && strcmp(notaaluno4, "S") != 0 && strcmp(notaaluno4, "n") != 0 && strcmp(notaaluno4, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno4);
                                                                            }
                                                                            if (strcmp(notaaluno4, "s") == 0 || strcmp(notaaluno4, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%f", &avf4);
                                                                                mg4 = ((avf4 + calc4) / 2);
                                                                                if (mg4 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg4 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                break;
                                                            }
                                                            case 5:
                                                            {
                                                                if (nota9 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno5c1m1);
                                                                        scanf("%f", &nota1_aluno5c1m1);
                                                                        nota9 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota10 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno5c1m1);
                                                                            scanf("%f", &nota2_aluno5c1m1);
                                                                            nota10 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc5 = ((nota1_aluno5c1m1 + nota2_aluno5c1m1) / 2);

                                                                if (calc5 >= 7 && nota9 == 1 && nota10 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc5 < 7 && nota9 == 1 && nota10 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota10 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno5);

                                                                            while (strcmp(notaaluno5, "s") != 0 && strcmp(notaaluno5, "S") != 0 && strcmp(notaaluno5, "n") != 0 && strcmp(notaaluno5, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno5);
                                                                            }
                                                                            if (strcmp(notaaluno5, "s") == 0 || strcmp(notaaluno5, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%f", &avf5);
                                                                                mg5 = ((avf5 + calc5) / 2);
                                                                                if (mg5 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg5 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                break;
                                                            }
                                                        }
                                                        break;
                                                    }
                                                    case 2:
                                                    {
                                                        printf("ESCOLHA O ALUNO PARA CADASTRAR A NOTA ::\n");
                                                        printf("%s [1]", nomealuno1c1m2);
                                                        printf("%s [2]", nomealuno2c1m2);
                                                        printf("%s [3]", nomealuno3c1m2);
                                                        printf("%s [4]", nomealuno4c1m2);
                                                        printf("%s [5]", nomealuno5c1m2);
                                                        scanf("%d", &esc_aluno_nota);

                                                        while (esc_aluno_nota != 1 && esc_aluno_nota != 2 && esc_aluno_nota != 3 && esc_aluno_nota != 4 && esc_aluno_nota != 5) {
                                                            printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                                            scanf("%d", &esc_aluno_nota);
                                                        }

                                                        switch (esc_aluno_nota) {
                                                            case 1:
                                                            {
                                                                if (nota11 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno1c1m2);
                                                                        scanf("%f", &nota1_aluno1c1m2);
                                                                        nota12 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota12 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno1c1m2);
                                                                            scanf("%f", &nota2_aluno1c1m2);
                                                                            nota12 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc6 = ((nota1_aluno1c1m2 + nota2_aluno1c1m2) / 2);

                                                                if (calc6 >= 7 && nota11 == 1 && nota12 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc6 < 7 && nota11 == 1 && nota12 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota12 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno6);

                                                                            while (strcmp(notaaluno6, "s") != 0 && strcmp(notaaluno6, "S") != 0 && strcmp(notaaluno6, "n") != 0 && strcmp(notaaluno6, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno6);
                                                                            }
                                                                            if (strcmp(notaaluno6, "s") == 0 || strcmp(notaaluno6, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%f", &avf6);
                                                                                mg6 = ((avf6 + calc6) / 2);
                                                                                if (mg6 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg6 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }



                                                                    }
                                                                }

                                                                break;
                                                            }
                                                            case 2:
                                                            {
                                                                if (nota13 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno2c1m2);
                                                                        scanf("%f", &nota1_aluno2c1m2);
                                                                        nota13 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota14 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno2c1m2);
                                                                            scanf("%f", &nota2_aluno2c1m2);
                                                                            nota14 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc7 = ((nota1_aluno2c1m2 + nota2_aluno2c1m2) / 2);

                                                                if (calc7 >= 7 && nota13 == 1 && nota14 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc7 < 7 && nota13 == 1 && nota14 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota14 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno7);

                                                                            while (strcmp(notaaluno7, "s") != 0 && strcmp(notaaluno7, "S") != 0 && strcmp(notaaluno7, "n") != 0 && strcmp(notaaluno7, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno7);
                                                                            }
                                                                            if (strcmp(notaaluno7, "s") == 0 || strcmp(notaaluno7, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%f", &avf7);
                                                                                mg7 = ((avf7 + calc7) / 2);
                                                                                if (mg7 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg7 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }



                                                                    }
                                                                }
                                                                break;
                                                            }
                                                            case 3:
                                                            {
                                                                if (nota15 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno3c1m2);
                                                                        scanf("%f", &nota1_aluno3c1m2);
                                                                        nota15 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota16 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno3c1m2);
                                                                            scanf("%f", &nota2_aluno3c1m2);
                                                                            nota16 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc8 = ((nota1_aluno3c1m2 + nota2_aluno3c1m2) / 2);

                                                                if (calc8 >= 7 && nota15 == 1 && nota16 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc8 < 7 && nota15 == 1 && nota16 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota16 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno8);

                                                                            while (strcmp(notaaluno8, "s") != 0 && strcmp(notaaluno8, "S") != 0 && strcmp(notaaluno8, "n") != 0 && strcmp(notaaluno8, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno8);
                                                                            }
                                                                            if (strcmp(notaaluno8, "s") == 0 || strcmp(notaaluno8, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%f", &avf8);
                                                                                mg8 = ((avf8 + calc8) / 2);
                                                                                if (mg8 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg8 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                break;
                                                            }
                                                            case 4:
                                                            {
                                                                if (nota17 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno4c1m2);
                                                                        scanf("%f", &nota1_aluno4c1m2);
                                                                        nota17 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota18 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {
                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno5c1m2);
                                                                            scanf("%f", &nota2_aluno5c1m2);
                                                                            nota18 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc9 = ((nota1_aluno5c1m2 + nota2_aluno5c1m2) / 2);

                                                                if (calc9 >= 7 && nota17 == 1 && nota18 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc9 < 7 && nota17 == 1 && nota18 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota18 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF ? [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno9);

                                                                            while (strcmp(notaaluno9, "s") != 0 && strcmp(notaaluno9, "S") != 0 && strcmp(notaaluno9, "n") != 0 && strcmp(notaaluno9, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno9);
                                                                            }
                                                                            if (strcmp(notaaluno9, "s") == 0 || strcmp(notaaluno9, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%f", &avf9);
                                                                                mg9 = ((avf9 + calc9) / 2);
                                                                                if (mg9 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg9 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                break;
                                                            }
                                                            case 5:
                                                            {
                                                                if (nota19 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno5c1m2);
                                                                        scanf("%f", &nota1_aluno5c1m2);
                                                                        nota19 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota20 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {
                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno5c1m2);
                                                                            scanf("%f", &nota2_aluno5c1m2);
                                                                            nota10 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc10 = ((nota1_aluno5c1m2 + nota2_aluno5c1m2) / 2);

                                                                if (calc10 >= 7 && nota19 == 1 && nota20 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc10 < 7 && nota19 == 1 && nota20 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota20 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF ? [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno10);

                                                                            while (strcmp(notaaluno10, "s") != 0 && strcmp(notaaluno10, "S") != 0 && strcmp(notaaluno10, "n") != 0 && strcmp(notaaluno10, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno10);
                                                                            }
                                                                            if (strcmp(notaaluno10, "s") == 0 || strcmp(notaaluno10, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%f", &avf10);
                                                                                mg10 = ((avf10 + calc10) / 2);
                                                                                if (mg10 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg10 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                break;
                                                            }
                                                        }
                                                        break;
                                                    }
                                                    case 3:
                                                    {
                                                        printf("ESCOLHA O ALUNO PARA CADASTRAR A NOTA ::\n");
                                                        printf("%s [1]", nomealuno1c1m3);
                                                        printf("%s [2]", nomealuno2c1m3);
                                                        printf("%s [3]", nomealuno3c1m3);
                                                        printf("%s [4]", nomealuno4c1m3);
                                                        printf("%s [5]", nomealuno5c1m3);
                                                        scanf("%d", &esc_aluno_nota);

                                                        while (esc_aluno_nota != 1 && esc_aluno_nota != 2 && esc_aluno_nota != 3 && esc_aluno_nota != 4 && esc_aluno_nota != 5) {
                                                            printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                                            scanf("%d", &esc_aluno_nota);
                                                        }

                                                        switch (esc_aluno_nota) {
                                                            case 1:
                                                            {
                                                                if (nota21 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno1c1m3);
                                                                        scanf("%f", &nota1_aluno1c1m3);
                                                                        nota21 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota22 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno1c1m3);
                                                                            scanf("%f", &nota2_aluno1c1m3);
                                                                            nota22 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc11 = ((nota1_aluno1c1m3 + nota2_aluno1c1m3) / 2);

                                                                if (calc11 >= 7 && nota21 == 1 && nota22 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc11 < 7 && nota21 == 1 && nota22 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota22 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno11);

                                                                            while (strcmp(notaaluno11, "s") != 0 && strcmp(notaaluno11, "S") != 0 && strcmp(notaaluno11, "n") != 0 && strcmp(notaaluno11, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno11);
                                                                            }
                                                                            if (strcmp(notaaluno11, "s") == 0 || strcmp(notaaluno11, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%f", &avf11);
                                                                                mg11 = ((avf11 + calc11) / 2);
                                                                                if (mg11 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg11 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }



                                                                    }
                                                                }

                                                                break;
                                                            }
                                                            case 2:
                                                            {
                                                                if (nota23 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno2c1m3);
                                                                        scanf("%f", &nota1_aluno2c1m3);
                                                                        nota23 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota24 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno2c1m3);
                                                                            scanf("%f", &nota2_aluno2c1m3);
                                                                            nota24 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc12 = ((nota1_aluno2c1m3 + nota2_aluno2c1m3) / 2);

                                                                if (calc12 >= 7 && nota23 == 1 && nota24 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc12 < 7 && nota23 == 1 && nota24 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota24 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno12);

                                                                            while (strcmp(notaaluno12, "s") != 0 && strcmp(notaaluno12, "S") != 0 && strcmp(notaaluno12, "n") != 0 && strcmp(notaaluno12, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno12);
                                                                            }
                                                                            if (strcmp(notaaluno12, "s") == 0 || strcmp(notaaluno12, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%f", &avf12);
                                                                                mg12 = ((avf12 + calc12) / 2);
                                                                                if (mg12 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg12 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }



                                                                    }
                                                                }
                                                                break;
                                                            }
                                                            case 3:
                                                            {
                                                                if (nota25 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno3c1m3);
                                                                        scanf("%f", &nota1_aluno3c1m3);
                                                                        nota25 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota26 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno3c1m3);
                                                                            scanf("%f", &nota2_aluno3c1m3);
                                                                            nota26 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc13 = ((nota1_aluno3c1m3 + nota2_aluno3c1m3) / 2);

                                                                if (calc13 >= 7 && nota25 == 1 && nota26 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc13 < 7 && nota25 == 1 && nota26 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota26 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno13);

                                                                            while (strcmp(notaaluno13, "s") != 0 && strcmp(notaaluno13, "S") != 0 && strcmp(notaaluno13, "n") != 0 && strcmp(notaaluno13, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno13);
                                                                            }
                                                                            if (strcmp(notaaluno13, "s") == 0 || strcmp(notaaluno13, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%f", &avf13);
                                                                                mg11 = ((avf13 + calc13) / 2);
                                                                                if (mg13 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg13 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                break;
                                                            }
                                                            case 4:
                                                            {
                                                                if (nota27 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno4c1m3);
                                                                        scanf("%f", &nota1_aluno4c1m3);
                                                                        nota27 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota28 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno4c1m3);
                                                                            scanf("%f", &nota2_aluno4c1m3);
                                                                            nota28 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc14 = ((nota1_aluno4c1m3 + nota2_aluno4c1m3) / 2);

                                                                if (calc14 >= 7 && nota27 == 1 && nota28 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc14 < 7 && nota27 == 1 && nota28 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota28 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno14);

                                                                            while (strcmp(notaaluno14, "s") != 0 && strcmp(notaaluno14, "S") != 0 && strcmp(notaaluno14, "n") != 0 && strcmp(notaaluno14, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno14);
                                                                            }
                                                                            if (strcmp(notaaluno14, "s") == 0 || strcmp(notaaluno14, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%f", &avf14);
                                                                                mg14 = ((avf14 + calc14) / 2);
                                                                                if (mg14 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg14 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                break;
                                                            }
                                                            case 5:
                                                            {
                                                                if (nota29 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno5c1m3);
                                                                        scanf("%f", &nota1_aluno5c1m3);
                                                                        nota29 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota30 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno5c1m3);
                                                                            scanf("%f", &nota2_aluno5c1m3);
                                                                            nota30 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc15 = ((nota1_aluno5c1m3 + nota2_aluno5c1m3) / 2);

                                                                if (calc15 >= 7 && nota29 == 1 && nota30 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc15 < 7 && nota29 == 1 && nota30 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota30 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno15);

                                                                            while (strcmp(notaaluno15, "s") != 0 && strcmp(notaaluno15, "S") != 0 && strcmp(notaaluno15, "n") != 0 && strcmp(notaaluno15, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno15);
                                                                            }
                                                                            if (strcmp(notaaluno15, "s") == 0 || strcmp(notaaluno15, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%f", &avf15);
                                                                                mg15 = ((avf15 + calc15) / 2);
                                                                                if (mg15 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg15 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                break;
                                                            }
                                                        }
                                                        break;
                                                    }
                                                    case 4:
                                                    {
                                                        printf("ESCOLHA O ALUNO PARA CADASTRAR A NOTA ::\n");
                                                        printf("%s [1]", nomealuno1c1m4);
                                                        printf("%s [2]", nomealuno2c1m4);
                                                        printf("%s [3]", nomealuno3c1m4);
                                                        printf("%s [4]", nomealuno4c1m4);
                                                        printf("%s [5]", nomealuno5c1m4);
                                                        scanf("%d", &esc_aluno_nota);

                                                        while (esc_aluno_nota != 1 && esc_aluno_nota != 2 && esc_aluno_nota != 3 && esc_aluno_nota != 4 && esc_aluno_nota != 5) {
                                                            printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                                            scanf("%d", &esc_aluno_nota);
                                                        }

                                                        switch (esc_aluno_nota) {
                                                            case 1:
                                                            {
                                                                if (nota31 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno1c1m4);
                                                                        scanf("%f", &nota1_aluno1c1m4);
                                                                        nota31 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota32 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno1c1m4);
                                                                            scanf("%f", &nota2_aluno1c1m4);
                                                                            nota32 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc16 = ((nota1_aluno1c1m4 + nota2_aluno1c1m4) / 2);

                                                                if (calc16 >= 7 && nota31 == 1 && nota32 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc16 < 7 && nota31 == 1 && nota32 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota32 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno16);

                                                                            while (strcmp(notaaluno16, "s") != 0 && strcmp(notaaluno16, "S") != 0 && strcmp(notaaluno16, "n") != 0 && strcmp(notaaluno16, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno16);
                                                                            }
                                                                            if (strcmp(notaaluno16, "s") == 0 || strcmp(notaaluno16, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%f", &avf16);
                                                                                mg16 = ((avf16 + calc16) / 2);
                                                                                if (mg16 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg16 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                break;
                                                            }
                                                            case 2:
                                                            {
                                                                if (nota33 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno2c1m4);
                                                                        scanf("%f", &nota1_aluno2c1m4);
                                                                        nota33 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota34 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno2c1m4);
                                                                            scanf("%f", &nota2_aluno2c1m4);
                                                                            nota34 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc17 = ((nota1_aluno2c1m4 + nota2_aluno2c1m4) / 2);

                                                                if (calc17 >= 7 && nota33 == 1 && nota34 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc17 < 7 && nota33 == 1 && nota34 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota34 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno17);

                                                                            while (strcmp(notaaluno17, "s") != 0 && strcmp(notaaluno17, "S") != 0 && strcmp(notaaluno17, "n") != 0 && strcmp(notaaluno17, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno17);
                                                                            }
                                                                            if (strcmp(notaaluno17, "s") == 0 || strcmp(notaaluno17, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%f", &avf17);
                                                                                mg17 = ((avf17 + calc17) / 2);
                                                                                if (mg17 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg17 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                break;
                                                            }
                                                            case 3:
                                                            {
                                                                if (nota35 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno3c1m4);
                                                                        scanf("%f", &nota1_aluno3c1m4);
                                                                        nota35 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota36 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno3c1m4);
                                                                            scanf("%f", &nota2_aluno3c1m4);
                                                                            nota36 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc18 = ((nota1_aluno3c1m4 + nota2_aluno3c1m4) / 2);

                                                                if (calc18 >= 7 && nota35 == 1 && nota36 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc18 < 7 && nota35 == 1 && nota36 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota36 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno18);

                                                                            while (strcmp(notaaluno18, "s") != 0 && strcmp(notaaluno18, "S") != 0 && strcmp(notaaluno18, "n") != 0 && strcmp(notaaluno18, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno18);
                                                                            }
                                                                            if (strcmp(notaaluno18, "s") == 0 || strcmp(notaaluno18, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%f", &avf18);
                                                                                mg18 = ((avf18 + calc18) / 2);
                                                                                if (mg18 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg18 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                break;
                                                            }
                                                            case 4:
                                                            {
                                                                if (nota37 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno4c1m4);
                                                                        scanf("%f", &nota1_aluno4c1m4);
                                                                        nota37 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota38 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno4c1m4);
                                                                            scanf("%f", &nota2_aluno4c1m4);
                                                                            nota38 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc19 = ((nota1_aluno4c1m4 + nota2_aluno4c1m4) / 2);

                                                                if (calc19 >= 7 && nota37 == 1 && nota38 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc19 < 7 && nota37 == 1 && nota38 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota38 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno19);

                                                                            while (strcmp(notaaluno19, "s") != 0 && strcmp(notaaluno19, "S") != 0 && strcmp(notaaluno19, "n") != 0 && strcmp(notaaluno19, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno19);
                                                                            }
                                                                            if (strcmp(notaaluno19, "s") == 0 || strcmp(notaaluno19, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%f", &avf19);
                                                                                mg19 = ((avf19 + calc19) / 2);
                                                                                if (mg19 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg19 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                break;
                                                            }
                                                            case 5:
                                                            {
                                                                if (nota39 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno5c1m4);
                                                                        scanf("%f", &nota1_aluno5c1m4);
                                                                        nota39 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota40 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno5c1m4);
                                                                            scanf("%f", &nota2_aluno5c1m4);
                                                                            nota40 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc20 = ((nota1_aluno5c1m4 + nota2_aluno5c1m4) / 2);

                                                                if (calc20 >= 7 && nota39 == 1 && nota40 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc20 < 7 && nota39 == 1 && nota40 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota40 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno20);

                                                                            while (strcmp(notaaluno20, "s") != 0 && strcmp(notaaluno20, "S") != 0 && strcmp(notaaluno20, "n") != 0 && strcmp(notaaluno20, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno20);
                                                                            }
                                                                            if (strcmp(notaaluno20, "s") == 0 || strcmp(notaaluno20, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%f", &avf20);
                                                                                mg20 = ((avf20 + calc20) / 2);
                                                                                if (mg20 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg20 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                break;
                                                            }
                                                        }

                                                        break;
                                                    }
                                                    case 5:
                                                    {
                                                        printf("ESCOLHA O ALUNO PARA CADASTRAR A NOTA ::\n");
                                                        printf("%s [1]", nomealuno1c1m5);
                                                        printf("%s [2]", nomealuno2c1m5);
                                                        printf("%s [3]", nomealuno3c1m5);
                                                        printf("%s [4]", nomealuno4c1m5);
                                                        printf("%s [5]", nomealuno5c1m5);
                                                        scanf("%d", &esc_aluno_nota);

                                                        while (esc_aluno_nota != 1 && esc_aluno_nota != 2 && esc_aluno_nota != 3 && esc_aluno_nota != 4 && esc_aluno_nota != 5) {
                                                            printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                                            scanf("%d", &esc_aluno_nota);
                                                        }

                                                        switch (esc_aluno_nota) {
                                                            case 1:
                                                            {
                                                                if (nota41 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno1c1m5);
                                                                        scanf("%f", &nota1_aluno1c1m5);
                                                                        nota1 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota42 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno1c1m5);
                                                                            scanf("%f", &nota2_aluno1c1m5);
                                                                            nota42 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc21 = ((nota1_aluno1c1m5 + nota2_aluno1c1m5) / 2);

                                                                if (calc21 >= 7 && nota41 == 1 && nota42 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc21 < 7 && nota41 == 1 && nota42 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota42 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno21);

                                                                            while (strcmp(notaaluno21, "s") != 0 && strcmp(notaaluno21, "S") != 0 && strcmp(notaaluno21, "n") != 0 && strcmp(notaaluno21, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno21);
                                                                            }
                                                                            if (strcmp(notaaluno21, "s") == 0 || strcmp(notaaluno21, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%d", &avf21);
                                                                                mg21 = ((avf21 + calc21) / 2);
                                                                                if (mg21 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg21 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }

                                                                break;
                                                            }
                                                            case 2:
                                                            {
                                                                if (nota43 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno2c1m5);
                                                                        scanf("%f", &nota1_aluno2c1m5);
                                                                        nota43 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota44 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno2c1m5);
                                                                            scanf("%f", &nota2_aluno2c1m5);
                                                                            nota44 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc22 = ((nota1_aluno2c1m5 + nota2_aluno2c1m5) / 2);

                                                                if (calc22 >= 7 && nota43 == 1 && nota44 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc22 < 7 && nota43 == 1 && nota44 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota44 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno22);

                                                                            while (strcmp(notaaluno22, "s") != 0 && strcmp(notaaluno22, "S") != 0 && strcmp(notaaluno22, "n") != 0 && strcmp(notaaluno22, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno22);
                                                                            }
                                                                            if (strcmp(notaaluno22, "s") == 0 || strcmp(notaaluno22, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%f", &avf22);
                                                                                mg22 = ((avf22 + calc22) / 2);
                                                                                if (mg22 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg22 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                break;
                                                            }
                                                            case 3:
                                                            {
                                                                if (nota45 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno3c1m5);
                                                                        scanf("%f", &nota1_aluno3c1m5);
                                                                        nota45 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota46 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno3c1m5);
                                                                            scanf("%f", &nota2_aluno3c1m5);
                                                                            nota46 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc23 = ((nota1_aluno3c1m5 + nota2_aluno3c1m5) / 2);

                                                                if (calc23 >= 7 && nota45 == 1 && nota46 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc23 < 7 && nota45 == 1 && nota46 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota46 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno23);

                                                                            while (strcmp(notaaluno23, "s") != 0 && strcmp(notaaluno23, "S") != 0 && strcmp(notaaluno23, "n") != 0 && strcmp(notaaluno23, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno23);
                                                                            }
                                                                            if (strcmp(notaaluno23, "s") == 0 || strcmp(notaaluno23, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%f", &avf23);
                                                                                mg21 = ((avf23 + calc23) / 2);
                                                                                if (mg23 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg23 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                break;
                                                            }
                                                            case 4:
                                                            {
                                                                if (nota47 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno4c1m5);
                                                                        scanf("%f", &nota1_aluno4c1m5);
                                                                        nota47 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota48 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno4c1m5);
                                                                            scanf("%f", &nota2_aluno4c1m5);
                                                                            nota48 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc24 = ((nota1_aluno4c1m1 + nota2_aluno4c1m1) / 2);

                                                                if (calc24 >= 7 && nota47 == 1 && nota48 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc24 < 7 && nota47 == 1 && nota48 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota48 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno24);

                                                                            while (strcmp(notaaluno24, "s") != 0 && strcmp(notaaluno24, "S") != 0 && strcmp(notaaluno24, "n") != 0 && strcmp(notaaluno24, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno24);
                                                                            }
                                                                            if (strcmp(notaaluno24, "s") == 0 || strcmp(notaaluno24, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%f", &avf24);
                                                                                mg24 = ((avf24 + calc24) / 2);
                                                                                if (mg24 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg24 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                break;
                                                            }
                                                            case 5:
                                                            {
                                                                if (nota49 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno5c1m5);
                                                                        scanf("%f", &nota1_aluno5c1m5);
                                                                        nota49 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota50 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno5c1m5);
                                                                            scanf("%f", &nota2_aluno5c1m5);
                                                                            nota10 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc5 = ((nota1_aluno5c1m5 + nota2_aluno5c1m5) / 2);

                                                                if (calc25 >= 7 && nota49 == 1 && nota50 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc25 < 7 && nota49 == 1 && nota50 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota50 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno25);

                                                                            while (strcmp(notaaluno25, "s") != 0 && strcmp(notaaluno25, "S") != 0 && strcmp(notaaluno25, "n") != 0 && strcmp(notaaluno25, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno25);
                                                                            }
                                                                            if (strcmp(notaaluno25, "s") == 0 || strcmp(notaaluno25, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%f", &avf25);
                                                                                mg25 = ((avf25 + calc25) / 2);
                                                                                if (mg25 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg25 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                break;
                                                            }
                                                        }

                                                        break;
                                                    }
                                                    case 6:
                                                    {
                                                        printf("ESCOLHA O ALUNO PARA CADASTRAR A NOTA ::\n");
                                                        printf("%s [1]", nomealuno1c1m6);
                                                        printf("%s [2]", nomealuno2c1m6);
                                                        printf("%s [3]", nomealuno3c1m6);
                                                        printf("%s [4]", nomealuno4c1m6);
                                                        printf("%s [5]", nomealuno5c1m6);
                                                        scanf("%d", &esc_aluno_nota);

                                                        while (esc_aluno_nota != 1 && esc_aluno_nota != 2 && esc_aluno_nota != 3 && esc_aluno_nota != 4 && esc_aluno_nota != 5) {
                                                            printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                                            scanf("%d", &esc_aluno_nota);
                                                        }

                                                        switch (esc_aluno_nota) {
                                                            case 1:
                                                            {
                                                                if (nota51 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno1c1m6);
                                                                        scanf("%f", &nota1_aluno1c1m6);
                                                                        nota51 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota52 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno1c1m6);
                                                                            scanf("%f", &nota2_aluno1c1m6);
                                                                            nota52 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc26 = ((nota1_aluno1c1m6 + nota2_aluno1c1m6) / 2);

                                                                if (calc26 >= 7 && nota51 == 1 && nota52 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc26 < 7 && nota51 == 1 && nota52 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota52 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno26);

                                                                            while (strcmp(notaaluno26, "s") != 0 && strcmp(notaaluno26, "S") != 0 && strcmp(notaaluno26, "n") != 0 && strcmp(notaaluno26, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno26);
                                                                            }
                                                                            if (strcmp(notaaluno26, "s") == 0 || strcmp(notaaluno26, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%f", &avf26);
                                                                                mg26 = ((avf26 + calc26) / 2);
                                                                                if (mg26 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg26 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                break;
                                                            }
                                                            case 2:
                                                            {
                                                                if (nota53 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno2c1m6);
                                                                        scanf("%f", &nota1_aluno2c1m6);
                                                                        nota3 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota54 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno2c1m6);
                                                                            scanf("%f", &nota2_aluno2c1m6);
                                                                            nota54 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc27 = ((nota1_aluno2c1m6 + nota2_aluno2c1m6) / 2);

                                                                if (calc27 >= 7 && nota53 == 1 && nota54 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc27 < 7 && nota53 == 1 && nota54 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota54 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno27);

                                                                            while (strcmp(notaaluno27, "s") != 0 && strcmp(notaaluno27, "S") != 0 && strcmp(notaaluno27, "n") != 0 && strcmp(notaaluno27, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno27);
                                                                            }
                                                                            if (strcmp(notaaluno27, "s") == 0 || strcmp(notaaluno27, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%f", &avf27);
                                                                                mg27 = ((avf27 + calc27) / 2);
                                                                                if (mg27 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg27 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                break;
                                                            }
                                                            case 3:
                                                            {
                                                                if (nota55 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno3c1m6);
                                                                        scanf("%f", &nota1_aluno3c1m6);
                                                                        nota55 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota56 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno3c1m6);
                                                                            scanf("%f", &nota2_aluno3c1m6);
                                                                            nota56 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc28 = ((nota1_aluno3c1m6 + nota2_aluno3c1m6) / 2);

                                                                if (calc28 >= 7 && nota55 == 1 && nota56 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc28 < 7 && nota55 == 1 && nota56 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota56 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno28);

                                                                            while (strcmp(notaaluno28, "s") != 0 && strcmp(notaaluno28, "S") != 0 && strcmp(notaaluno28, "n") != 0 && strcmp(notaaluno28, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno28);
                                                                            }
                                                                            if (strcmp(notaaluno28, "s") == 0 || strcmp(notaaluno28, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%f", &avf28);
                                                                                mg28 = ((avf28 + calc28) / 2);
                                                                                if (mg28 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg28 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                break;
                                                            }
                                                            case 4:
                                                            {
                                                                if (nota57 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno4c1m6);
                                                                        scanf("%f", &nota1_aluno4c1m6);
                                                                        nota57 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota58 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno4c1m6);
                                                                            scanf("%f", &nota2_aluno4c1m6);
                                                                            nota58 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc29 = ((nota1_aluno4c1m1 + nota2_aluno4c1m1) / 2);

                                                                if (calc4 >= 7 && nota57 == 1 && nota58 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc29 < 7 && nota57 == 1 && nota58 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota58 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno29);

                                                                            while (strcmp(notaaluno29, "s") != 0 && strcmp(notaaluno29, "S") != 0 && strcmp(notaaluno29, "n") != 0 && strcmp(notaaluno29, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno29);
                                                                            }
                                                                            if (strcmp(notaaluno29, "s") == 0 || strcmp(notaaluno29, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%f", &avf29);
                                                                                mg29 = ((avf29 + calc29) / 2);
                                                                                if (mg29 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg29 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                break;
                                                            }
                                                            case 5:
                                                            {
                                                                if (nota59 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno5c1m6);
                                                                        scanf("%f", &nota1_aluno5c1m6);
                                                                        nota59 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota60 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno5c1m6);
                                                                            scanf("%f", &nota2_aluno5c1m6);
                                                                            nota60 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc30 = ((nota1_aluno5c1m6 + nota2_aluno5c1m6) / 2);

                                                                if (calc30 >= 7 && nota59 == 1 && nota60 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc30 < 7 && nota59 == 1 && nota60 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota60 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno30);

                                                                            while (strcmp(notaaluno30, "s") != 0 && strcmp(notaaluno30, "S") != 0 && strcmp(notaaluno30, "n") != 0 && strcmp(notaaluno30, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno30);
                                                                            }
                                                                            if (strcmp(notaaluno30, "s") == 0 || strcmp(notaaluno30, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%f", &avf30);
                                                                                mg30 = ((avf30 + calc30) / 2);
                                                                                if (mg30 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg30 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                break;
                                                            }
                                                        }
                                                        break;
                                                    }
                                                        break;
                                                }
                                                break;
                                            }
                                            case 2:
                                            {
                                                printf("DE QUAL DISCIPLINA E O ALUNO ::\n");
                                                printf("%s - 1º SEMESTRE [1]\n", curso2semestre1m1);
                                                printf("%s - 1º SEMESTRE [2]\n", curso2semestre1m2);
                                                printf("%s - 2º SEMESTRE [3]\n", curso2semestre2m1);
                                                printf("%s - 2º SEMESTRE [4]\n", curso2semestre2m2);
                                                printf("%s - 3º SEMESTRE [5]\n", curso2semestre3m1);
                                                printf("%s - 3º SEMESTRE [6]\n", curso2semestre3m2);
                                                scanf("%d", &esc_disciplina_aluno);

                                                while (esc_disciplina_aluno != 1 && esc_disciplina_aluno != 2 && esc_disciplina_aluno != 3 && esc_disciplina_aluno != 4 && esc_disciplina_aluno != 5 && esc_disciplina_aluno != 6) {
                                                    printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                                    scanf("%d", &esc_disciplina_aluno);
                                                }

                                                switch (esc_disciplina_aluno) {
                                                    case 1:
                                                    {
                                                        printf("ESCOLHA O ALUNO PARA CADASTRAR A NOTA ::\n");
                                                        printf("%s [1]", nomealuno1c2m1);
                                                        printf("%s [2]", nomealuno2c2m1);
                                                        printf("%s [3]", nomealuno3c2m1);
                                                        printf("%s [4]", nomealuno4c2m1);
                                                        printf("%s [5]", nomealuno5c2m1);
                                                        scanf("%d", &esc_aluno_nota);

                                                        while (esc_aluno_nota != 1 && esc_aluno_nota != 2 && esc_aluno_nota != 3 && esc_aluno_nota != 4 && esc_aluno_nota != 5) {
                                                            printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                                            scanf("%d", &esc_aluno_nota);
                                                        }

                                                        switch (esc_aluno_nota) {
                                                            case 1:
                                                            {
                                                                if (nota61 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno1c2m1);
                                                                        scanf("%f", &nota1_aluno1c2m1);
                                                                        nota61 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota62 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno1c1m1);
                                                                            scanf("%f", &nota2_aluno1c1m1);
                                                                            nota62 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc31 = ((nota1_aluno1c2m1 + nota2_aluno1c2m1) / 2);

                                                                if (calc31 >= 7 && nota61 == 1 && nota62 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc31 < 7 && nota61 == 1 && nota62 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota62 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno31);

                                                                            while (strcmp(notaaluno31, "s") != 0 && strcmp(notaaluno31, "S") != 0 && strcmp(notaaluno31, "n") != 0 && strcmp(notaaluno31, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno31);
                                                                            }
                                                                            if (strcmp(notaaluno31, "s") == 0 || strcmp(notaaluno31, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%f", &avf31);
                                                                                mg31 = ((avf31 + calc31) / 2);
                                                                                if (mg31 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg31 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                break;
                                                            }
                                                            case 2:
                                                            {
                                                                if (nota63 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno2c2m1);
                                                                        scanf("%f", &nota1_aluno2c2m1);
                                                                        nota3 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota64 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno2c2m1);
                                                                            scanf("%f", &nota2_aluno2c2m1);
                                                                            nota64 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc32 = ((nota1_aluno2c2m1 + nota2_aluno2c2m1) / 2);

                                                                if (calc32 >= 7 && nota63 == 1 && nota64 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc32 < 7 && nota63 == 1 && nota64 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota64 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno32);

                                                                            while (strcmp(notaaluno32, "s") != 0 && strcmp(notaaluno32, "S") != 0 && strcmp(notaaluno32, "n") != 0 && strcmp(notaaluno32, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno32);
                                                                            }
                                                                            if (strcmp(notaaluno32, "s") == 0 || strcmp(notaaluno32, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%f", &avf32);
                                                                                mg2 = ((avf32 + calc32) / 2);
                                                                                if (mg32 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg32 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                break;
                                                            }
                                                            case 3:
                                                            {
                                                                if (nota65 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno3c2m1);
                                                                        scanf("%f", &nota1_aluno3c2m1);
                                                                        nota65 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota66 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno3c2m1);
                                                                            scanf("%f", &nota2_aluno3c2m1);
                                                                            nota66 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc33 = ((nota1_aluno3c2m1 + nota2_aluno3c2m1) / 2);

                                                                if (calc33 >= 7 && nota65 == 1 && nota66 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc33 < 7 && nota65 == 1 && nota66 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota66 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno33);

                                                                            while (strcmp(notaaluno33, "s") != 0 && strcmp(notaaluno33, "S") != 0 && strcmp(notaaluno33, "n") != 0 && strcmp(notaaluno33, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno33);
                                                                            }
                                                                            if (strcmp(notaaluno33, "s") == 0 || strcmp(notaaluno33, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%f", &avf33);
                                                                                mg1 = ((avf33 + calc33) / 2);
                                                                                if (mg33 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg33 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                break;
                                                            }
                                                            case 4:
                                                            {
                                                                if (nota67 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno4c2m1);
                                                                        scanf("%f", &nota1_aluno4c2m1);
                                                                        nota67 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota68 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno4c2m1);
                                                                            scanf("%f", &nota2_aluno4c2m1);
                                                                            nota68 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc34 = ((nota1_aluno4c2m1 + nota2_aluno4c2m1) / 2);

                                                                if (calc34 >= 7 && nota67 == 1 && nota68 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc34 < 7 && nota67 == 1 && nota68 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota68 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno34);

                                                                            while (strcmp(notaaluno34, "s") != 0 && strcmp(notaaluno34, "S") != 0 && strcmp(notaaluno34, "n") != 0 && strcmp(notaaluno34, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno34);
                                                                            }
                                                                            if (strcmp(notaaluno34, "s") == 0 || strcmp(notaaluno34, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%f", &avf34);
                                                                                mg34 = ((avf34 + calc34) / 2);
                                                                                if (mg34 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg34 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                break;
                                                            }
                                                            case 5:
                                                            {
                                                                if (nota69 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno5c2m1);
                                                                        scanf("%f", &nota1_aluno5c2m1);
                                                                        nota69 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota70 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno5c2m1);
                                                                            scanf("%f", &nota2_aluno5c2m1);
                                                                            nota70 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc35 = ((nota1_aluno5c2m1 + nota2_aluno5c2m1) / 2);

                                                                if (calc35 >= 7 && nota9 == 1 && nota70 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc35 < 7 && nota9 == 1 && nota70 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota70 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno35);

                                                                            while (strcmp(notaaluno35, "s") != 0 && strcmp(notaaluno35, "S") != 0 && strcmp(notaaluno35, "n") != 0 && strcmp(notaaluno35, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno35);
                                                                            }
                                                                            if (strcmp(notaaluno35, "s") == 0 || strcmp(notaaluno35, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%f", &avf35);
                                                                                mg35 = ((avf35 + calc35) / 2);
                                                                                if (mg35 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg35 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                break;
                                                            }
                                                        }
                                                        break;
                                                    }
                                                    case 2:
                                                    {
                                                        printf("ESCOLHA O ALUNO PARA CADASTRAR A NOTA ::\n");
                                                        printf("%s [1]", nomealuno1c1m2);
                                                        printf("%s [2]", nomealuno2c1m2);
                                                        printf("%s [3]", nomealuno3c1m2);
                                                        printf("%s [4]", nomealuno4c1m2);
                                                        printf("%s [5]", nomealuno5c1m2);
                                                        scanf("%d", &esc_aluno_nota);

                                                        while (esc_aluno_nota != 1 && esc_aluno_nota != 2 && esc_aluno_nota != 3 && esc_aluno_nota != 4 && esc_aluno_nota != 5) {
                                                            printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                                            scanf("%f", &esc_aluno_nota);
                                                        }

                                                        switch (esc_aluno_nota) {
                                                            case 1:
                                                            {
                                                                if (nota71 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno1c2m2);
                                                                        scanf("%f", &nota1_aluno1c2m2);
                                                                        nota72 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota72 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno1c2m2);
                                                                            scanf("%f", &nota2_aluno1c2m2);
                                                                            nota72 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc36 = ((nota1_aluno1c2m2 + nota2_aluno1c2m2) / 2);

                                                                if (calc36 >= 7 && nota71 == 1 && nota72 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc36 < 7 && nota71 == 1 && nota72 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota72 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno36);

                                                                            while (strcmp(notaaluno36, "s") != 0 && strcmp(notaaluno36, "S") != 0 && strcmp(notaaluno36, "n") != 0 && strcmp(notaaluno36, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno36);
                                                                            }
                                                                            if (strcmp(notaaluno36, "s") == 0 || strcmp(notaaluno36, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%f", &avf6);
                                                                                mg36 = ((avf36 + calc36) / 2);
                                                                                if (mg36 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg36 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                break;
                                                            }
                                                            case 2:
                                                            {
                                                                if (nota73 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno2c2m2);
                                                                        scanf("%f", &nota1_aluno2c2m1);
                                                                        nota73 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota74 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno2c2m2);
                                                                            scanf("%f", &nota2_aluno2c2m2);
                                                                            nota74 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc37 = ((nota1_aluno2c2m2 + nota2_aluno2c2m2) / 2);

                                                                if (calc37 >= 7 && nota73 == 1 && nota74 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc37 < 7 && nota73 == 1 && nota74 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota74 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno37);

                                                                            while (strcmp(notaaluno37, "s") != 0 && strcmp(notaaluno37, "S") != 0 && strcmp(notaaluno37, "n") != 0 && strcmp(notaaluno37, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno37);
                                                                            }
                                                                            if (strcmp(notaaluno37, "s") == 0 || strcmp(notaaluno37, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%f", &avf37);
                                                                                mg37 = ((avf37 + calc37) / 2);
                                                                                if (mg37 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg37 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                break;
                                                            }
                                                            case 3:
                                                            {
                                                                if (nota75 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno3c2m2);
                                                                        scanf("%f", &nota1_aluno3c2m2);
                                                                        nota75 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota76 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno3c2m2);
                                                                            scanf("%f", &nota2_aluno3c2m2);
                                                                            nota76 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc8 = ((nota1_aluno3c2m2 + nota2_aluno3c2m2) / 2);

                                                                if (calc38 >= 7 && nota75 == 1 && nota76 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc38 < 7 && nota75 == 1 && nota76 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota16 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno38);

                                                                            while (strcmp(notaaluno38, "s") != 0 && strcmp(notaaluno38, "S") != 0 && strcmp(notaaluno38, "n") != 0 && strcmp(notaaluno38, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno38);
                                                                            }
                                                                            if (strcmp(notaaluno38, "s") == 0 || strcmp(notaaluno38, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%f", &avf38);
                                                                                mg38 = ((avf38 + calc38) / 2);
                                                                                if (mg38 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg38 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                break;
                                                            }

                                                            case 4:
                                                            {
                                                                if (nota77 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno4c2m2);
                                                                        scanf("%f", &nota1_aluno4c2m2);
                                                                        nota77 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota78 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {
                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno4c2m2);
                                                                            scanf("%f", &nota2_aluno4c2m2);
                                                                            nota78 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc39 = ((nota1_aluno4c2m2 + nota2_aluno4c2m2) / 2);

                                                                if (calc39 >= 7 && nota77 == 1 && nota78 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc39 < 7 && nota77 == 1 && nota78 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota78 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF ? [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno39);

                                                                            while (strcmp(notaaluno39, "s") != 0 && strcmp(notaaluno39, "S") != 0 && strcmp(notaaluno39, "n") != 0 && strcmp(notaaluno39, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno39);
                                                                            }
                                                                            if (strcmp(notaaluno39, "s") == 0 || strcmp(notaaluno39, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%f", &avf39);
                                                                                mg39 = ((avf39 + calc39) / 2);
                                                                                if (mg39 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg39 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                break;
                                                            }

                                                            case 5:
                                                            {
                                                                if (nota79 == 0) {
                                                                    printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                    while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                        printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                    }

                                                                    if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                        printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno5c2m2);
                                                                        scanf("%f", &nota1_aluno5c2m2);
                                                                        nota79 = 1;
                                                                    }
                                                                } else {
                                                                    if (nota80 == 0) {
                                                                        printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                        while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                        }

                                                                        if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {
                                                                            printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno5c2m2);
                                                                            scanf("%f", &nota2_aluno5c2m2);
                                                                            nota80 = 1;
                                                                        }
                                                                    }
                                                                }
                                                                calc40 = ((nota1_aluno5c2m2 + nota2_aluno5c2m2) / 2);

                                                                if (calc40 >= 7 && nota79 == 1 && nota80 == 1) {
                                                                    printf("ALUNO ESTA APROVADO!");
                                                                } else {
                                                                    if (calc40 < 7 && nota79 == 1 && nota80 == 1) {
                                                                        printf("ALUNO EM AVF!");
                                                                        if (nota80 == 1) {
                                                                            printf("DESEJA CADASTRAR NOTA AVF ? [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno40);

                                                                            while (strcmp(notaaluno40, "s") != 0 && strcmp(notaaluno40, "S") != 0 && strcmp(notaaluno40, "n") != 0 && strcmp(notaaluno40, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno40);
                                                                            }
                                                                            if (strcmp(notaaluno40, "s") == 0 || strcmp(notaaluno40, "S") == 0) {
                                                                                printf("QUAL NOTA DA AVF ::\n");
                                                                                scanf("%f", &avf40);
                                                                                mg40 = ((avf40 + calc40) / 2);
                                                                                if (mg40 >= 5) {
                                                                                    printf("ALUNO APROVADO!\n");
                                                                                } else {
                                                                                    if (mg40 < 5) {
                                                                                        printf("ALUNO REPROVADO!\n");
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                break;
                                                            }
                                                        }
                                                        case 3:
                                                        {
                                                            printf("ESCOLHA O ALUNO PARA CADASTRAR A NOTA ::\n");
                                                            printf("%s [1]", nomealuno1c2m3);
                                                            printf("%s [2]", nomealuno2c2m3);
                                                            printf("%s [3]", nomealuno3c2m3);
                                                            printf("%s [4]", nomealuno4c2m3);
                                                            printf("%s [5]", nomealuno5c2m3);
                                                            scanf("%d", &esc_aluno_nota);

                                                            while (esc_aluno_nota != 1 && esc_aluno_nota != 2 && esc_aluno_nota != 3 && esc_aluno_nota != 4 && esc_aluno_nota != 5) {
                                                                printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                                                scanf("%d", &esc_aluno_nota);
                                                            }

                                                            switch (esc_aluno_nota) {
                                                                case 1:
                                                                {
                                                                    if (nota81 == 0) {
                                                                        printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                        while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                        }

                                                                        if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno1c2m3);
                                                                            scanf("%f", &nota1_aluno1c2m3);
                                                                            nota81 = 1;
                                                                        }
                                                                    } else {
                                                                        if (nota82 == 0) {
                                                                            printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                            while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                            }

                                                                            if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                                printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno1c2m3);
                                                                                scanf("%f", &nota2_aluno1c2m3);
                                                                                nota82 = 1;
                                                                            }
                                                                        }
                                                                    }
                                                                    calc41 = ((nota1_aluno1c2m3 + nota2_aluno1c2m3) / 2);

                                                                    if (calc41 >= 7 && nota81 == 1 && nota82 == 1) {
                                                                        printf("ALUNO ESTA APROVADO!");
                                                                    } else {
                                                                        if (calc41 < 7 && nota81 == 1 && nota82 == 1) {
                                                                            printf("ALUNO EM AVF!");
                                                                            if (nota82 == 1) {
                                                                                printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno41);

                                                                                while (strcmp(notaaluno41, "s") != 0 && strcmp(notaaluno41, "S") != 0 && strcmp(notaaluno41, "n") != 0 && strcmp(notaaluno41, "N") != 0) {
                                                                                    printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno41);
                                                                                }
                                                                                if (strcmp(notaaluno41, "s") == 0 || strcmp(notaaluno41, "S") == 0) {
                                                                                    printf("QUAL NOTA DA AVF ::\n");
                                                                                    scanf("%d", &avf41);
                                                                                    mg41 = ((avf41 + calc41) / 2);
                                                                                    if (mg41 >= 5) {
                                                                                        printf("ALUNO APROVADO!\n");
                                                                                    } else {
                                                                                        if (mg41 < 5) {
                                                                                            printf("ALUNO REPROVADO!\n");
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    break;
                                                                }
                                                                case 2:
                                                                {
                                                                    if (nota83 == 0) {
                                                                        printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                        while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                        }

                                                                        if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno2c2m3);
                                                                            scanf("%f", &nota1_aluno2c2m3);
                                                                            nota83 = 1;
                                                                        }
                                                                    } else {
                                                                        if (nota84 == 0) {
                                                                            printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                            while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                            }

                                                                            if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                                printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno2c2m3);
                                                                                scanf("%f", &nota2_aluno2c2m3);
                                                                                nota84 = 1;
                                                                            }
                                                                        }
                                                                    }
                                                                    calc42 = ((nota1_aluno2c2m3 + nota2_aluno2c2m3) / 2);

                                                                    if (calc42 >= 7 && nota83 == 1 && nota84 == 1) {
                                                                        printf("ALUNO ESTA APROVADO!");
                                                                    } else {
                                                                        if (calc42 < 7 && nota83 == 1 && nota84 == 1) {
                                                                            printf("ALUNO EM AVF!");
                                                                            if (nota84 == 1) {
                                                                                printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno42);

                                                                                while (strcmp(notaaluno42, "s") != 0 && strcmp(notaaluno42, "S") != 0 && strcmp(notaaluno42, "n") != 0 && strcmp(notaaluno42, "N") != 0) {
                                                                                    printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno42);
                                                                                }
                                                                                if (strcmp(notaaluno42, "s") == 0 || strcmp(notaaluno42, "S") == 0) {
                                                                                    printf("QUAL NOTA DA AVF ::\n");
                                                                                    scanf("%f", &avf42);
                                                                                    mg42 = ((avf42 + calc42) / 2);
                                                                                    if (mg42 >= 5) {
                                                                                        printf("ALUNO APROVADO!\n");
                                                                                    } else {
                                                                                        if (mg42 < 5) {
                                                                                            printf("ALUNO REPROVADO!\n");
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    break;
                                                                }
                                                                case 3:
                                                                {
                                                                    if (nota85 == 0) {
                                                                        printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                        while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                        }

                                                                        if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno3c2m3);
                                                                            scanf("%f", &nota1_aluno3c2m3);
                                                                            nota85 = 1;
                                                                        }
                                                                    } else {
                                                                        if (nota26 == 0) {
                                                                            printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                            while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                            }

                                                                            if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                                printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno3c2m3);
                                                                                scanf("%f", &nota2_aluno3c2m3);
                                                                                nota86 = 1;
                                                                            }
                                                                        }
                                                                    }
                                                                    calc43 = ((nota1_aluno3c2m3 + nota2_aluno3c2m3) / 2);

                                                                    if (calc43 >= 7 && nota85 == 1 && nota86 == 1) {
                                                                        printf("ALUNO ESTA APROVADO!");
                                                                    } else {
                                                                        if (calc43 < 7 && nota85 == 1 && nota86 == 1) {
                                                                            printf("ALUNO EM AVF!");
                                                                            if (nota86 == 1) {
                                                                                printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno43);

                                                                                while (strcmp(notaaluno43, "s") != 0 && strcmp(notaaluno43, "S") != 0 && strcmp(notaaluno43, "n") != 0 && strcmp(notaaluno43, "N") != 0) {
                                                                                    printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno43);
                                                                                }
                                                                                if (strcmp(notaaluno43, "s") == 0 || strcmp(notaaluno43, "S") == 0) {
                                                                                    printf("QUAL NOTA DA AVF ::\n");
                                                                                    scanf("%f", &avf43);
                                                                                    mg11 = ((avf43 + calc43) / 2);
                                                                                    if (mg43 >= 5) {
                                                                                        printf("ALUNO APROVADO!\n");
                                                                                    } else {
                                                                                        if (mg43 < 5) {
                                                                                            printf("ALUNO REPROVADO!\n");
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    break;
                                                                }
                                                                case 4:
                                                                {
                                                                    if (nota87 == 0) {
                                                                        printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                        while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                        }

                                                                        if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno4c2m3);
                                                                            scanf("%f", &nota1_aluno4c2m3);
                                                                            nota87 = 1;
                                                                        }
                                                                    } else {
                                                                        if (nota88 == 0) {
                                                                            printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                            while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                            }

                                                                            if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                                printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno4c2m3);
                                                                                scanf("%f", &nota2_aluno4c2m3);
                                                                                nota88 = 1;
                                                                            }
                                                                        }
                                                                    }
                                                                    calc14 = ((nota1_aluno4c2m3 + nota2_aluno4c2m3) / 2);

                                                                    if (calc44 >= 7 && nota87 == 1 && nota88 == 1) {
                                                                        printf("ALUNO ESTA APROVADO!");
                                                                    } else {
                                                                        if (calc44 < 7 && nota87 == 1 && nota88 == 1) {
                                                                            printf("ALUNO EM AVF!");
                                                                            if (nota88 == 1) {
                                                                                printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno44);

                                                                                while (strcmp(notaaluno44, "s") != 0 && strcmp(notaaluno44, "S") != 0 && strcmp(notaaluno44, "n") != 0 && strcmp(notaaluno44, "N") != 0) {
                                                                                    printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno44);
                                                                                }
                                                                                if (strcmp(notaaluno44, "s") == 0 || strcmp(notaaluno44, "S") == 0) {
                                                                                    printf("QUAL NOTA DA AVF ::\n");
                                                                                    scanf("%f", &avf44);
                                                                                    mg44 = ((avf44 + calc44) / 2);
                                                                                    if (mg44 >= 5) {
                                                                                        printf("ALUNO APROVADO!\n");
                                                                                    } else {
                                                                                        if (mg44 < 5) {
                                                                                            printf("ALUNO REPROVADO!\n");
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    break;
                                                                }
                                                                case 5:
                                                                {
                                                                    if (nota89 == 0) {
                                                                        printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                        while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                        }

                                                                        if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno5c2m3);
                                                                            scanf("%f", &nota1_aluno5c2m3);
                                                                            nota29 = 1;
                                                                        }
                                                                    } else {
                                                                        if (nota90 == 0) {
                                                                            printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                            while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                            }

                                                                            if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                                printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno5c2m3);
                                                                                scanf("%f", &nota2_aluno5c2m3);
                                                                                nota90 = 1;
                                                                            }
                                                                        }
                                                                    }
                                                                    calc45 = ((nota1_aluno5c2m3 + nota2_aluno5c2m3) / 2);

                                                                    if (calc4 >= 7 && nota89 == 1 && nota90 == 1) {
                                                                        printf("ALUNO ESTA APROVADO!");
                                                                    } else {
                                                                        if (calc45 < 7 && nota89 == 1 && nota90 == 1) {
                                                                            printf("ALUNO EM AVF!");
                                                                            if (nota30 == 1) {
                                                                                printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno45);

                                                                                while (strcmp(notaaluno45, "s") != 0 && strcmp(notaaluno45, "S") != 0 && strcmp(notaaluno45, "n") != 0 && strcmp(notaaluno45, "N") != 0) {
                                                                                    printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno45);
                                                                                }
                                                                                if (strcmp(notaaluno45, "s") == 0 || strcmp(notaaluno45, "S") == 0) {
                                                                                    printf("QUAL NOTA DA AVF ::\n");
                                                                                    scanf("%f", &avf45);
                                                                                    mg45 = ((avf45 + calc45) / 2);
                                                                                    if (mg15 >= 5) {
                                                                                        printf("ALUNO APROVADO!\n");
                                                                                    } else {
                                                                                        if (mg45 < 5) {
                                                                                            printf("ALUNO REPROVADO!\n");
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    break;
                                                                }
                                                            }
                                                            break;
                                                        }
                                                        case 4:
                                                        {
                                                            printf("ESCOLHA O ALUNO PARA CADASTRAR A NOTA ::\n");
                                                            printf("%s [1]", nomealuno1c2m4);
                                                            printf("%s [2]", nomealuno2c2m4);
                                                            printf("%s [3]", nomealuno3c2m4);
                                                            printf("%s [4]", nomealuno4c2m4);
                                                            printf("%s [5]", nomealuno5c2m4);
                                                            scanf("%d", &esc_aluno_nota);

                                                            while (esc_aluno_nota != 1 && esc_aluno_nota != 2 && esc_aluno_nota != 3 && esc_aluno_nota != 4 && esc_aluno_nota != 5) {
                                                                printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                                                scanf("%d", &esc_aluno_nota);
                                                            }

                                                            switch (esc_aluno_nota) {
                                                                case 1:
                                                                {
                                                                    if (nota91 == 0) {
                                                                        printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                        while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                        }

                                                                        if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno1c2m4);
                                                                            scanf("%f", &nota1_aluno1c2m4);
                                                                            nota91 = 1;
                                                                        }
                                                                    } else {
                                                                        if (nota92 == 0) {
                                                                            printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                            while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                            }

                                                                            if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                                printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno1c2m4);
                                                                                scanf("%f", &nota2_aluno1c2m4);
                                                                                nota92 = 1;
                                                                            }
                                                                        }
                                                                    }
                                                                    calc46 = ((nota1_aluno1c2m4 + nota2_aluno1c2m4) / 2);

                                                                    if (calc46 >= 7 && nota91 == 1 && nota92 == 1) {
                                                                        printf("ALUNO ESTA APROVADO!");
                                                                    } else {
                                                                        if (calc46 < 7 && nota91 == 1 && nota92 == 1) {
                                                                            printf("ALUNO EM AVF!");
                                                                            if (nota92 == 1) {
                                                                                printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno46);

                                                                                while (strcmp(notaaluno46, "s") != 0 && strcmp(notaaluno46, "S") != 0 && strcmp(notaaluno46, "n") != 0 && strcmp(notaaluno46, "N") != 0) {
                                                                                    printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno46);
                                                                                }
                                                                                if (strcmp(notaaluno46, "s") == 0 || strcmp(notaaluno46, "S") == 0) {
                                                                                    printf("QUAL NOTA DA AVF ::\n");
                                                                                    scanf("%f", &avf46);
                                                                                    mg46 = ((avf46 + calc46) / 2);
                                                                                    if (mg46 >= 5) {
                                                                                        printf("ALUNO APROVADO!\n");
                                                                                    } else {
                                                                                        if (mg46 < 5) {
                                                                                            printf("ALUNO REPROVADO!\n");
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    break;
                                                                }
                                                                case 2:
                                                                {
                                                                    if (nota93 == 0) {
                                                                        printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                        while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                        }

                                                                        if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno2c2m4);
                                                                            scanf("%f", &nota1_aluno2c2m4);
                                                                            nota93 = 1;
                                                                        }
                                                                    } else {
                                                                        if (nota94 == 0) {
                                                                            printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                            while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                            }

                                                                            if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                                printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno2c2m4);
                                                                                scanf("%f", &nota2_aluno2c2m4);
                                                                                nota94 = 1;
                                                                            }
                                                                        }
                                                                    }
                                                                    calc47 = ((nota1_aluno2c2m4 + nota2_aluno2c2m4) / 2);

                                                                    if (calc47 >= 7 && nota93 == 1 && nota94 == 1) {
                                                                        printf("ALUNO ESTA APROVADO!");
                                                                    } else {
                                                                        if (calc47 < 7 && nota93 == 1 && nota94 == 1) {
                                                                            printf("ALUNO EM AVF!");
                                                                            if (nota94 == 1) {
                                                                                printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno47);

                                                                                while (strcmp(notaaluno47, "s") != 0 && strcmp(notaaluno47, "S") != 0 && strcmp(notaaluno47, "n") != 0 && strcmp(notaaluno47, "N") != 0) {
                                                                                    printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno47);
                                                                                }
                                                                                if (strcmp(notaaluno47, "s") == 0 || strcmp(notaaluno47, "S") == 0) {
                                                                                    printf("QUAL NOTA DA AVF ::\n");
                                                                                    scanf("%f", &avf47);
                                                                                    mg47 = ((avf47 + calc47) / 2);
                                                                                    if (mg47 >= 5) {
                                                                                        printf("ALUNO APROVADO!\n");
                                                                                    } else {
                                                                                        if (mg47 < 5) {
                                                                                            printf("ALUNO REPROVADO!\n");
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    break;
                                                                }
                                                                case 3:
                                                                {
                                                                    if (nota95 == 0) {
                                                                        printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                        while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                        }

                                                                        if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno3c2m4);
                                                                            scanf("%f", &nota1_aluno3c2m4);
                                                                            nota95 = 1;
                                                                        }
                                                                    } else {
                                                                        if (nota96 == 0) {
                                                                            printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                            while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                            }

                                                                            if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                                printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno3c2m4);
                                                                                scanf("%f", &nota2_aluno3c2m4);
                                                                                nota96 = 1;
                                                                            }
                                                                        }
                                                                    }
                                                                    calc48 = ((nota1_aluno3c2m4 + nota2_aluno3c2m4) / 2);

                                                                    if (calc48 >= 7 && nota95 == 1 && nota96 == 1) {
                                                                        printf("ALUNO ESTA APROVADO!");
                                                                    } else {
                                                                        if (calc48 < 7 && nota95 == 1 && nota96 == 1) {
                                                                            printf("ALUNO EM AVF!");
                                                                            if (nota96 == 1) {
                                                                                printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno48);

                                                                                while (strcmp(notaaluno48, "s") != 0 && strcmp(notaaluno48, "S") != 0 && strcmp(notaaluno48, "n") != 0 && strcmp(notaaluno48, "N") != 0) {
                                                                                    printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno48);
                                                                                }
                                                                                if (strcmp(notaaluno48, "s") == 0 || strcmp(notaaluno48, "S") == 0) {
                                                                                    printf("QUAL NOTA DA AVF ::\n");
                                                                                    scanf("%f", &avf48);
                                                                                    mg48 = ((avf48 + calc48) / 2);
                                                                                    if (mg48 >= 5) {
                                                                                        printf("ALUNO APROVADO!\n");
                                                                                    } else {
                                                                                        if (mg48 < 5) {
                                                                                            printf("ALUNO REPROVADO!\n");
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    break;
                                                                }
                                                                case 4:
                                                                {
                                                                    if (nota97 == 0) {
                                                                        printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                        while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                        }

                                                                        if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno4c2m4);
                                                                            scanf("%f", &nota1_aluno4c2m4);
                                                                            nota97 = 1;
                                                                        }
                                                                    } else {
                                                                        if (nota98 == 0) {
                                                                            printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                            while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                            }

                                                                            if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                                printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno4c2m4);
                                                                                scanf("%f", &nota2_aluno4c2m4);
                                                                                nota98 = 1;
                                                                            }
                                                                        }
                                                                    }
                                                                    calc49 = ((nota1_aluno4c2m4 + nota2_aluno4c2m4) / 2);

                                                                    if (calc49 >= 7 && nota97 == 1 && nota98 == 1) {
                                                                        printf("ALUNO ESTA APROVADO!");
                                                                    } else {
                                                                        if (calc49 < 7 && nota97 == 1 && nota98 == 1) {
                                                                            printf("ALUNO EM AVF!");
                                                                            if (nota98 == 1) {
                                                                                printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno49);

                                                                                while (strcmp(notaaluno49, "s") != 0 && strcmp(notaaluno49, "S") != 0 && strcmp(notaaluno49, "n") != 0 && strcmp(notaaluno49, "N") != 0) {
                                                                                    printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno49);
                                                                                }
                                                                                if (strcmp(notaaluno49, "s") == 0 || strcmp(notaaluno49, "S") == 0) {
                                                                                    printf("QUAL NOTA DA AVF ::\n");
                                                                                    scanf("%f", &avf49);
                                                                                    mg49 = ((avf49 + calc49) / 2);
                                                                                    if (mg49 >= 5) {
                                                                                        printf("ALUNO APROVADO!\n");
                                                                                    } else {
                                                                                        if (mg49 < 5) {
                                                                                            printf("ALUNO REPROVADO!\n");
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    break;
                                                                }
                                                                case 5:
                                                                {
                                                                    if (nota99 == 0) {
                                                                        printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                        while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                        }

                                                                        if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno5c2m4);
                                                                            scanf("%f", &nota1_aluno5c2m4);
                                                                            nota99 = 1;
                                                                        }
                                                                    } else {
                                                                        if (nota100 == 0) {
                                                                            printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                            while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                            }

                                                                            if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                                printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno5c2m4);
                                                                                scanf("%f", &nota2_aluno5c2m4);
                                                                                nota100 = 1;
                                                                            }
                                                                        }
                                                                    }
                                                                    calc100 = ((nota1_aluno5c2m4 + nota2_aluno5c2m4) / 2);

                                                                    if (calc50 >= 7 && nota99 == 1 && nota100 == 1) {
                                                                        printf("ALUNO ESTA APROVADO!");
                                                                    } else {
                                                                        if (calc50 < 7 && nota99 == 1 && nota100 == 1) {
                                                                            printf("ALUNO EM AVF!");
                                                                            if (nota50 == 1) {
                                                                                printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno50);

                                                                                while (strcmp(notaaluno50, "s") != 0 && strcmp(notaaluno50, "S") != 0 && strcmp(notaaluno50, "n") != 0 && strcmp(notaaluno50, "N") != 0) {
                                                                                    printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno50);
                                                                                }
                                                                                if (strcmp(notaaluno50, "s") == 0 || strcmp(notaaluno50, "S") == 0) {
                                                                                    printf("QUAL NOTA DA AVF ::\n");
                                                                                    scanf("%f", &avf50);
                                                                                    mg50 = ((avf50 + calc50) / 2);
                                                                                    if (mg50 >= 5) {
                                                                                        printf("ALUNO APROVADO!\n");
                                                                                    } else {
                                                                                        if (mg50 < 5) {
                                                                                            printf("ALUNO REPROVADO!\n");
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    break;
                                                                }
                                                            }

                                                            break;
                                                        }
                                                        case 5:
                                                        {
                                                            printf("ESCOLHA O ALUNO PARA CADASTRAR A NOTA ::\n");
                                                            printf("%s [1]", nomealuno1c2m5);
                                                            printf("%s [2]", nomealuno2c2m5);
                                                            printf("%s [3]", nomealuno3c2m5);
                                                            printf("%s [4]", nomealuno4c2m5);
                                                            printf("%s [5]", nomealuno5c2m5);
                                                            scanf("%d", &esc_aluno_nota);

                                                            while (esc_aluno_nota != 1 && esc_aluno_nota != 2 && esc_aluno_nota != 3 && esc_aluno_nota != 4 && esc_aluno_nota != 5) {
                                                                printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                                                scanf("%d", &esc_aluno_nota);
                                                            }

                                                            switch (esc_aluno_nota) {
                                                                case 1:
                                                                {
                                                                    if (nota101 == 0) {
                                                                        printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                        while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                        }

                                                                        if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno1c2m5);
                                                                            scanf("%f", &nota1_aluno1c2m5);
                                                                            nota101 = 1;
                                                                        }
                                                                    } else {
                                                                        if (nota102 == 0) {
                                                                            printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                            while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                            }

                                                                            if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                                printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno1c2m5);
                                                                                scanf("%f", &nota2_aluno1c2m5);
                                                                                nota102 = 1;
                                                                            }
                                                                        }
                                                                    }
                                                                    calc51 = ((nota1_aluno1c2m5 + nota2_aluno1c2m5) / 2);

                                                                    if (calc51 >= 7 && nota101 == 1 && nota102 == 1) {
                                                                        printf("ALUNO ESTA APROVADO!");
                                                                    } else {
                                                                        if (calc51 < 7 && nota101 == 1 && nota102 == 1) {
                                                                            printf("ALUNO EM AVF!");
                                                                            if (nota102 == 1) {
                                                                                printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno51);

                                                                                while (strcmp(notaaluno51, "s") != 0 && strcmp(notaaluno51, "S") != 0 && strcmp(notaaluno51, "n") != 0 && strcmp(notaaluno51, "N") != 0) {
                                                                                    printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno51);
                                                                                }
                                                                                if (strcmp(notaaluno51, "s") == 0 || strcmp(notaaluno51, "S") == 0) {
                                                                                    printf("QUAL NOTA DA AVF ::\n");
                                                                                    scanf("%f", &avf51);
                                                                                    mg51 = ((avf51 + calc51) / 2);
                                                                                    if (mg51 >= 5) {
                                                                                        printf("ALUNO APROVADO!\n");
                                                                                    } else {
                                                                                        if (mg51 < 5) {
                                                                                            printf("ALUNO REPROVADO!\n");
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    break;
                                                                }
                                                                case 2:
                                                                {
                                                                    if (nota103 == 0) {
                                                                        printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                        while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                        }

                                                                        if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno2c2m5);
                                                                            scanf("%f", &nota1_aluno2c2m5);
                                                                            nota103 = 1;
                                                                        }
                                                                    } else {
                                                                        if (nota104 == 0) {
                                                                            printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                            while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                            }

                                                                            if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                                printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno2c2m5);
                                                                                scanf("%f", &nota2_aluno2c2m5);
                                                                                nota104 = 1;
                                                                            }
                                                                        }
                                                                    }
                                                                    calc52 = ((nota1_aluno2c2m5 + nota2_aluno2c2m5) / 2);

                                                                    if (calc52 >= 7 && nota103 == 1 && nota104 == 1) {
                                                                        printf("ALUNO ESTA APROVADO!");
                                                                    } else {
                                                                        if (calc52 < 7 && nota103 == 1 && nota104 == 1) {
                                                                            printf("ALUNO EM AVF!");
                                                                            if (nota104 == 1) {
                                                                                printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno52);

                                                                                while (strcmp(notaaluno52, "s") != 0 && strcmp(notaaluno52, "S") != 0 && strcmp(notaaluno52, "n") != 0 && strcmp(notaaluno52, "N") != 0) {
                                                                                    printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno52);
                                                                                }
                                                                                if (strcmp(notaaluno52, "s") == 0 || strcmp(notaaluno52, "S") == 0) {
                                                                                    printf("QUAL NOTA DA AVF ::\n");
                                                                                    scanf("%f", &avf52);
                                                                                    mg52 = ((avf52 + calc52) / 2);
                                                                                    if (mg52 >= 5) {
                                                                                        printf("ALUNO APROVADO!\n");
                                                                                    } else {
                                                                                        if (mg52 < 5) {
                                                                                            printf("ALUNO REPROVADO!\n");
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    break;
                                                                }
                                                                case 3:
                                                                {
                                                                    if (nota105 == 0) {
                                                                        printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                        while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                        }

                                                                        if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno3c2m5);
                                                                            scanf("%f", &nota1_aluno3c2m5);
                                                                            nota105 = 1;
                                                                        }
                                                                    } else {
                                                                        if (nota106 == 0) {
                                                                            printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                            while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                            }

                                                                            if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                                printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno3c2m5);
                                                                                scanf("%f", &nota2_aluno3c2m5);
                                                                                nota106 = 1;
                                                                            }
                                                                        }
                                                                    }
                                                                    calc53 = ((nota1_aluno3c2m5 + nota2_aluno3c2m5) / 2);

                                                                    if (calc53 >= 7 && nota105 == 1 && nota106 == 1) {
                                                                        printf("ALUNO ESTA APROVADO!");
                                                                    } else {
                                                                        if (calc53 < 7 && nota105 == 1 && nota106 == 1) {
                                                                            printf("ALUNO EM AVF!");
                                                                            if (nota106 == 1) {
                                                                                printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno53);

                                                                                while (strcmp(notaaluno53, "s") != 0 && strcmp(notaaluno53, "S") != 0 && strcmp(notaaluno53, "n") != 0 && strcmp(notaaluno53, "N") != 0) {
                                                                                    printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno53);
                                                                                }
                                                                                if (strcmp(notaaluno53, "s") == 0 || strcmp(notaaluno53, "S") == 0) {
                                                                                    printf("QUAL NOTA DA AVF ::\n");
                                                                                    scanf("%f", &avf53);
                                                                                    mg53 = ((avf53 + calc53) / 2);
                                                                                    if (mg53 >= 5) {
                                                                                        printf("ALUNO APROVADO!\n");
                                                                                    } else {
                                                                                        if (mg53 < 5) {
                                                                                            printf("ALUNO REPROVADO!\n");
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    break;
                                                                }
                                                                case 4:
                                                                {
                                                                    if (nota107 == 0) {
                                                                        printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                        while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                        }

                                                                        if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno4c2m5);
                                                                            scanf("%f", &nota1_aluno4c2m5);
                                                                            nota107 = 1;
                                                                        }
                                                                    } else {
                                                                        if (nota108 == 0) {
                                                                            printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                            while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                            }

                                                                            if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                                printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno4c2m5);
                                                                                scanf("%f", &nota2_aluno4c2m5);
                                                                                nota108 = 1;
                                                                            }
                                                                        }
                                                                    }
                                                                    calc54 = ((nota1_aluno4c2m1 + nota2_aluno4c2m1) / 2);

                                                                    if (calc54 >= 7 && nota107 == 1 && nota108 == 1) {
                                                                        printf("ALUNO ESTA APROVADO!");
                                                                    } else {
                                                                        if (calc54 < 7 && nota107 == 1 && nota108 == 1) {
                                                                            printf("ALUNO EM AVF!");
                                                                            if (nota108 == 1) {
                                                                                printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno54);

                                                                                while (strcmp(notaaluno54, "s") != 0 && strcmp(notaaluno54, "S") != 0 && strcmp(notaaluno54, "n") != 0 && strcmp(notaaluno54, "N") != 0) {
                                                                                    printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno54);
                                                                                }
                                                                                if (strcmp(notaaluno54, "s") == 0 || strcmp(notaaluno54, "S") == 0) {
                                                                                    printf("QUAL NOTA DA AVF ::\n");
                                                                                    scanf("%f", &avf24);
                                                                                    mg54 = ((avf54 + calc54) / 2);
                                                                                    if (mg54 >= 5) {
                                                                                        printf("ALUNO APROVADO!\n");
                                                                                    } else {
                                                                                        if (mg54 < 5) {
                                                                                            printf("ALUNO REPROVADO!\n");
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    break;
                                                                }
                                                                case 5:
                                                                {
                                                                    if (nota109 == 0) {
                                                                        printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                        while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                        }

                                                                        if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno5c2m5);
                                                                            scanf("%f", &nota1_aluno5c2m5);
                                                                            nota109 = 1;
                                                                        }
                                                                    } else {
                                                                        if (nota110 == 0) {
                                                                            printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                            while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                            }

                                                                            if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                                printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno5c2m5);
                                                                                scanf("%f", &nota2_aluno5c2m5);
                                                                                nota110 = 1;
                                                                            }
                                                                        }
                                                                    }
                                                                    calc55 = ((nota1_aluno5c2m5 + nota2_aluno5c2m5) / 2);

                                                                    if (calc55 >= 7 && nota109 == 1 && nota110 == 1) {
                                                                        printf("ALUNO ESTA APROVADO!");
                                                                    } else {
                                                                        if (calc55 < 7 && nota109 == 1 && nota110 == 1) {
                                                                            printf("ALUNO EM AVF!");
                                                                            if (nota110 == 1) {
                                                                                printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno55);

                                                                                while (strcmp(notaaluno55, "s") != 0 && strcmp(notaaluno55, "S") != 0 && strcmp(notaaluno55, "n") != 0 && strcmp(notaaluno55, "N") != 0) {
                                                                                    printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno55);
                                                                                }
                                                                                if (strcmp(notaaluno55, "s") == 0 || strcmp(notaaluno55, "S") == 0) {
                                                                                    printf("QUAL NOTA DA AVF ::\n");
                                                                                    scanf("%f", &avf55);
                                                                                    mg55 = ((avf55 + calc55) / 2);
                                                                                    if (mg55 >= 5) {
                                                                                        printf("ALUNO APROVADO!\n");
                                                                                    } else {
                                                                                        if (mg55 < 5) {
                                                                                            printf("ALUNO REPROVADO!\n");
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    break;
                                                                }
                                                            }

                                                            break;
                                                        }
                                                        case 6:
                                                        {
                                                            printf("ESCOLHA O ALUNO PARA CADASTRAR A NOTA ::\n");
                                                            printf("%s [1]", nomealuno1c2m6);
                                                            printf("%s [2]", nomealuno2c2m6);
                                                            printf("%s [3]", nomealuno3c2m6);
                                                            printf("%s [4]", nomealuno4c2m6);
                                                            printf("%s [5]", nomealuno5c2m6);
                                                            scanf("%d", &esc_aluno_nota);

                                                            while (esc_aluno_nota != 1 && esc_aluno_nota != 2 && esc_aluno_nota != 3 && esc_aluno_nota != 4 && esc_aluno_nota != 5) {
                                                                printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                                                scanf("%d", &esc_aluno_nota);
                                                            }

                                                            switch (esc_aluno_nota) {
                                                                case 1:
                                                                {
                                                                    if (nota111 == 0) {
                                                                        printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                        while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                        }

                                                                        if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno1c2m6);
                                                                            scanf("%f", &nota1_aluno1c2m6);
                                                                            nota111 = 1;
                                                                        }
                                                                    } else {
                                                                        if (nota112 == 0) {
                                                                            printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                            while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                            }

                                                                            if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                                printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno1c2m6);
                                                                                scanf("%f", &nota2_aluno1c2m6);
                                                                                nota112 = 1;
                                                                            }
                                                                        }
                                                                    }
                                                                    calc56 = ((nota1_aluno1c2m6 + nota2_aluno1c2m6) / 2);

                                                                    if (calc56 >= 7 && nota111 == 1 && nota112 == 1) {
                                                                        printf("ALUNO ESTA APROVADO!");
                                                                    } else {
                                                                        if (calc56 < 7 && nota111 == 1 && nota112 == 1) {
                                                                            printf("ALUNO EM AVF!");
                                                                            if (nota112 == 1) {
                                                                                printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno56);

                                                                                while (strcmp(notaaluno56, "s") != 0 && strcmp(notaaluno56, "S") != 0 && strcmp(notaaluno56, "n") != 0 && strcmp(notaaluno56, "N") != 0) {
                                                                                    printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno56);
                                                                                }
                                                                                if (strcmp(notaaluno56, "s") == 0 || strcmp(notaaluno56, "S") == 0) {
                                                                                    printf("QUAL NOTA DA AVF ::\n");
                                                                                    scanf("%f", &avf56);
                                                                                    mg56 = ((avf56 + calc56) / 2);
                                                                                    if (mg56 >= 5) {
                                                                                        printf("ALUNO APROVADO!\n");
                                                                                    } else {
                                                                                        if (mg56 < 5) {
                                                                                            printf("ALUNO REPROVADO!\n");
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    break;
                                                                }
                                                                case 2:
                                                                {
                                                                    if (nota113 == 0) {
                                                                        printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                        while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                        }

                                                                        if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno2c2m1);
                                                                            scanf("%f", &nota1_aluno2c2m1);
                                                                            nota113 = 1;
                                                                        }
                                                                    } else {
                                                                        if (nota114 == 0) {
                                                                            printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                            while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                            }

                                                                            if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                                printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno2c2m6);
                                                                                scanf("%f", &nota2_aluno2c2m6);
                                                                                nota114 = 1;
                                                                            }
                                                                        }
                                                                    }
                                                                    calc27 = ((nota1_aluno2c2m1 + nota2_aluno2c2m1) / 2);

                                                                    if (calc57 >= 7 && nota113 == 1 && nota114 == 1) {
                                                                        printf("ALUNO ESTA APROVADO!");
                                                                    } else {
                                                                        if (calc57 < 7 && nota113 == 1 && nota114 == 1) {
                                                                            printf("ALUNO EM AVF!");
                                                                            if (nota114 == 1) {
                                                                                printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno57);

                                                                                while (strcmp(notaaluno57, "s") != 0 && strcmp(notaaluno57, "S") != 0 && strcmp(notaaluno57, "n") != 0 && strcmp(notaaluno57, "N") != 0) {
                                                                                    printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno57);
                                                                                }
                                                                                if (strcmp(notaaluno57, "s") == 0 || strcmp(notaaluno57, "S") == 0) {
                                                                                    printf("QUAL NOTA DA AVF ::\n");
                                                                                    scanf("%f", &avf57);
                                                                                    mg57 = ((avf57 + calc57) / 2);
                                                                                    if (mg57 >= 5) {
                                                                                        printf("ALUNO APROVADO!\n");
                                                                                    } else {
                                                                                        if (mg57 < 5) {
                                                                                            printf("ALUNO REPROVADO!\n");
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    break;
                                                                }
                                                                case 3:
                                                                {
                                                                    if (nota115 == 0) {
                                                                        printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                        while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                        }

                                                                        if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno3c2m6);
                                                                            scanf("%f", &nota1_aluno3c2m6);
                                                                            nota115 = 1;
                                                                        }
                                                                    } else {
                                                                        if (nota116 == 0) {
                                                                            printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                            while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                            }

                                                                            if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                                printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno3c2m6);
                                                                                scanf("%f", &nota2_aluno3c2m6);
                                                                                nota116 = 1;
                                                                            }
                                                                        }
                                                                    }
                                                                    calc58 = ((nota1_aluno3c2m6 + nota2_aluno3c2m6) / 2);

                                                                    if (calc58 >= 7 && nota115 == 1 && nota116 == 1) {
                                                                        printf("ALUNO ESTA APROVADO!");
                                                                    } else {
                                                                        if (calc58 < 7 && nota115 == 1 && nota116 == 1) {
                                                                            printf("ALUNO EM AVF!");
                                                                            if (nota116 == 1) {
                                                                                printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno58);

                                                                                while (strcmp(notaaluno58, "s") != 0 && strcmp(notaaluno58, "S") != 0 && strcmp(notaaluno58, "n") != 0 && strcmp(notaaluno58, "N") != 0) {
                                                                                    printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno58);
                                                                                }
                                                                                if (strcmp(notaaluno58, "s") == 0 || strcmp(notaaluno58, "S") == 0) {
                                                                                    printf("QUAL NOTA DA AVF ::\n");
                                                                                    scanf("%f", &avf58);
                                                                                    mg58 = ((avf58 + calc58) / 2);
                                                                                    if (mg58 >= 5) {
                                                                                        printf("ALUNO APROVADO!\n");
                                                                                    } else {
                                                                                        if (mg58 < 5) {
                                                                                            printf("ALUNO REPROVADO!\n");
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    break;
                                                                }
                                                                case 4:
                                                                {
                                                                    if (nota117 == 0) {
                                                                        printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                        while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                        }

                                                                        if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno4c2m6);
                                                                            scanf("%f", &nota1_aluno4c2m6);
                                                                            nota117 = 1;
                                                                        }
                                                                    } else {
                                                                        if (nota118 == 0) {
                                                                            printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                            while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                            }

                                                                            if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                                printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno4c2m6);
                                                                                scanf("%f", &nota2_aluno4c2m6);
                                                                                nota118 = 1;
                                                                            }
                                                                        }
                                                                    }
                                                                    calc54 = ((nota1_aluno4c2m1 + nota2_aluno4c2m1) / 2);

                                                                    if (calc59 >= 7 && nota117 == 1 && nota118 == 1) {
                                                                        printf("ALUNO ESTA APROVADO!");
                                                                    } else {
                                                                        if (calc59 < 7 && nota117 == 1 && nota118 == 1) {
                                                                            printf("ALUNO EM AVF!");
                                                                            if (nota118 == 1) {
                                                                                printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno59);

                                                                                while (strcmp(notaaluno59, "s") != 0 && strcmp(notaaluno59, "S") != 0 && strcmp(notaaluno59, "n") != 0 && strcmp(notaaluno59, "N") != 0) {
                                                                                    printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno59);
                                                                                }
                                                                                if (strcmp(notaaluno59, "s") == 0 || strcmp(notaaluno59, "S") == 0) {
                                                                                    printf("QUAL NOTA DA AVF ::\n");
                                                                                    scanf("%f", &avf59);
                                                                                    mg59 = ((avf59 + calc59) / 2);
                                                                                    if (mg59 >= 5) {
                                                                                        printf("ALUNO APROVADO!\n");
                                                                                    } else {
                                                                                        if (mg59 < 5) {
                                                                                            printf("ALUNO REPROVADO!\n");
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    break;
                                                                }
                                                                case 5:
                                                                {
                                                                    if (nota119 == 0) {
                                                                        printf("DESEJA CADASTRAR AV1 ? [S/N] ::\n");
                                                                        scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);

                                                                        while (strcmp(cadastro_av1, "s") != 0 && strcmp(cadastro_av1, "S") != 0 && strcmp(cadastro_av1, "n") != 0 && strcmp(cadastro_av1, "N") != 0) {
                                                                            printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av1);
                                                                        }

                                                                        if (strcmp(cadastro_av1, "s") == 0 || strcmp(cadastro_av1, "S") == 0) {

                                                                            printf("QUAL A NOTA DA AV1 DO ALUNO - %s", nomealuno5c2m6);
                                                                            scanf("%d", &nota1_aluno5c2m6);
                                                                            nota119 = 1;
                                                                        }
                                                                    } else {
                                                                        if (nota120 == 0) {
                                                                            printf("DESEJA CADASTRAR AV2 ? [S/N] ::\n");
                                                                            scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);

                                                                            while (strcmp(cadastro_av2, "s") != 0 && strcmp(cadastro_av2, "S") != 0 && strcmp(cadastro_av2, "n") != 0 && strcmp(cadastro_av2, "N") != 0) {
                                                                                printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", cadastro_av2);
                                                                            }

                                                                            if (strcmp(cadastro_av2, "s") == 0 || strcmp(cadastro_av2, "S") == 0) {

                                                                                printf("QUAL A NOTA DA AV2 DO ALUNO - %s", nomealuno5c2m6);
                                                                                scanf("%f", &nota2_aluno5c2m6);
                                                                                nota120 = 1;
                                                                            }
                                                                        }
                                                                    }
                                                                    calc60 = ((nota1_aluno5c2m6 + nota2_aluno5c2m6) / 2);

                                                                    if (calc60 >= 7 && nota119 == 1 && nota120 == 1) {
                                                                        printf("ALUNO ESTA APROVADO!");
                                                                    } else {
                                                                        if (calc60 < 7 && nota119 == 1 && nota120 == 1) {
                                                                            printf("ALUNO EM AVF!");
                                                                            if (nota120 == 1) {
                                                                                printf("DESEJA CADASTRAR NOTA AVF [S/N] ::\n");
                                                                                scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno60);

                                                                                while (strcmp(notaaluno60, "s") != 0 && strcmp(notaaluno60, "S") != 0 && strcmp(notaaluno60, "n") != 0 && strcmp(notaaluno60, "N") != 0) {
                                                                                    printf("DIGITE SOMENTE UMA DAS OPCOES CITADAS [S/N] ::\n");
                                                                                    scanf("%*c%[%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s]s", notaaluno60);
                                                                                }
                                                                                if (strcmp(notaaluno60, "s") == 0 || strcmp(notaaluno60, "S") == 0) {
                                                                                    printf("QUAL NOTA DA AVF ::\n");
                                                                                    scanf("%f", &avf60);
                                                                                    mg60 = ((avf60 + calc60) / 2);
                                                                                    if (mg60 >= 5) {
                                                                                        printf("ALUNO APROVADO!\n");
                                                                                    } else {
                                                                                        if (mg60 < 5) {
                                                                                            printf("ALUNO REPROVADO!\n");
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    break;
                                                                }//case 5
                                                            }
                                                            break;
                                                        }
                                                    }
                                                        esc_disciplina_aluno = 0;

                                                }
                                                break;
                                            }
                                        }
                                        break;
                                    }

                                }
                                break;
                            }
                        }
                        break;
                    }
                    case 2:
                    {
                        printf("ESCOLHA SUA ALTERAÇAO ::\n");
                        printf("ALTERAR CADASTRO [1]\n");
                        printf("EXCLUIR CADASTRO [2]\n");

                        scanf("%d", &alteracao_cadastro);

                        while (alteracao_cadastro != 1 && alteracao_cadastro != 2) {
                            printf("DIGITE SOMENTE UMA DAS OPÇOES SITADAS\n");
                            scanf("%d", &alteracao_cadastro);
                        }

                        switch (alteracao_cadastro) {
                            case 1:
                            {
                                printf("O QUE DESEJA ALTERAR ::\n");
                                printf("CURSO      [1]\n");
                                printf("PROFESSOR  [2]\n");
                                printf("ALUNO      [3]\n");
                                scanf("%d", &escolha_alt);

                                while (escolha_alt != 1 && escolha_alt != 2 && escolha_alt != 3) {
                                    printf("DIGITE SOMENTE UMA DAS OPÇOES SITADAS\n");
                                    scanf("%d", &escolha_alt);
                                }

                                switch (escolha_alt) {
                                    case 1:
                                    {
                                        printf("DESEJA ALTERAR ::\n");
                                        printf("CURSO       [1]\n");
                                        printf("DISCIPLINA  [2]\n");
                                        scanf("%d", &escolha_alt_curso);

                                        while (escolha_alt_curso != 1 && escolha_alt_curso != 2) {
                                            printf("DIGITE SOMENTE UMA DAS OPÇOES SITADAS\n");
                                            scanf("%d", &escolha_alt_curso);
                                        }

                                        switch (escolha_alt_curso) {
                                            case 1:
                                            {
                                                printf("QUAL O NOME DO CURSO QUE DESEJA ALTERAR ::\n");
                                                printf("%s [1]\n", nomecurso1);
                                                printf("%s [2]\n", nomecurso2);
                                                scanf("%d", &alt_curso);

                                                while (alt_curso != 1 && alt_curso != 2) {
                                                    printf("ESCOLHA SOMENTE UM DOS CURSOS MOSTRADOS ANTERIORMENTE ::\n");
                                                    scanf("%d", &alt_curso);
                                                }

                                                switch (alt_curso) {
                                                    case 1:
                                                    {
                                                        printf("QUAL O NOVO NOME DO CURSO ::\n");
                                                        strcpy(nomecurso1, "");
                                                        scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomecurso1);
                                                        break;
                                                    }
                                                    case 2:
                                                    {
                                                        printf("QUAL O NOVO NOME DO CURSO ::\n");
                                                        strcpy(nomecurso2, "");
                                                        scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", nomecurso2);
                                                        break;
                                                    }
                                                }
                                                break;
                                            }
                                            case 2:
                                            {
                                                printf("QUAL DISIPLINA DESEJA ALTERAR ::\n");
                                                printf("%s [1]", curso2semestre1m1);
                                                printf("%s [2]", curso2semestre1m2);
                                                printf("%s [3]", curso2semestre2m1);
                                                printf("%s [4]", curso2semestre2m2);
                                                printf("%s [5]", curso2semestre3m1);
                                                printf("%s [6]", curso2semestre3m2);
                                                scanf("%d", &alt_disci);

                                                while (alt_disci != 1 && alt_disci != 2 && alt_disci != 3 && alt_disci != 4 && alt_disci != 5 && alt_disci != 6) {
                                                    printf("ESCOLHA SOMENTE UM DOS CURSOS MOSTRADOS ANTERIORMENTE ::\n");
                                                    scanf("%d", &alt_disci);
                                                }

                                                switch (alt_disci) {
                                                    case 1:
                                                    {
                                                        printf("QUAL O NOME DA DISCIPLINA ::\n");
                                                        strcpy(curso2semestre1m1, "");
                                                        scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", curso2semestre1m1);
                                                        break;
                                                    }
                                                    case 2:
                                                    {
                                                        printf("QUAL O NOME DA DISCIPLINA ::\n");
                                                        strcpy(curso2semestre1m2, "");
                                                        scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", curso2semestre1m2);
                                                        break;
                                                    }
                                                    case 3:
                                                    {
                                                        printf("QUAL O NOME DA DISCIPLINA ::\n");
                                                        strcpy(curso2semestre1m2, "");
                                                        scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", curso2semestre2m1);
                                                        break;
                                                    }
                                                    case 4:
                                                    {
                                                        printf("QUAL O NOME DA DISCIPLINA ::\n");
                                                        strcpy(curso2semestre1m2, "");
                                                        scanf("%*c%A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", curso2semestre2m2);
                                                        break;
                                                    }
                                                    case 5:
                                                    {
                                                        printf("QUAL O NOME DA DISCIPLINA ::\n");
                                                        strcpy(curso2semestre1m2, "");
                                                        scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", curso2semestre3m1);
                                                        break;
                                                    }
                                                    case 6:
                                                    {
                                                        printf("QUAL O NOME DA DISCIPLINA ::\n");
                                                        strcpy(curso2semestre1m2, "");
                                                        scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", curso2semestre3m2);
                                                        break;
                                                    }
                                                }
                                                break;
                                            }
                                        }


                                        break;
                                    }
                                    case 2:
                                    {
                                        printf("DE QUAL CURSO DESEJA ALTERAR O PROFESSOR ::\n");
                                        if (curso1 == 1 && curso2 == 1) {
                                            printf("%s  [1]\n", nomecurso1);
                                            printf("%s  [2]\n", nomecurso2);

                                            printf("PARA VOTLAR AO MENU DIGITE [9]\n");
                                            printf("PARA DETALHE SOBRE O PROFESSOR DIGITE SEU RESPECTIVO NUMERO ::\n");
                                            scanf("%d", &alt_aluno_curso);

                                            while (alt_aluno_curso != 1 && alt_aluno_curso != 2 && alt_aluno_curso != 9) {
                                                printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                                scanf("%d", &alt_aluno_curso);
                                            }
                                        } else {
                                            if (curso1 == 1 && curso2 == 0) {
                                                printf("1º SEMESTRE - %s  [1]\n", nomecurso1);

                                                printf("PARA VOTLAR AO MENU DIGITE [9]\n");
                                                printf("PARA DETALHE SOBRE O PROFESSOR DIGITE SEU RESPECTIVO NUMERO ::\n");
                                                scanf("%d", &alt_aluno_curso);

                                                while (alt_aluno_curso != 1 && alt_aluno_curso != 9) {
                                                    printf("ESCOLHA SOMENTE A OPCAO CITADA ::\n");
                                                    scanf("%d", &alt_aluno_curso);
                                                }
                                            } else {
                                                if (curso1 == 0 && curso2 == 1) {
                                                    printf("1º SEMESTRE - %s  [1]\n", nomecurso2);

                                                    printf("PARA VOTLAR AO MENU DIGITE [9]\n");
                                                    printf("PARA DETALHE SOBRE O PROFESSOR DIGITE SEU RESPECTIVO NUMERO ::\n");
                                                    scanf("%d", &alt_aluno_curso);
                                                    while (alt_aluno_curso != 1 && alt_aluno_curso != 9) {
                                                        printf("ESCOLHA SOMENTE A OPCAO CITADA ::\n");
                                                        scanf("%d", &alt_aluno_curso);
                                                    }
                                                    if (alt_aluno_curso == 1) {
                                                        alt_aluno_curso = 2;
                                                    }
                                                }
                                            }
                                        }
                                        while (alt_prof_curso != 1 && alt_prof_curso != 2) {
                                            printf("ESCOLHA SOMENTE UM DOS CURSOS MOSTRADOS ANTERIORMENTE ::\n");
                                            scanf("%d", &alt_prof_curso);
                                        }

                                        switch (alt_prof_curso) {
                                            case 1:
                                            {
                                                printf("QUAL PROFESSOR DESEJA ALTERAR ::");
                                                printf("%s [1]", NomeProfSI1);
                                                printf("%s [2]", NomeProfSI2);
                                                printf("%s [3]", NomeProfSI3);
                                                printf("%s [4]", NomeProfSI4);
                                                printf("%s [5]", NomeProfSI5);
                                                printf("%s [6]", NomeProfSI6);
                                                scanf("%d", &alt_prof);

                                                switch (alt_prof) {
                                                    case 1:
                                                    {
                                                        printf("QUAL O NOME DO NOVO PROFESSOR ::\n");
                                                        scanf("%*c%[A-Z a-z]s", Alt_Professor);
                                                        if (strcmp(NomeProfSI1, NomeProfSI2) == 0) {
                                                            strcpy(NomeProfSI2, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfSI1, NomeProfSI3) == 0) {
                                                            strcpy(NomeProfSI3, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfSI1, NomeProfSI4) == 0) {
                                                            strcpy(NomeProfSI4, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfSI1, NomeProfSI5) == 0) {
                                                            strcpy(NomeProfSI5, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfSI1, NomeProfSI6) == 0) {
                                                            strcpy(NomeProfSI6, Alt_Professor);
                                                        }
                                                        strcpy(NomeProfSI1, Alt_Professor);
                                                        strcpy(Alt_Professor, "");

                                                        printf("NOME DO PROFESSOR ALTERADO COM SUCESSO\n");

                                                        break;
                                                    }
                                                    case 2:
                                                    {
                                                        printf("QUAL O NOME DO NOVO PROFESSOR ::\n");
                                                        scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", Alt_Professor);
                                                        if (strcmp(NomeProfSI2, NomeProfSI1) == 0) {
                                                            strcpy(NomeProfSI1, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfSI2, NomeProfSI3) == 0) {
                                                            strcpy(NomeProfSI3, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfSI2, NomeProfSI4) == 0) {
                                                            strcpy(NomeProfSI4, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfSI2, NomeProfSI5) == 0) {
                                                            strcpy(NomeProfSI5, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfSI2, NomeProfSI6) == 0) {
                                                            strcpy(NomeProfSI6, Alt_Professor);
                                                        }
                                                        strcpy(NomeProfSI2, Alt_Professor);
                                                        strcpy(Alt_Professor, "");
                                                        printf("NOME DO PROFESSOR ALTERADO COM SUCESSO\n");
                                                        break;
                                                    }
                                                    case 3:
                                                    {
                                                        printf("QUAL O NOME DO NOVO PROFESSOR ::\n");
                                                        scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", Alt_Professor);
                                                        if (strcmp(NomeProfSI3, NomeProfSI1) == 0) {
                                                            strcpy(NomeProfSI1, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfSI3, NomeProfSI2) == 0) {
                                                            strcpy(NomeProfSI2, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfSI3, NomeProfSI4) == 0) {
                                                            strcpy(NomeProfSI4, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfSI3, NomeProfSI5) == 0) {
                                                            strcpy(NomeProfSI5, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfSI3, NomeProfSI6) == 0) {
                                                            strcpy(NomeProfSI6, Alt_Professor);
                                                        }
                                                        strcpy(NomeProfSI3, Alt_Professor);
                                                        strcpy(Alt_Professor, "");
                                                        printf("NOME DO PROFESSOR ALTERADO COM SUCESSO\n");
                                                        break;
                                                    }
                                                    case 4:
                                                    {
                                                        printf("QUAL O NOME DO NOVO PROFESSOR ::\n");
                                                        scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", Alt_Professor);
                                                        if (strcmp(NomeProfSI4, NomeProfSI1) == 0) {
                                                            strcpy(NomeProfSI1, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfSI4, NomeProfSI2) == 0) {
                                                            strcpy(NomeProfSI2, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfSI4, NomeProfSI3) == 0) {
                                                            strcpy(NomeProfSI3, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfSI4, NomeProfSI5) == 0) {
                                                            strcpy(NomeProfSI5, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfSI4, NomeProfSI6) == 0) {
                                                            strcpy(NomeProfSI6, Alt_Professor);
                                                        }
                                                        strcpy(NomeProfSI4, Alt_Professor);
                                                        strcpy(Alt_Professor, "");
                                                        printf("NOME DO PROFESSOR ALTERADO COM SUCESSO\n");
                                                        break;
                                                    }
                                                    case 5:
                                                    {
                                                        printf("QUAL O NOME DO NOVO PROFESSOR ::\n");
                                                        scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", Alt_Professor);
                                                        if (strcmp(NomeProfSI5, NomeProfSI1) == 0) {
                                                            strcpy(NomeProfSI1, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfSI5, NomeProfSI2) == 0) {
                                                            strcpy(NomeProfSI2, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfSI5, NomeProfSI3) == 0) {
                                                            strcpy(NomeProfSI3, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfSI5, NomeProfSI4) == 0) {
                                                            strcpy(NomeProfSI4, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfSI5, NomeProfSI6) == 0) {
                                                            strcpy(NomeProfSI6, Alt_Professor);
                                                        }
                                                        strcpy(NomeProfSI5, Alt_Professor);
                                                        strcpy(Alt_Professor, "");
                                                        printf("NOME DO PROFESSOR ALTERADO COM SUCESSO\n");
                                                        break;
                                                    }
                                                    case 6:
                                                    {
                                                        printf("QUAL O NOME DO NOVO PROFESSOR ::\n");
                                                        scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", Alt_Professor);
                                                        if (strcmp(NomeProfSI6, NomeProfSI1) == 0) {
                                                            strcpy(NomeProfSI1, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfSI6, NomeProfSI2) == 0) {
                                                            strcpy(NomeProfSI2, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfSI6, NomeProfSI3) == 0) {
                                                            strcpy(NomeProfSI3, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfSI6, NomeProfSI4) == 0) {
                                                            strcpy(NomeProfSI4, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfSI6, NomeProfSI5) == 0) {
                                                            strcpy(NomeProfSI5, Alt_Professor);
                                                        }
                                                        strcpy(NomeProfSI6, Alt_Professor);
                                                        strcpy(Alt_Professor, "");
                                                        printf("NOME DO PROFESSOR ALTERADO COM SUCESSO\n");
                                                        break;
                                                    }
                                                }
                                                break;
                                            }

                                            case 2:
                                            {
                                                printf("QUAL PROFESSOR DESEJA ALTERAR ::");
                                                printf("%s [1]", NomeProfDI1);
                                                printf("%s [2]", NomeProfDI2);
                                                printf("%s [3]", NomeProfDI3);
                                                printf("%s [4]", NomeProfDI4);
                                                printf("%s [5]", NomeProfDI5);
                                                printf("%s [6]", NomeProfDI6);
                                                scanf("%d", &alt_prof);

                                                switch (alt_prof) {
                                                    case 1:
                                                    {
                                                        printf("QUAL O NOME DO NOVO PROFESSOR ::\n");
                                                        scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", Alt_Professor);
                                                        if (strcmp(NomeProfDI1, NomeProfDI2) == 0) {
                                                            strcpy(NomeProfDI2, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfDI1, NomeProfDI3) == 0) {
                                                            strcpy(NomeProfDI3, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfDI1, NomeProfDI4) == 0) {
                                                            strcpy(NomeProfDI4, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfDI1, NomeProfDI5) == 0) {
                                                            strcpy(NomeProfDI5, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfDI1, NomeProfDI6) == 0) {
                                                            strcpy(NomeProfDI6, Alt_Professor);
                                                        }
                                                        strcpy(NomeProfDI1, Alt_Professor);
                                                        strcpy(Alt_Professor, "");

                                                        printf("NOME DO PROFESSOR ALTERADO COM SUCESSO\n");

                                                        break;
                                                    }
                                                    case 2:
                                                    {
                                                        printf("QUAL O NOME DO NOVO PROFESSOR ::\n");
                                                        scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", Alt_Professor);
                                                        if (strcmp(NomeProfDI2, NomeProfDI1) == 0) {
                                                            strcpy(NomeProfDI1, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfDI2, NomeProfDI3) == 0) {
                                                            strcpy(NomeProfDI3, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfDI2, NomeProfDI4) == 0) {
                                                            strcpy(NomeProfDI4, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfDI2, NomeProfDI5) == 0) {
                                                            strcpy(NomeProfDI5, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfDI2, NomeProfDI6) == 0) {
                                                            strcpy(NomeProfDI6, Alt_Professor);
                                                        }
                                                        strcpy(NomeProfDI2, Alt_Professor);
                                                        strcpy(Alt_Professor, "");
                                                        printf("NOME DO PROFESSOR ALTERADO COM SUCESSO\n");
                                                        break;
                                                    }
                                                    case 3:
                                                    {
                                                        printf("QUAL O NOME DO NOVO PROFESSOR ::\n");
                                                        scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", Alt_Professor);
                                                        if (strcmp(NomeProfDI3, NomeProfDI1) == 0) {
                                                            strcpy(NomeProfDI1, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfDI3, NomeProfDI2) == 0) {
                                                            strcpy(NomeProfDI2, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfDI3, NomeProfDI4) == 0) {
                                                            strcpy(NomeProfDI4, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfDI3, NomeProfDI5) == 0) {
                                                            strcpy(NomeProfDI5, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfDI3, NomeProfDI6) == 0) {
                                                            strcpy(NomeProfDI6, Alt_Professor);
                                                        }
                                                        strcpy(NomeProfDI3, Alt_Professor);
                                                        strcpy(Alt_Professor, "");
                                                        printf("NOME DO PROFESSOR ALTERADO COM SUCESSO\n");
                                                        break;
                                                    }
                                                    case 4:
                                                    {
                                                        printf("QUAL O NOME DO NOVO PROFESSOR ::\n");
                                                        scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", Alt_Professor);
                                                        if (strcmp(NomeProfDI4, NomeProfDI1) == 0) {
                                                            strcpy(NomeProfDI1, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfDI4, NomeProfDI2) == 0) {
                                                            strcpy(NomeProfDI2, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfDI4, NomeProfDI3) == 0) {
                                                            strcpy(NomeProfDI3, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfDI4, NomeProfDI5) == 0) {
                                                            strcpy(NomeProfDI5, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfDI4, NomeProfDI6) == 0) {
                                                            strcpy(NomeProfDI6, Alt_Professor);
                                                        }
                                                        strcpy(NomeProfDI4, Alt_Professor);
                                                        strcpy(Alt_Professor, "");
                                                        printf("NOME DO PROFESSOR ALTERADO COM SUCESSO\n");
                                                        break;
                                                    }
                                                    case 5:
                                                    {
                                                        printf("QUAL O NOME DO NOVO PROFESSOR ::\n");
                                                        scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", Alt_Professor);
                                                        if (strcmp(NomeProfDI5, NomeProfDI1) == 0) {
                                                            strcpy(NomeProfDI1, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfDI5, NomeProfDI2) == 0) {
                                                            strcpy(NomeProfDI2, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfDI5, NomeProfDI3) == 0) {
                                                            strcpy(NomeProfDI3, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfDI5, NomeProfDI4) == 0) {
                                                            strcpy(NomeProfDI4, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfDI5, NomeProfDI6) == 0) {
                                                            strcpy(NomeProfDI6, Alt_Professor);
                                                        }
                                                        strcpy(NomeProfDI5, Alt_Professor);
                                                        strcpy(Alt_Professor, "");
                                                        printf("NOME DO PROFESSOR ALTERADO COM SUCESSO\n");
                                                        break;
                                                    }
                                                    case 6:
                                                    {
                                                        printf("QUAL O NOME DO NOVO PROFESSOR ::\n");
                                                        scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", Alt_Professor);
                                                        if (strcmp(NomeProfDI6, NomeProfDI1) == 0) {
                                                            strcpy(NomeProfDI1, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfDI6, NomeProfDI2) == 0) {
                                                            strcpy(NomeProfDI2, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfDI6, NomeProfDI3) == 0) {
                                                            strcpy(NomeProfDI3, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfDI6, NomeProfDI4) == 0) {
                                                            strcpy(NomeProfDI4, Alt_Professor);
                                                        }
                                                        if (strcmp(NomeProfDI6, NomeProfDI5) == 0) {
                                                            strcpy(NomeProfDI5, Alt_Professor);
                                                        }
                                                        strcpy(NomeProfDI6, Alt_Professor);
                                                        strcpy(Alt_Professor, "");
                                                        printf("NOME DO PROFESSOR ALTERADO COM SUCESSO\n");
                                                        break;
                                                    }
                                                }
                                                break;
                                            }
                                                break;
                                        }
                                    }

                                        break;
                                }
                                case 3:
                                {
                                    printf("DE QUAL CURSO DESEJA ALTERAR O ALUNO ::\n");
                                    if (curso1 == 1 && curso2 == 1) {
                                        printf("%s  [1]\n", nomecurso1);
                                        printf("%s  [2]\n", nomecurso2);

                                        printf("PARA VOTLAR AO MENU DIGITE [9]\n");
                                        printf("PARA DETALHE SOBRE O PROFESSOR DIGITE SEU RESPECTIVO NUMERO ::\n");
                                        scanf("%d", &alt_aluno_curso);

                                        while (alt_aluno_curso != 1 && alt_aluno_curso != 2 && alt_aluno_curso != 9) {
                                            printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                            scanf("%d", &alt_aluno_curso);
                                        }
                                    } else {
                                        if (curso1 == 1 && curso2 == 0) {
                                            printf("1º SEMESTRE - %s  [1]\n", nomecurso1);

                                            printf("PARA VOTLAR AO MENU DIGITE [9]\n");
                                            printf("PARA DETALHE SOBRE O PROFESSOR DIGITE SEU RESPECTIVO NUMERO ::\n");
                                            scanf("%d", &alt_aluno_curso);

                                            while (alt_aluno_curso != 1 && alt_aluno_curso != 9) {
                                                printf("ESCOLHA SOMENTE A OPCAO CITADA ::\n");
                                                scanf("%d", &alt_aluno_curso);
                                            }
                                        } else {
                                            if (curso1 == 0 && curso2 == 1) {
                                                printf("1º SEMESTRE - %s  [1]\n", nomecurso2);

                                                printf("PARA VOTLAR AO MENU DIGITE [9]\n");
                                                printf("PARA DETALHE SOBRE O PROFESSOR DIGITE SEU RESPECTIVO NUMERO ::\n");
                                                scanf("%d", &alt_aluno_curso);
                                                while (alt_aluno_curso != 1 && alt_aluno_curso != 9) {
                                                    printf("ESCOLHA SOMENTE A OPCAO CITADA ::\n");
                                                    scanf("%d", &alt_aluno_curso);
                                                }
                                                if (alt_aluno_curso == 1) {
                                                    alt_aluno_curso = 2;
                                                }
                                            }
                                        }
                                    }
                                    while (alt_aluno_curso != 1 && alt_aluno_curso != 2) {
                                        printf("ESCOLHA SOMENTE UM DOS CURSOS MOSTRADOS ANTERIORMENTE ::\n");
                                        scanf("%d", &alt_aluno_curso);
                                    }

                                    switch (alt_aluno_curso) {
                                        case 1:
                                        {
                                            printf("DE QUAL SEMESTRE DESEJA ALTERAR O ALUNO ::\n");
                                            printf("1º SEMESTRE DO CURSO DE %s [1]", nomecurso1);
                                            printf("2º SEMESTRE DO CURSO DE %s [2]", nomecurso1);
                                            printf("3º SEMESTRE DO CURSO DE %s [3]", nomecurso1);
                                            scanf("%d", &alt_disci_aluno);

                                            while (alt_disci_aluno != 1 && alt_disci_aluno != 2 && alt_disci_aluno != 3) {
                                                printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                                scanf("%d", &alt_disci_aluno);
                                            }

                                            switch (alt_disci_aluno) {
                                                case 1:
                                                {
                                                    printf("QUAL ALUNO DESEJA ALTERAR ::\n");
                                                    printf("%s [1]", nomealuno1c1m1);
                                                    printf("%s [2]", nomealuno2c1m1);
                                                    printf("%s [3]", nomealuno3c1m1);
                                                    printf("%s [4]", nomealuno4c1m1);
                                                    printf("%s [5]", nomealuno5c1m1);
                                                    scanf("%d", &alt_al);

                                                    switch (alt_al) {
                                                        case 1:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno1c1m1, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 2:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno2c1m1, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 3:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno3c1m1, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 4:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno4c1m1, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 5:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno5c1m1, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                    }
                                                    alt_al = 0;
                                                    break;
                                                }
                                                case 2:
                                                {
                                                    printf("QUAL ALUNO DESEJA ALTERAR ::\n");
                                                    printf("%s [1]", nomealuno1c1m2);
                                                    printf("%s [2]", nomealuno2c1m2);
                                                    printf("%s [3]", nomealuno3c1m2);
                                                    printf("%s [4]", nomealuno4c1m2);
                                                    printf("%s [5]", nomealuno5c1m2);
                                                    scanf("%d", &alt_al);

                                                    switch (alt_al) {
                                                        case 1:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno1c1m2, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 2:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno2c1m2, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 3:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno3c1m2, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 4:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno4c1m2, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 5:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno5c1m2, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                    }
                                                    alt_al = 0;
                                                    break;
                                                }
                                                case 3:
                                                {
                                                    printf("QUAL ALUNO DESEJA ALTERAR ::\n");
                                                    printf("%s [1]", nomealuno1c1m3);
                                                    printf("%s [2]", nomealuno2c1m3);
                                                    printf("%s [3]", nomealuno3c1m3);
                                                    printf("%s [4]", nomealuno4c1m3);
                                                    printf("%s [5]", nomealuno5c1m3);
                                                    scanf("%d", &alt_al);

                                                    switch (alt_al) {
                                                        case 1:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno1c1m3, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 2:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno2c1m3, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 3:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno3c1m3, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 4:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno4c1m3, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 5:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno5c1m3, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                    }
                                                    alt_al = 0;
                                                    break;
                                                }
                                                case 4:
                                                {
                                                    printf("QUAL ALUNO DESEJA ALTERAR ::\n");
                                                    printf("%s [1]", nomealuno1c1m4);
                                                    printf("%s [2]", nomealuno2c1m4);
                                                    printf("%s [3]", nomealuno3c1m4);
                                                    printf("%s [4]", nomealuno4c1m4);
                                                    printf("%s [5]", nomealuno5c1m4);
                                                    scanf("%d", &alt_al);

                                                    switch (alt_al) {
                                                        case 1:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno1c1m4, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 2:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno2c1m4, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 3:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno3c1m4, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 4:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno4c1m4, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 5:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno5c1m4, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                    }
                                                    alt_al = 0;
                                                    break;
                                                }
                                                case 5:
                                                {
                                                    printf("QUAL ALUNO DESEJA ALTERAR ::\n");
                                                    printf("%s [1]", nomealuno1c1m5);
                                                    printf("%s [2]", nomealuno2c1m5);
                                                    printf("%s [3]", nomealuno3c1m5);
                                                    printf("%s [4]", nomealuno4c1m5);
                                                    printf("%s [5]", nomealuno5c1m5);
                                                    scanf("%d", &alt_al);

                                                    switch (alt_al) {
                                                        case 1:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno1c1m5, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 2:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno2c1m5, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 3:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno3c1m5, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 4:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno4c1m5, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 5:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno5c1m5, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                    }
                                                    alt_al = 0;
                                                    break;
                                                }
                                                case 6:
                                                {
                                                    printf("QUAL ALUNO DESEJA ALTERAR ::\n");
                                                    printf("%s [1]", nomealuno1c1m6);
                                                    printf("%s [2]", nomealuno2c1m6);
                                                    printf("%s [3]", nomealuno3c1m6);
                                                    printf("%s [4]", nomealuno4c1m6);
                                                    printf("%s [5]", nomealuno5c1m6);
                                                    scanf("%d", &alt_al);

                                                    switch (alt_al) {
                                                        case 1:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno1c1m6, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 2:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno2c1m6, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 3:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno3c1m6, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 4:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno4c1m6, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 5:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno5c1m6, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                    }
                                                    alt_al = 0;
                                                    break;
                                                }
                                            }
                                            break;
                                        }
                                        case 2:
                                        {
                                            printf("DE QUAL DISIPLINA DESEJA ALTERAR O ALUNO ::\n");
                                            printf("%s [1]", curso1semestre1m1);
                                            printf("%s [2]", curso1semestre1m2);
                                            printf("%s [3]", curso1semestre2m1);
                                            printf("%s [4]", curso1semestre2m2);
                                            printf("%s [5]", curso1semestre3m1);
                                            printf("%s [6]", curso1semestre3m2);
                                            scanf("%d", &alt_disci_aluno);

                                            while (alt_disci_aluno != 1 && alt_disci_aluno != 2 && alt_disci_aluno != 3 && alt_disci_aluno != 4 && alt_disci_aluno != 5 && alt_disci_aluno != 6) {
                                                printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                                scanf("%i", alt_disci_aluno);
                                            }

                                            switch (alt_disci_aluno) {
                                                case 1:
                                                {
                                                    printf("QUAL ALUNO DESEJA ALTERAR ::\n");
                                                    printf("%s [1]", nomealuno1c2m1);
                                                    printf("%s [2]", nomealuno2c2m1);
                                                    printf("%s [3]", nomealuno3c2m1);
                                                    printf("%s [4]", nomealuno4c2m1);
                                                    printf("%s [5]", nomealuno5c2m1);
                                                    scanf("%d", &alt_al);

                                                    switch (alt_al) {
                                                        case 1:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno1c2m1, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 2:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno2c2m1, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 3:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno3c2m1, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 4:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno4c2m1, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 5:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno5c2m1, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                    }
                                                    alt_al = 0;
                                                    break;
                                                }
                                                case 2:
                                                {
                                                    printf("QUAL ALUNO DESEJA ALTERAR ::\n");
                                                    printf("%s [1]", nomealuno1c2m2);
                                                    printf("%s [2]", nomealuno2c2m2);
                                                    printf("%s [3]", nomealuno3c2m2);
                                                    printf("%s [4]", nomealuno4c2m2);
                                                    printf("%s [5]", nomealuno5c2m2);
                                                    scanf("%d", &alt_al);

                                                    switch (alt_al) {
                                                        case 1:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno1c2m2, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 2:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno2c2m2, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 3:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno3c2m2, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 4:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno4c2m2, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 5:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno5c2m2, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                    }
                                                    alt_al = 0;
                                                    break;
                                                }
                                                case 3:
                                                {
                                                    printf("QUAL ALUNO DESEJA ALTERAR ::\n");
                                                    printf("%s [1]", nomealuno1c2m3);
                                                    printf("%s [2]", nomealuno2c2m3);
                                                    printf("%s [3]", nomealuno3c2m3);
                                                    printf("%s [4]", nomealuno4c2m3);
                                                    printf("%s [5]", nomealuno5c2m3);
                                                    scanf("%d", &alt_al);

                                                    switch (alt_al) {
                                                        case 1:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno1c2m3, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 2:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno2c2m3, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 3:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno3c2m3, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 4:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno4c2m3, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 5:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno5c2m3, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                    }
                                                    alt_al = 0;
                                                    break;
                                                }
                                                case 4:
                                                {
                                                    printf("QUAL ALUNO DESEJA ALTERAR ::\n");
                                                    printf("%s [1]", nomealuno1c2m4);
                                                    printf("%s [2]", nomealuno2c2m4);
                                                    printf("%s [3]", nomealuno3c2m4);
                                                    printf("%s [4]", nomealuno4c2m4);
                                                    printf("%s [5]", nomealuno5c2m4);
                                                    scanf("%d", &alt_al);

                                                    switch (alt_al) {
                                                        case 1:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno1c2m4, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 2:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno2c2m4, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 3:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno3c2m4, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 4:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno4c2m4, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 5:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno5c2m4, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                    }
                                                    alt_al = 0;
                                                    break;
                                                }
                                                case 5:
                                                {
                                                    printf("QUAL ALUNO DESEJA ALTERAR ::\n");
                                                    printf("%s [1]", nomealuno1c2m5);
                                                    printf("%s [2]", nomealuno2c2m5);
                                                    printf("%s [3]", nomealuno3c2m5);
                                                    printf("%s [4]", nomealuno4c2m5);
                                                    printf("%s [5]", nomealuno5c2m5);
                                                    scanf("%d", &alt_al);

                                                    switch (alt_al) {
                                                        case 1:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno1c2m5, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 2:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno2c2m5, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 3:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno3c2m5, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 4:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno4c2m5, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 5:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno5c2m5, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                    }
                                                    alt_al = 0;
                                                    break;
                                                }
                                                case 6:
                                                {
                                                    printf("QUAL ALUNO DESEJA ALTERAR ::\n");
                                                    printf("%s [1]", nomealuno1c2m6);
                                                    printf("%s [2]", nomealuno2c2m6);
                                                    printf("%s [3]", nomealuno3c2m6);
                                                    printf("%s [4]", nomealuno4c2m6);
                                                    printf("%s [5]", nomealuno5c2m6);
                                                    scanf("%d", &alt_al);

                                                    switch (alt_al) {
                                                        case 1:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno1c2m6, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 2:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno2c2m6, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 3:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno3c2m6, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 4:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno4c2m6, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                        case 5:
                                                        {
                                                            printf("QUAL O NOME DO NOVO ALUNO ::\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ó Ó ô Ô õ Õ ú Ú]s", alt_aluno);
                                                            strcpy(nomealuno5c2m6, alt_aluno);
                                                            strcpy(alt_aluno, "");
                                                            printf("NOME DO ALUNO ALTERADO COM SUCESSO\n");
                                                            break;
                                                        }
                                                    }
                                                    alt_al = 0;
                                                    break;
                                                }
                                            }
                                            break;
                                        }
                                    }

                                    break;
                                }
                                break;

                            }
                            case 2:
                            {
                                printf("========================================================================\n");
                                printf("O QUE DESEJA EXCLUIR ::\n");
                                printf("========================================================================\n\n");
                                printf("CURSO      [1]\n");
                                printf("PROFESSOR  [2]\n");
                                printf("ALUNO      [1]\n");
                                scanf("%d", oq_exluir);

                                while (oq_exluir != 1 && oq_exluir != 2 && oq_exluir != 3) {
                                    printf("\nDIGITE SOMENTE UMA DAS OPÇOES CITADAS!\n");
                                    scanf("%d", &oq_exluir);
                                }

                                switch (oq_exluir) {
                                    case 1:
                                    {
                                        printf("QUAL CURSO DESEJA EXCLUIR ::\n");
                                        if (curso1 == 1 && curso2 == 1) {
                                            printf("%s [1]\n", nomecurso1);
                                            printf("%s [2]\n", nomecurso2);
                                            scanf("%d", &exc_curso);

                                            while (exc_curso != 1 && exc_curso != 2) {
                                                printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                                scanf("%d", &exc_curso);
                                            }

                                            if (exc_curso == 1) {
                                                curso1 = 0;
                                            } else {
                                                if (exc_curso == 2) {
                                                    curso2 = 0;
                                                }
                                            }
                                        } else {
                                            if (curso1 == 0 && curso2 == 1) {
                                                printf("%s [1]\n", nomecurso2);
                                                scanf("%d", &exc_curso);

                                                while (exc_curso != 1) {
                                                    printf("ESCOLHA SOMENTE A OPCAO CITADAS ::\n");
                                                    scanf("%d", &exc_curso);
                                                }
                                                exc_curso = 2;
                                                if (exc_curso == 2) {
                                                    curso2 = 0;
                                                }
                                            } else {
                                                if (curso1 == 1 && curso2 == 0) {
                                                    printf("%s [1]\n", nomecurso1);
                                                    scanf("%d", &exc_curso);

                                                    while (exc_curso != 1) {
                                                        printf("ESCOLHA SOMENTE A OPCAO CITADAS ::\n");
                                                        scanf("%d", &exc_curso);
                                                    }
                                                    if (exc_curso == 1) {
                                                        curso1 = 0;
                                                    }
                                                }
                                            }
                                        }


                                        case 2:
                                        {
                                            printf("DE QUAL CURSO DESEJA EXCLUIR PROFESSOR ::\n");
                                            if (curso1 == 1 && curso2 == 1) {
                                                printf("%s [1]\n", nomecurso1);
                                                printf("%s [2]\n", nomecurso2);
                                                scanf("%d", &curso_exc_prof);

                                                while (curso_exc_prof != 1 && curso_exc_prof != 2) {
                                                    printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                                    scanf("%d", &curso_exc_prof);
                                                }
                                            } else {
                                                if (curso1 == 0 && curso2 == 1) {
                                                    printf("%s [1]\n", nomecurso2);
                                                    scanf("%d", &curso_exc_prof);

                                                    while (esc_curso_aluno != 1) {
                                                        printf("ESCOLHA SOMENTE A OPCAO CITADAS ::\n");
                                                        scanf("%d", &curso_exc_prof);
                                                    }
                                                    curso_exc_prof = 2;

                                                } else {
                                                    if (curso1 == 1 && curso2 == 0) {
                                                        printf("%s [1]\n", nomecurso1);
                                                        scanf("%d", &curso_exc_prof);

                                                        while (curso_exc_prof != 1) {
                                                            printf("ESCOLHA SOMENTE A OPCAO CITADAS ::\n");
                                                            scanf("%d", &curso_exc_prof);
                                                        }
                                                    }
                                                }
                                            }
                                            switch (curso_exc_prof) {
                                                case 1:
                                                {
                                                    printf("DE QUAL SEMESTRE E O PROFESSOR :: \n");
                                                    printf("1º SEMESTRE DO CURSO DE  %s   [1]\n", curso1);
                                                    printf("2º SEMESTRE DO CURSO DE  %s   [2]\n", curso1);
                                                    printf("3º SEMESTRE DO CURSO DE  %s   [3]\n", curso1);
                                                    scanf("%d", &dic_exc_prof);

                                                    while (dic_exc_prof != 1 && dic_exc_prof != 2 && dic_exc_prof != 3 && dic_exc_prof != 4 && dic_exc_prof != 5 && dic_exc_prof != 6) {
                                                        printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                                        scanf("%d", &dic_exc_prof);
                                                    }

                                                    switch (dic_exc_prof) {
                                                        case 1:
                                                        {
                                                            printf("QUAL PROFESSOR DESEJA EXCLUIR ::\n");
                                                            if (ProfessorSI1 == 1 && ProfessorSI2 == 1) {
                                                                printf("%s [1]\n", ProfessorSI1);
                                                                printf("%s [2]\n", ProfessorSI2);
                                                                scanf("%d", &exc_prof);

                                                                while (exc_prof != 1 && exc_prof != 2) {
                                                                    printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                                                    scanf("%d", &exc_prof);
                                                                }
                                                            } else {
                                                                if (ProfessorSI1 == 0 && ProfessorSI2 == 1) {
                                                                    printf("%s [1]\n", ProfessorSI2);
                                                                    scanf("%d", &exc_prof);

                                                                    while (exc_prof != 1) {
                                                                        printf("ESCOLHA SOMENTE A OPCAO CITADAS ::\n");
                                                                        scanf("%d", &exc_prof);
                                                                    }
                                                                    exc_prof = 2;

                                                                } else {
                                                                    if (ProfessorSI1 == 1 && ProfessorSI2 == 0) {
                                                                        printf("%s [1]\n", ProfessorSI1);
                                                                        scanf("%d", &exc_prof);

                                                                        while (exc_prof != 1) {
                                                                            printf("ESCOLHA SOMENTE A OPCAO CITADAS ::\n");
                                                                            scanf("%d", &exc_prof);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            if (exc_prof == 1) {
                                                                ProfessorSI1 = 0;
                                                            }
                                                            if (exc_prof == 2) {
                                                                ProfessorSI2 = 0;
                                                            }
                                                            break;
                                                        }
                                                        case 2:
                                                        {
                                                            printf("QUAL PROFESSOR DESEJA EXCLUIR ::\n");
                                                            if (ProfessorSI3 == 1 && ProfessorSI4 == 1) {
                                                                printf("%s [1]\n", ProfessorSI3);
                                                                printf("%s [2]\n", ProfessorSI4);
                                                                scanf("%d", &exc_prof);

                                                                while (exc_prof != 1 && exc_prof != 2) {
                                                                    printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                                                    scanf("%d", &exc_prof);
                                                                }
                                                            } else {
                                                                if (ProfessorSI3 == 0 && ProfessorSI4 == 1) {
                                                                    printf("%s [1]\n", ProfessorSI4);
                                                                    scanf("%d", &exc_prof);

                                                                    while (exc_prof != 1) {
                                                                        printf("ESCOLHA SOMENTE A OPCAO CITADAS ::\n");
                                                                        scanf("%d", &exc_prof);
                                                                    }
                                                                    curso_exc_prof = 2;

                                                                } else {
                                                                    if (ProfessorSI3 == 1 && ProfessorSI4 == 0) {
                                                                        printf("%s [1]\n", ProfessorSI4);
                                                                        scanf("%d", &exc_prof);

                                                                        while (exc_prof != 1) {
                                                                            printf("ESCOLHA SOMENTE A OPCAO CITADAS ::\n");
                                                                            scanf("%d", &exc_prof);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            if (exc_prof == 1) {
                                                                ProfessorSI3 = 0;
                                                            }
                                                            if (exc_prof == 2) {
                                                                ProfessorSI4 = 0;
                                                            }
                                                            break;
                                                        }
                                                        case 3:
                                                        {
                                                            printf("QUAL PROFESSOR DESEJA EXCLUIR ::\n");
                                                            if (ProfessorSI5 == 1 && ProfessorSI6 == 1) {
                                                                printf("%s [1]\n", ProfessorSI5);
                                                                printf("%s [2]\n", ProfessorSI6);
                                                                scanf("%d", &exc_prof);

                                                                while (exc_prof != 1 && exc_prof != 2) {
                                                                    printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                                                    scanf("%d", &exc_prof);
                                                                }
                                                            } else {
                                                                if (ProfessorSI5 == 0 && ProfessorSI6 == 1) {
                                                                    printf("%s [1]\n", ProfessorSI6);
                                                                    scanf("%d", &exc_prof);

                                                                    while (exc_prof != 1) {
                                                                        printf("ESCOLHA SOMENTE A OPCAO CITADAS ::\n");
                                                                        scanf("%d", &exc_prof);
                                                                    }
                                                                    curso_exc_prof = 2;

                                                                } else {
                                                                    if (ProfessorSI5 == 1 && ProfessorSI6 == 0) {
                                                                        printf("%s [1]\n", ProfessorSI1);
                                                                        scanf("%d", &exc_prof);

                                                                        while (exc_prof != 1) {
                                                                            printf("ESCOLHA SOMENTE A OPCAO CITADAS ::\n");
                                                                            scanf("%d", &exc_prof);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            if (exc_prof == 1) {
                                                                ProfessorSI5 = 0;
                                                            }
                                                            if (exc_prof == 2) {
                                                                ProfessorSI6 = 0;
                                                            }
                                                            break;
                                                        }
                                                    }
                                                    ProfessorCadastradoSI--;
                                                    break;
                                                }
                                                case 2:
                                                {
                                                    printf("DE QUAL SEMESTRE E O PROFESSOR :: \n");
                                                    printf("1º SEMESTRE DO CURSO DE  %s   [1]\n", curso2);
                                                    printf("2º SEMESTRE DO CURSO DE  %s   [2]\n", curso2);
                                                    printf("3º SEMESTRE DO CURSO DE  %s   [3]\n", curso2);
                                                    scanf("%d", &dic_exc_prof);

                                                    while (dic_exc_prof != 1 && dic_exc_prof != 2 && dic_exc_prof != 3 && dic_exc_prof != 4 && dic_exc_prof != 5 && dic_exc_prof != 6) {
                                                        printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                                        scanf("%d", &dic_exc_prof);
                                                    }

                                                    switch (dic_exc_prof) {
                                                        case 1:
                                                        {
                                                            printf("QUAL PROFESSOR DESEJA EXCLUIR ::\n");
                                                            if (ProfessorDI1 == 1 && ProfessorDI2 == 1) {
                                                                printf("%s [1]\n", ProfessorDI1);
                                                                printf("%s [2]\n", ProfessorDI2);
                                                                scanf("%d", &exc_prof);

                                                                while (exc_prof != 1 && exc_prof != 2) {
                                                                    printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                                                    scanf("%d", &exc_prof);
                                                                }
                                                            } else {
                                                                if (ProfessorDI1 == 0 && ProfessorDI2 == 1) {
                                                                    printf("%s [1]\n", ProfessorDI2);
                                                                    scanf("%d", &exc_prof);

                                                                    while (exc_prof != 1) {
                                                                        printf("ESCOLHA SOMENTE A OPCAO CITADAS ::\n");
                                                                        scanf("%d", &exc_prof);
                                                                    }
                                                                    exc_prof = 2;

                                                                } else {
                                                                    if (ProfessorDI1 == 1 && ProfessorDI2 == 0) {
                                                                        printf("%s [1]\n", ProfessorDI1);
                                                                        scanf("%d", &exc_prof);

                                                                        while (exc_prof != 1) {
                                                                            printf("ESCOLHA SOMENTE A OPCAO CITADAS ::\n");
                                                                            scanf("%d", &exc_prof);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            if (exc_prof == 1) {
                                                                ProfessorDI1 = 0;
                                                            }
                                                            if (exc_prof == 2) {
                                                                ProfessorDI2 = 0;
                                                            }
                                                            break;
                                                        }
                                                        case 2:
                                                        {
                                                            printf("QUAL PROFESSOR DESEJA EXCLUIR ::\n");
                                                            if (ProfessorDI3 == 1 && ProfessorDI4 == 1) {
                                                                printf("%s [1]\n", ProfessorDI3);
                                                                printf("%s [2]\n", ProfessorDI4);
                                                                scanf("%d", &exc_prof);

                                                                while (exc_prof != 1 && exc_prof != 2) {
                                                                    printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                                                    scanf("%d", &exc_prof);
                                                                }
                                                            } else {
                                                                if (ProfessorDI3 == 0 && ProfessorDI4 == 1) {
                                                                    printf("%s [1]\n", ProfessorDI4);
                                                                    scanf("%d", &exc_prof);

                                                                    while (exc_prof != 1) {
                                                                        printf("ESCOLHA SOMENTE A OPCAO CITADAS ::\n");
                                                                        scanf("%d", &exc_prof);
                                                                    }
                                                                    curso_exc_prof = 2;

                                                                } else {
                                                                    if (ProfessorDI3 == 1 && ProfessorDI4 == 0) {
                                                                        printf("%s [1]\n", ProfessorDI4);
                                                                        scanf("%d", &exc_prof);

                                                                        while (exc_prof != 1) {
                                                                            printf("ESCOLHA SOMENTE A OPCAO CITADAS ::\n");
                                                                            scanf("%d", &exc_prof);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            if (exc_prof == 1) {
                                                                ProfessorDI3 = 0;
                                                            }
                                                            if (exc_prof == 2) {
                                                                ProfessorDI4 = 0;
                                                            }
                                                            break;
                                                        }
                                                        case 3:
                                                        {
                                                            printf("QUAL PROFESSOR DESEJA EXCLUIR ::\n");
                                                            if (ProfessorDI5 == 1 && ProfessorDI6 == 1) {
                                                                printf("%s [1]\n", ProfessorDI5);
                                                                printf("%s [2]\n", ProfessorDI6);
                                                                scanf("%d", &exc_prof);

                                                                while (exc_prof != 1 && exc_prof != 2) {
                                                                    printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                                                    scanf("%d", &exc_prof);
                                                                }
                                                            } else {
                                                                if (ProfessorDI5 == 0 && ProfessorDI6 == 1) {
                                                                    printf("%s [1]\n", ProfessorDI6);
                                                                    scanf("%d", &exc_prof);

                                                                    while (exc_prof != 1) {
                                                                        printf("ESCOLHA SOMENTE A OPCAO CITADAS ::\n");
                                                                        scanf("%d", &exc_prof);
                                                                    }
                                                                    curso_exc_prof = 2;

                                                                } else {
                                                                    if (ProfessorDI5 == 1 && ProfessorDI6 == 0) {
                                                                        printf("%s [1]\n", ProfessorSI1);
                                                                        scanf("%d", &exc_prof);

                                                                        while (exc_prof != 1) {
                                                                            printf("ESCOLHA SOMENTE A OPCAO CITADAS ::\n");
                                                                            scanf("%d", &exc_prof);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            if (exc_prof == 1) {
                                                                ProfessorDI5 = 0;
                                                            }
                                                            if (exc_prof == 2) {
                                                                ProfessorDI6 = 0;
                                                            }
                                                            break;
                                                        }
                                                    }
                                                    ProfessorCadastradoDI--;
                                                    break;
                                                }
                                            }//curso_exc_prof

                                            break;
                                        }
                                        case 3:
                                        {

                                            break;
                                        }
                                    }

                                }//excluir cadastro
                                break;
                            }
                        }
                        break;
                    }
                }
                break;
            }

            case 2:
            {
                printf("========================================================================\n");
                printf("O QUE DESEJA CONSULTAR ::\n");
                printf("========================================================================\n\n");
                printf("CURSOS       [1]\n");
                printf("PROFESSORES  [2]\n");
                printf("ALUNOS       [3]\n");
                printf("\n========================================================================\n");
                scanf("%d", &consultas);

                while (consultas != 1 && consultas != 2 && consultas != 3) {
                    printf("\nDIGITE SOMENTE UMA DAS OPÇOES CITADAS!\n");
                    scanf("%d", &consultas);
                }
                printf("\n\n");

                switch (consultas) {
                    case 1:
                    {
                        if (curso1 == 0 && curso2 == 0) {
                            printf("NENHUM CURSO CADASTRADO!\n");
                            printf("\n\n");
                        } else {
                            printf("CURSOS ::\n\n");
                            if (curso1 == 1) {
                                printf("%s\n\n", nomecurso1);
                                printf("1º SEMESTRE - %s\n", curso1semestre1m1);
                                printf("1º SEMESTRE - %s\n", curso1semestre1m2);
                                printf("2º SEMESTRE - %s\n", curso1semestre2m1);
                                printf("2º SEMESTRE - %s\n", curso1semestre2m2);
                                printf("3º SEMESTRE - %s\n", curso1semestre3m1);
                                printf("3º SEMESTRE - %s\n", curso1semestre3m2);
                                printf("\n\n");
                            }
                            if (curso2 == 1) {
                                printf("%s\n\n", nomecurso2);
                                printf("1º SEMESTRE - %s\n", curso2semestre1m1);
                                printf("1º SEMESTRE - %s\n", curso2semestre1m2);
                                printf("2º SEMESTRE - %s\n", curso2semestre2m1);
                                printf("2º SEMESTRE - %s\n", curso2semestre2m2);
                                printf("3º SEMESTRE - %s\n", curso2semestre3m1);
                                printf("3º SEMESTRE - %s\n", curso2semestre3m2);
                                printf("\n\n");
                            }
                        }
                        break;
                    }
                    case 2:
                    {
                        printf("\n\n");
                        printf("========================================================================\n");
                        printf("EM QUAL CURSO DESEJA CONSULTAR O PROFESSOR ::\n");
                        printf("========================================================================\n\n");
                        if (curso1 == 1 && curso2 == 1) {
                            printf("%s [1]\n", nomecurso1);
                            printf("%s [2]\n", nomecurso2);
                            printf("\n========================================================================\n");
                            scanf("%d", &consultas_professor_curso);
                            while (consultas_professor_curso != 1 && consultas_professor_curso != 2) {

                                printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                scanf("%d", &consultas_professor_curso);
                            }
                        } else {
                            if (curso1 == 0 && curso2 == 1) {
                                printf("%s [1]\n", nomecurso2);
                                printf("\n========================================================================\n");
                                scanf("%d", &consultas_professor_curso);
                                while (consultas_professor_curso != 1) {
                                    printf("ESCOLHA SOMENTE A OPCAO CITADAS ::\n");
                                    scanf("%d", &consultas_professor_curso);
                                }
                                consultas_professor_curso = 2;

                            } else {
                                if (curso1 == 1 && curso2 == 0) {
                                    printf("%s [1]\n", nomecurso1);
                                    printf("\n========================================================================\n");
                                    scanf("%d", &consultas_professor_curso);
                                    while (consultas_professor_curso != 1) {
                                        printf("ESCOLHA SOMENTE A OPCAO CITADAS ::\n");
                                        scanf("%d", &consultas_professor_curso);
                                    }

                                }
                            }
                        }
                        switch (consultas_professor_curso) {
                            case 1:
                            {
                                printf("========================================================================\n");
                                printf("DE QUAL SEMESTRE DESEJA CONSULTAR O PROFESSORES ::\n");
                                printf("========================================================================\n\n");
                                printf("1º SEMESTRE  [1]\n");
                                printf("2º SEMESTRE  [2]\n");
                                printf("3º SEMESTRE  [3]\n");
                                printf("\n========================================================================\n\n");
                                scanf("%d", &consultas_professor_disciplina);

                                while (consultas_professor_disciplina != 1 && consultas_professor_disciplina != 2 && consultas_professor_disciplina != 3 && consultas_professor_disciplina != 4 && consultas_professor_disciplina != 5 && consultas_professor_disciplina != 6) {
                                    printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                    scanf("%d", &consultas_professor_disciplina);
                                }

                                switch (consultas_professor_disciplina) {
                                    case 1:
                                    {
                                        if (ProfessorSI1 == 1 && ProfessorSI2 == 1) {
                                            printf("1º SEMESTRE - %s  [1]\n", NomeProfSI1);
                                            printf("1º SEMESTRE - %s  [2]\n", NomeProfSI2);

                                            printf("PARA VOTLAR AO MENU DIGITE [9]");
                                            printf("PARA DETALHE SOBRE O PROFESSOR DIGITE SEU RESPECTIVO NUMERO ::\n");
                                            scanf("%d", &detalhe_prof);

                                            while (detalhe_prof != 1 && detalhe_prof != 2 && detalhe_prof != 9) {
                                                printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                                scanf("%d", &detalhe_prof);
                                            }
                                        } else {
                                            if (ProfessorSI1 == 1 && ProfessorSI2 == 0) {
                                                printf("1º SEMESTRE - %s  [1]\n", NomeProfSI1);

                                                printf("PARA VOTLAR AO MENU DIGITE [9]\n");
                                                printf("PARA DETALHE SOBRE O PROFESSOR DIGITE SEU RESPECTIVO NUMERO ::\n");
                                                scanf("%d", &detalhe_prof);

                                                while (detalhe_prof != 1 && detalhe_prof != 9) {
                                                    printf("ESCOLHA SOMENTE A OPCAO CITADA ::\n");
                                                    scanf("%d", &detalhe_prof);
                                                }
                                            } else {
                                                if (ProfessorSI1 == 0 && ProfessorSI2 == 1) {
                                                    printf("1º SEMESTRE - %s  [1]\n", NomeProfSI2);

                                                    printf("PARA VOTLAR AO MENU DIGITE [9]\n");
                                                    printf("PARA DETALHE SOBRE O PROFESSOR DIGITE SEU RESPECTIVO NUMERO ::\n");
                                                    scanf("%d", &detalhe_prof);
                                                    while (detalhe_prof != 1 && detalhe_prof != 9) {
                                                        printf("ESCOLHA SOMENTE A OPCAO CITADA ::\n");
                                                        scanf("%d", &detalhe_prof);
                                                    }
                                                    if (detalhe_prof == 1) {
                                                        detalhe_prof = 2;
                                                    }
                                                }
                                            }
                                        }
                                        switch (detalhe_prof) {
                                            case 1:
                                            {
                                                printf("1º SEMESTRE - %s  [1]\n", NomeProfSI1);
                                                printf("CPF :: %d", cpfsi1);
                                                break;
                                            }
                                            case 2:
                                            {
                                                printf("1º SEMESTRE - %s  [2]\n", NomeProfSI2);
                                                printf("CPF :: %d", cpfsi2);
                                                break;
                                            }
                                        }
                                        break;
                                    }
                                    case 2:
                                    {
                                        if (ProfessorSI3 == 1 && ProfessorSI4 == 1) {
                                            printf("1º SEMESTRE - %s  [1]\n", NomeProfSI3);
                                            printf("1º SEMESTRE - %s  [2]\n", NomeProfSI4);

                                            printf("PARA VOTLAR AO MENU DIGITE [9]");
                                            printf("PARA DETALHE SOBRE O PROFESSOR DIGITE SEU RESPECTIVO NUMERO ::\n");
                                            scanf("%d", &detalhe_prof);

                                            while (detalhe_prof != 1 && detalhe_prof != 2 && detalhe_prof != 9) {
                                                printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                                scanf("%d", &detalhe_prof);
                                            }
                                        } else {
                                            if (ProfessorSI3 == 1 && ProfessorSI4 == 0) {
                                                printf("1º SEMESTRE - %s  [1]\n", NomeProfSI1);

                                                printf("PARA VOTLAR AO MENU DIGITE [9]\n");
                                                printf("PARA DETALHE SOBRE O PROFESSOR DIGITE SEU RESPECTIVO NUMERO ::\n");
                                                scanf("%d", &detalhe_prof);

                                                while (detalhe_prof != 1 && detalhe_prof != 9) {
                                                    printf("ESCOLHA SOMENTE A OPCAO CITADA ::\n");
                                                    scanf("%d", &detalhe_prof);
                                                }
                                            } else {
                                                if (ProfessorSI3 == 0 && ProfessorSI4 == 1) {
                                                    printf("1º SEMESTRE - %s  [1]\n", NomeProfSI4);

                                                    printf("PARA VOTLAR AO MENU DIGITE [9]\n");
                                                    printf("PARA DETALHE SOBRE O PROFESSOR DIGITE SEU RESPECTIVO NUMERO ::\n");
                                                    scanf("%d", &detalhe_prof);
                                                    while (detalhe_prof != 1 && detalhe_prof != 9) {
                                                        printf("ESCOLHA SOMENTE A OPCAO CITADA ::\n");
                                                        scanf("%d", &detalhe_prof);
                                                    }
                                                    if (detalhe_prof == 1) {
                                                        detalhe_prof = 2;
                                                    }
                                                }
                                            }
                                        }
                                        switch (detalhe_prof) {
                                            case 1:
                                            {
                                                printf("1º SEMESTRE - %s  [1]\n", NomeProfSI3);
                                                printf("CPF :: %d", cpfsi3);
                                                break;
                                            }
                                            case 2:
                                            {
                                                printf("1º SEMESTRE - %s  [2]\n", NomeProfSI4);
                                                printf("CPF :: %d", cpfsi4);
                                                break;
                                            }
                                        }
                                        break;
                                    }
                                    case 3:
                                    {
                                        if (ProfessorSI5 == 1 && ProfessorSI6 == 1) {
                                            printf("1º SEMESTRE - %s  [1]\n", NomeProfSI5);
                                            printf("1º SEMESTRE - %s  [2]\n", NomeProfSI6);

                                            printf("PARA VOTLAR AO MENU DIGITE [9]\n");
                                            printf("PARA DETALHE SOBRE O PROFESSOR DIGITE SEU RESPECTIVO NUMERO ::\n");
                                            scanf("%d", &detalhe_prof);

                                            while (detalhe_prof != 1 && detalhe_prof != 2 && detalhe_prof != 9) {
                                                printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                                scanf("%d", &detalhe_prof);
                                            }
                                        } else {
                                            if (ProfessorSI5 == 1 && ProfessorSI6 == 0) {
                                                printf("1º SEMESTRE - %s  [1]\n", NomeProfSI5);

                                                printf("PARA VOTLAR AO MENU DIGITE [9]\n");
                                                printf("PARA DETALHE SOBRE O PROFESSOR DIGITE SEU RESPECTIVO NUMERO ::\n");
                                                scanf("%d", &detalhe_prof);

                                                while (detalhe_prof != 1 && detalhe_prof != 9) {
                                                    printf("ESCOLHA SOMENTE A OPCAO CITADA ::\n");
                                                    scanf("%d", &detalhe_prof);
                                                }
                                            } else {
                                                if (ProfessorSI5 == 0 && ProfessorSI6 == 1) {
                                                    printf("1º SEMESTRE - %s  [1]\n", NomeProfSI6);

                                                    printf("PARA VOTLAR AO MENU DIGITE [9]\n");
                                                    printf("PARA DETALHE SOBRE O PROFESSOR DIGITE SEU RESPECTIVO NUMERO ::\n");
                                                    scanf("%d", &detalhe_prof);
                                                    while (detalhe_prof != 1 && detalhe_prof != 9) {
                                                        printf("ESCOLHA SOMENTE A OPCAO CITADA ::\n");
                                                        scanf("%d", &detalhe_prof);
                                                    }
                                                    if (detalhe_prof == 1) {
                                                        detalhe_prof = 2;
                                                    }
                                                }
                                            }
                                        }
                                        switch (detalhe_prof) {
                                            case 1:
                                            {
                                                printf("1º SEMESTRE - %s  [1]\n", NomeProfSI5);
                                                printf("CPF :: %d", cpfsi5);
                                                break;
                                            }
                                            case 2:
                                            {
                                                printf("1º SEMESTRE - %s  [2]\n", NomeProfSI6);
                                                printf("CPF :: %d", cpfsi6);
                                                break;
                                            }
                                        }
                                        break;
                                    }
                                }// consultas_professor_disciplina
                                break;
                            }
                            case 2:
                            {
                                printf("========================================================================\n");
                                printf("DE QUAL SEMESTRE DESEJA CONSULTAR O PROFESSORES ::\n");
                                printf("========================================================================\n\n");
                                printf("1º SEMESTRE  [1]\n");
                                printf("2º SEMESTRE  [2]\n");
                                printf("3º SEMESTRE  [3]\n");
                                printf("\n========================================================================\n\n");
                                scanf("%d", &consultas_professor_disciplina);

                                while (consultas_professor_disciplina != 1 && consultas_professor_disciplina != 2 && consultas_professor_disciplina != 3 && consultas_professor_disciplina != 4 && consultas_professor_disciplina != 5 && consultas_professor_disciplina != 6) {
                                    printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                    scanf("%d", &consultas_professor_disciplina);
                                }

                                switch (consultas_professor_disciplina) {
                                    case 1:
                                    {
                                        if (ProfessorDI1 == 1 && ProfessorDI2 == 1) {
                                            printf("1º SEMESTRE - %s  [1]\n", NomeProfDI1);
                                            printf("1º SEMESTRE - %s  [2]\n", NomeProfDI2);

                                            printf("PARA VOTLAR AO MENU DIGITE [9]\n");
                                            printf("PARA DETALHE SOBRE O PROFESSOR DIGITE SEU RESPECTIVO NUMERO ::\n");
                                            scanf("%d", &detalhe_prof);

                                            while (detalhe_prof != 1 && detalhe_prof != 2 && detalhe_prof != 9) {
                                                printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                                scanf("%d", &detalhe_prof);
                                            }
                                        } else {
                                            if (ProfessorDI1 == 1 && ProfessorDI2 == 0) {
                                                printf("1º SEMESTRE - %s  [1]\n", NomeProfDI1);

                                                printf("PARA VOTLAR AO MENU DIGITE [9]\n");
                                                printf("PARA DETALHE SOBRE O PROFESSOR DIGITE SEU RESPECTIVO NUMERO ::\n");
                                                scanf("%d", &detalhe_prof);

                                                while (detalhe_prof != 1 && detalhe_prof != 9) {
                                                    printf("ESCOLHA SOMENTE A OPCAO CITADA ::\n");
                                                    scanf("%d", &detalhe_prof);
                                                }
                                            } else {
                                                if (ProfessorDI1 == 0 && ProfessorDI2 == 1) {
                                                    printf("1º SEMESTRE - %s  [1]\n", NomeProfDI2);

                                                    printf("PARA VOTLAR AO MENU DIGITE [9]\n");
                                                    printf("PARA DETALHE SOBRE O PROFESSOR DIGITE SEU RESPECTIVO NUMERO ::\n");
                                                    scanf("%d", &detalhe_prof);
                                                    while (detalhe_prof != 1 && detalhe_prof != 9) {
                                                        printf("ESCOLHA SOMENTE A OPCAO CITADA ::\n");
                                                        scanf("%d", &detalhe_prof);
                                                    }
                                                    if (detalhe_prof == 1) {
                                                        detalhe_prof = 2;
                                                    }
                                                }
                                            }
                                        }
                                        switch (detalhe_prof) {
                                            case 1:
                                            {
                                                printf("1º SEMESTRE - %s  [1]\n", NomeProfDI1);
                                                printf("CPF :: %d", cpfdi1);
                                                break;
                                            }
                                            case 2:
                                            {
                                                printf("1º SEMESTRE - %s  [2]\n", NomeProfDI2);
                                                printf("CPF :: %d", cpfdi2);
                                                break;
                                            }
                                        }
                                        break;
                                    }
                                    case 2:
                                    {
                                        if (ProfessorDI3 == 1 && ProfessorDI4 == 1) {
                                            printf("1º SEMESTRE - %s  [1]\n", NomeProfDI3);
                                            printf("1º SEMESTRE - %s  [2]\n", NomeProfDI4);

                                            printf("PARA VOTLAR AO MENU DIGITE [9]");
                                            printf("PARA DETALHE SOBRE O PROFESSOR DIGITE SEU RESPECTIVO NUMERO ::\n");
                                            scanf("%d", &detalhe_prof);

                                            while (detalhe_prof != 1 && detalhe_prof != 2 && detalhe_prof != 9) {
                                                printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                                scanf("%d", &detalhe_prof);
                                            }
                                        } else {
                                            if (ProfessorDI3 == 1 && ProfessorDI4 == 0) {
                                                printf("1º SEMESTRE - %s  [1]\n", NomeProfDI1);

                                                printf("PARA VOTLAR AO MENU DIGITE [9]\n");
                                                printf("PARA DETALHE SOBRE O PROFESSOR DIGITE SEU RESPECTIVO NUMERO ::\n");
                                                scanf("%d", &detalhe_prof);

                                                while (detalhe_prof != 1 && detalhe_prof != 9) {
                                                    printf("ESCOLHA SOMENTE A OPCAO CITADA ::\n");
                                                    scanf("%d", &detalhe_prof);
                                                }
                                            } else {
                                                if (ProfessorDI3 == 0 && ProfessorDI4 == 1) {
                                                    printf("1º SEMESTRE - %s  [1]\n", NomeProfDI4);

                                                    printf("PARA VOTLAR AO MENU DIGITE [9]\n");
                                                    printf("PARA DETALHE SOBRE O PROFESSOR DIGITE SEU RESPECTIVO NUMERO ::\n");
                                                    scanf("%d", &detalhe_prof);
                                                    while (detalhe_prof != 1 && detalhe_prof != 9) {
                                                        printf("ESCOLHA SOMENTE A OPCAO CITADA ::\n");
                                                        scanf("%d", &detalhe_prof);
                                                    }
                                                    if (detalhe_prof == 1) {
                                                        detalhe_prof = 2;
                                                    }
                                                }
                                            }
                                        }
                                        switch (detalhe_prof) {
                                            case 1:
                                            {
                                                printf("1º SEMESTRE - %s  [1]\n", NomeProfDI3);
                                                printf("CPF :: %d", cpfdi3);
                                                break;
                                            }
                                            case 2:
                                            {
                                                printf("1º SEMESTRE - %s  [2]\n", NomeProfDI4);
                                                printf("CPF :: %d", cpfdi4);
                                                break;
                                            }
                                        }
                                        break;
                                    }
                                    case 3:
                                    {
                                        if (ProfessorDI5 == 1 && ProfessorDI6 == 1) {
                                            printf("1º SEMESTRE - %s  [1]\n", NomeProfDI5);
                                            printf("1º SEMESTRE - %s  [2]\n", NomeProfDI6);

                                            printf("PARA VOTLAR AO MENU DIGITE [9]\n");
                                            printf("PARA DETALHE SOBRE O PROFESSOR DIGITE SEU RESPECTIVO NUMERO ::\n");
                                            scanf("%d", &detalhe_prof);

                                            while (detalhe_prof != 1 && detalhe_prof != 2 && detalhe_prof != 9) {
                                                printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                                scanf("%d", &detalhe_prof);
                                            }
                                        } else {
                                            if (ProfessorDI5 == 1 && ProfessorDI6 == 0) {
                                                printf("1º SEMESTRE - %s  [1]\n", NomeProfDI5);

                                                printf("PARA VOTLAR AO MENU DIGITE [9]\n");
                                                printf("PARA DETALHE SOBRE O PROFESSOR DIGITE SEU RESPECTIVO NUMERO ::\n");
                                                scanf("%d", &detalhe_prof);

                                                while (detalhe_prof != 1 && detalhe_prof != 9) {
                                                    printf("ESCOLHA SOMENTE A OPCAO CITADA ::\n");
                                                    scanf("%d", &detalhe_prof);
                                                }
                                            } else {
                                                if (ProfessorDI5 == 0 && ProfessorDI6 == 1) {
                                                    printf("1º SEMESTRE - %s  [1]\n", NomeProfDI6);

                                                    printf("PARA VOTLAR AO MENU DIGITE [9]\n");
                                                    printf("PARA DETALHE SOBRE O PROFESSOR DIGITE SEU RESPECTIVO NUMERO ::\n");
                                                    scanf("%d", &detalhe_prof);
                                                    while (detalhe_prof != 1 && detalhe_prof != 9) {
                                                        printf("ESCOLHA SOMENTE A OPCAO CITADA ::\n");
                                                        scanf("%d", &detalhe_prof);
                                                    }
                                                    if (detalhe_prof == 1) {
                                                        detalhe_prof = 2;
                                                    }
                                                }
                                            }
                                        }
                                        switch (detalhe_prof) {
                                            case 1:
                                            {
                                                printf("1º SEMESTRE - %s\n", NomeProfDI5);
                                                printf("CPF :: %d", cpfdi5);
                                                break;
                                            }
                                            case 2:
                                            {
                                                printf("1º SEMESTRE - %s\n", NomeProfDI6);
                                                printf("CPF :: %d", cpfdi6);
                                                break;
                                            }
                                        }
                                        break;
                                    }
                                }// consultas_professor_disciplina
                                break;
                            }

                        }//switch consultas_professor_curso
                        break;
                    }
                    case 3:
                    {
                        printf("\n\n");
                        printf("========================================================================\n");
                        printf("DE QUAL CURSO DESEJA CONSULTAR O ALUNO ::\n");
                        printf("========================================================================\n\n");
                        if (curso1 == 1 && curso2 == 1) {
                            printf("%s [1]\n", nomecurso1);
                            printf("%s [2]\n", nomecurso2);
                            printf("\n========================================================================\n");
                            scanf("%d", &consultas_professor_aluno);
                            while (consultas_professor_aluno != 1 && consultas_professor_aluno != 2) {

                                printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                scanf("%d", &consultas_professor_aluno);
                            }
                        } else {
                            if (curso1 == 0 && curso2 == 1) {
                                printf("%s [1]\n", nomecurso2);
                                printf("\n========================================================================\n");
                                scanf("%d", &consultas_professor_aluno);
                                while (consultas_professor_aluno != 1) {
                                    printf("ESCOLHA SOMENTE A OPCAO CITADAS ::\n");
                                    scanf("%d", &consultas_professor_aluno);
                                }
                                consultas_professor_aluno = 2;

                            } else {
                                if (curso1 == 1 && curso2 == 0) {
                                    printf("%s [1]\n", nomecurso1);
                                    printf("\n========================================================================\n");
                                    scanf("%d", &consultas_professor_aluno);
                                    while (consultas_professor_aluno != 1) {
                                        printf("ESCOLHA SOMENTE A OPCAO CITADAS ::\n");
                                        scanf("%d", &consultas_professor_aluno);
                                    }

                                }
                            }
                        }
                        switch (consultas_professor_aluno) {
                            case 1:
                            {
                                printf("DE QUAL DISCIPLINA E O ALUNO ::\n");
                                printf("%s - 1º SEMESTRE [1]\n", curso1semestre1m1);
                                printf("%s - 1º SEMESTRE [2]\n", curso1semestre1m2);
                                printf("%s - 2º SEMESTRE [3]\n", curso1semestre2m1);
                                printf("%s - 2º SEMESTRE [4]\n", curso1semestre2m2);
                                printf("%s - 3º SEMESTRE [5]\n", curso1semestre3m1);
                                printf("%s - 3º SEMESTRE [6]\n", curso1semestre3m2);
                                scanf("%d", &consul_disciplina_aluno);

                                while (consul_disciplina_aluno != 1 && consul_disciplina_aluno != 2 && consul_disciplina_aluno != 3 && consul_disciplina_aluno != 4 && consul_disciplina_aluno != 5 && consul_disciplina_aluno != 6) {
                                    printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                    scanf("%d", &consul_disciplina_aluno);
                                }

                                switch (consul_disciplina_aluno) {
                                    case 1:
                                    {
                                        printf("ALUNOS DO 1º SEMESTRE DE %s ::\n", curso1semestre1m1);
                                        if (aluno1c1m1 == 1) {
                                            printf("ALUNO - %s\n", nomealuno1c1m1);
                                            if (nota1 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno1c1m1);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota2 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno1c1m1);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc1 >= 7 && nota1 == 1 && nota2 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc1);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc1);

                                                if (strcmp(notaaluno1, "s") == 0 || strcmp(notaaluno1, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf1);
                                                    if (mg1 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg1);
                                                    } else {
                                                        if (mg1 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg1);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno2c1m1 == 1) {
                                            printf("ALUNO - %s\n", nomealuno2c1m1);
                                            if (nota3 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno2c1m1);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota4 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno2c1m1);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc2 >= 7 && nota3 == 1 && nota4 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc2);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc2);

                                                if (strcmp(notaaluno2, "s") == 0 || strcmp(notaaluno2, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf2);
                                                    if (mg2 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg2);
                                                    } else {
                                                        if (mg2 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg2);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno3c1m1 == 1) {
                                            printf("ALUNO - %s\n", nomealuno3c1m1);
                                            if (nota5 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno3c1m1);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota6 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno3c1m1);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc3 >= 7 && nota5 == 1 && nota6 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc3);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc3);

                                                if (strcmp(notaaluno3, "s") == 0 || strcmp(notaaluno3, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf3);
                                                    if (mg3 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg3);
                                                    } else {
                                                        if (mg3 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg3);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno4c1m1 == 1) {
                                            printf("ALUNO - %s\n", nomealuno4c1m1);
                                            if (nota7 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno4c1m1);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota8 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno4c1m1);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc4 >= 7 && nota7 == 1 && nota8 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc4);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc4);

                                                if (strcmp(notaaluno4, "s") == 0 || strcmp(notaaluno4, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf4);
                                                    if (mg4 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg4);
                                                    } else {
                                                        if (mg4 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg4);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno5c1m1 == 1) {
                                            printf("ALUNO - %s\n", nomealuno5c1m1);
                                            if (nota9 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno5c1m1);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota10 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno4c1m1);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc5 >= 7 && nota9 == 1 && nota10 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc5);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc5);

                                                if (strcmp(notaaluno5, "s") == 0 || strcmp(notaaluno5, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf5);
                                                    if (mg5 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg5);
                                                    } else {
                                                        if (mg5 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg5);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        break;
                                    }
                                    case 2:
                                    {
                                        printf("ALUNOS DO 1º SEMESTRE DE %s ::\n", curso1semestre1m2);
                                        if (aluno1c1m2 == 1) {
                                            printf("ALUNO - %s\n", nomealuno1c1m2);
                                            if (nota11 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno1c1m2);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota12 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno1c1m2);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc6 >= 7 && nota11 == 1 && nota12 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc6);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc6);

                                                if (strcmp(notaaluno6, "s") == 0 || strcmp(notaaluno6, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf6);
                                                    if (mg6 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg6);
                                                    } else {
                                                        if (mg6 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg6);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno2c1m2 == 1) {
                                            printf("ALUNO - %s\n", nomealuno2c1m2);
                                            if (nota13 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno2c1m2);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota14 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno2c1m2);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc7 >= 7 && nota13 == 1 && nota14 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc7);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc7);

                                                if (strcmp(notaaluno7, "s") == 0 || strcmp(notaaluno7, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf7);
                                                    if (mg7 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg7);
                                                    } else {
                                                        if (mg7 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg7);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno3c1m2 == 1) {
                                            printf("ALUNO - %s\n", nomealuno3c1m2);
                                            if (nota15 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno3c1m2);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota16 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno3c1m2);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc8 >= 7 && nota15 == 1 && nota16 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc8);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc8);

                                                if (strcmp(notaaluno8, "s") == 0 || strcmp(notaaluno8, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf8);
                                                    if (mg8 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg8);
                                                    } else {
                                                        if (mg8 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg8);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno4c1m2 == 1) {
                                            printf("ALUNO - %s\n", nomealuno4c1m2);
                                            if (nota17 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno4c1m2);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota18 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno4c1m2);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc9 >= 7 && nota17 == 1 && nota18 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc9);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc9);

                                                if (strcmp(notaaluno9, "s") == 0 || strcmp(notaaluno9, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf9);
                                                    if (mg9 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg9);
                                                    } else {
                                                        if (mg9 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg9);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno5c1m2 == 1) {
                                            printf("ALUNO - %s\n", nomealuno5c1m2);
                                            if (nota19 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno5c1m2);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota20 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno4c1m2);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc10 >= 7 && nota19 == 1 && nota20 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc10);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc10);

                                                if (strcmp(notaaluno10, "s") == 0 || strcmp(notaaluno10, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf10);
                                                    if (mg10 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg10);
                                                    } else {
                                                        if (mg10 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg10);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }

                                        break;
                                    }
                                    case 3:
                                    {
                                        printf("ALUNOS DO 1º SEMESTRE DE %s ::\n", curso1semestre2m1);
                                        if (aluno1c1m3 == 1) {
                                            printf("ALUNO - %s\n", nomealuno1c1m3);
                                            if (nota21 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno1c1m3);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota22 == 1) {
                                                printf("NOTA AV2 = %.2f \n", nota2_aluno1c1m3);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc11 >= 7 && nota21 == 1 && nota22 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f \n", calc11);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc11);

                                                if (strcmp(notaaluno11, "s") == 0 || strcmp(notaaluno11, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf11);
                                                    if (mg11 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg11);
                                                    } else {
                                                        if (mg11 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg11);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno2c1m3 == 1) {
                                            printf("ALUNO - %s\n", nomealuno2c1m3);
                                            if (nota23 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno2c1m3);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota24 == 1) {
                                                printf("NOTA AV2 = %.2f \n", nota2_aluno2c1m3);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc12 >= 7 && nota23 == 1 && nota24 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f \n", calc12);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f \n", calc12);

                                                if (strcmp(notaaluno12, "s") == 0 || strcmp(notaaluno12, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf12);
                                                    if (mg12 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg12);
                                                    } else {
                                                        if (mg12 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg12);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno3c1m3 == 1) {
                                            printf("ALUNO - %s\n", nomealuno3c1m3);
                                            if (nota25 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno3c1m3);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota26 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno3c1m3);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc13 >= 7 && nota25 == 1 && nota26 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc13);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc13);

                                                if (strcmp(notaaluno13, "s") == 0 || strcmp(notaaluno13, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf13);
                                                    if (mg13 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg13);
                                                    } else {
                                                        if (mg13 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg13);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno4c1m3 == 1) {
                                            printf("ALUNO - %s\n", nomealuno4c1m3);
                                            if (nota27 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno4c1m3);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota28 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno4c1m3);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc14 >= 7 && nota27 == 1 && nota28 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc14);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc14);

                                                if (strcmp(notaaluno14, "s") == 0 || strcmp(notaaluno14, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf14);
                                                    if (mg14 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg14);
                                                    } else {
                                                        if (mg14 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg14);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno5c1m3 == 1) {
                                            printf("ALUNO - %s\n", nomealuno5c1m3);
                                            if (nota29 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno5c1m3);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota30 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno4c1m3);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc15 >= 7 && nota29 == 1 && nota30 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc15);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc15);
                                            }
                                            if (strcmp(notaaluno15, "s") == 0 || strcmp(notaaluno15, "S") == 0) {
                                                printf("NOTA AVF = %.f \n", avf15);
                                                if (mg15 >= 5) {
                                                    printf("ALUNO APROVADO!\n");
                                                    printf("MEDIA = %.2f \n", mg15);
                                                } else {
                                                    if (mg15 < 5) {
                                                        printf("ALUNO REPROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg15);
                                                    }
                                                }
                                            } else {
                                                printf("NOTA AVF = NAO CADASTRADA\n");
                                            }
                                        }

                                        break;
                                    }
                                    case 4:
                                    {
                                        printf("ALUNOS DO 1º SEMESTRE DE %s ::\n", curso1semestre2m2);
                                        if (aluno1c1m4 == 1) {
                                            printf("ALUNO - %s\n", nomealuno1c1m3);
                                            if (nota31 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno1c1m4);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota32 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno1c1m4);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc16 >= 7 && nota31 == 1 && nota32 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc16);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc16);
                                            }
                                            if (strcmp(notaaluno16, "s") == 0 || strcmp(notaaluno16, "S") == 0) {
                                                printf("NOTA AVF = %.f \n", avf16);
                                                if (mg16 >= 5) {
                                                    printf("ALUNO APROVADO!\n");
                                                    printf("MEDIA = %.2f \n", mg16);
                                                } else {
                                                    if (mg16 < 5) {
                                                        printf("ALUNO REPROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg16);
                                                    }
                                                }
                                            } else {
                                                printf("NOTA AVF = NAO CADASTRADA\n");
                                            }
                                        }
                                        if (aluno2c1m4 == 1) {
                                            printf("ALUNO - %s\n", nomealuno2c1m4);
                                            if (nota33 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno2c1m4);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota34 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno2c1m4);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc17 >= 7 && nota33 == 1 && nota34 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc17);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc17);
                                            }
                                            if (strcmp(notaaluno17, "s") == 0 || strcmp(notaaluno17, "S") == 0) {
                                                printf("NOTA AVF = %.f \n", avf17);
                                                if (mg17 >= 5) {
                                                    printf("ALUNO APROVADO!\n");
                                                    printf("MEDIA = %.2f \n", mg17);
                                                } else {
                                                    if (mg17 < 5) {
                                                        printf("ALUNO REPROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg17);
                                                    }
                                                }
                                            } else {
                                                printf("NOTA AVF = NAO CADASTRADA\n");
                                            }
                                        }
                                        if (aluno3c1m4 == 1) {
                                            printf("ALUNO - %s\n", nomealuno3c1m4);
                                            if (nota35 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno3c1m4);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota36 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno3c1m4);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc18 >= 7 && nota35 == 1 && nota36 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc18);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc18);
                                            }
                                            if (strcmp(notaaluno18, "s") == 0 || strcmp(notaaluno18, "S") == 0) {
                                                printf("NOTA AVF = %.f \n", avf18);
                                                if (mg18 >= 5) {
                                                    printf("ALUNO APROVADO!\n");
                                                    printf("MEDIA = %.2f \n", mg18);
                                                } else {
                                                    if (mg18 < 5) {
                                                        printf("ALUNO REPROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg18);
                                                    }
                                                }
                                            } else {
                                                printf("NOTA AVF = NAO CADASTRADA\n");
                                            }
                                        }
                                        if (aluno4c1m4 == 1) {
                                            printf("ALUNO - %s\n", nomealuno4c1m4);
                                            if (nota37 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno4c1m4);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota38 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno4c1m4);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc19 >= 7 && nota37 == 1 && nota38 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc19);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc19);
                                            }
                                            if (strcmp(notaaluno19, "s") == 0 || strcmp(notaaluno19, "S") == 0) {
                                                printf("NOTA AVF = %.f \n", avf19);
                                                if (mg19 >= 5) {
                                                    printf("ALUNO APROVADO!\n");
                                                    printf("MEDIA = %.2f \n", mg19);
                                                } else {
                                                    if (mg19 < 5) {
                                                        printf("ALUNO REPROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg19);
                                                    }
                                                }
                                            } else {
                                                printf("NOTA AVF = NAO CADASTRADA\n");
                                            }
                                        }
                                        if (aluno5c1m4 == 1) {
                                            printf("ALUNO - %s\n", nomealuno5c1m4);
                                            if (nota39 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno5c1m4);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota40 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno4c1m4);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc20 >= 7 && nota39 == 1 && nota40 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc20);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc20);
                                            }
                                            if (strcmp(notaaluno20, "s") == 0 || strcmp(notaaluno20, "S") == 0) {
                                                printf("NOTA AVF = %.f \n", avf20);
                                                if (mg20 >= 5) {
                                                    printf("ALUNO APROVADO!\n");
                                                    printf("MEDIA = %.2f \n", mg20);
                                                } else {
                                                    if (mg20 < 5) {
                                                        printf("ALUNO REPROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg20);
                                                    }
                                                }
                                            } else {
                                                printf("NOTA AVF = NAO CADASTRADA\n");
                                            }
                                        }

                                        break;
                                    }
                                    case 5:
                                    {
                                        printf("ALUNOS DO 1º SEMESTRE DE %s ::\n", curso1semestre3m1);
                                        if (aluno1c1m5 == 1) {
                                            printf("ALUNO - %s\n", nomealuno1c1m5);
                                            if (nota41 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno1c1m5);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota42 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno1c1m5);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc21 >= 7 && nota41 == 1 && nota42 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc21);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc21);

                                                if (strcmp(notaaluno21, "s") == 0 || strcmp(notaaluno21, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf21);
                                                    if (mg21 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg21);
                                                    } else {
                                                        if (mg21 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg21);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno2c1m5 == 1) {
                                            printf("ALUNO - %s\n", nomealuno2c1m5);
                                            if (nota43 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno2c1m5);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota44 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno2c1m5);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc22 >= 7 && nota43 == 1 && nota44 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc22);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc22);

                                                if (strcmp(notaaluno22, "s") == 0 || strcmp(notaaluno22, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf22);
                                                    if (mg22 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg22);
                                                    } else {
                                                        if (mg22 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg22);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno3c1m5 == 1) {
                                            printf("ALUNO - %s\n", nomealuno3c1m5);
                                            if (nota45 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno3c1m5);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota46 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno3c1m5);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc23 >= 7 && nota45 == 1 && nota46 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc23);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc23);

                                                if (strcmp(notaaluno23, "s") == 0 || strcmp(notaaluno23, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf23);
                                                    if (mg23 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg23);
                                                    } else {
                                                        if (mg23 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg23);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno4c1m5 == 1) {
                                            printf("ALUNO - %s\n", nomealuno4c1m5);
                                            if (nota47 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno4c1m5);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota48 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno4c1m5);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc24 >= 7 && nota47 == 1 && nota48 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc24);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc24);

                                                if (strcmp(notaaluno24, "s") == 0 || strcmp(notaaluno24, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf24);
                                                    if (mg24 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg24);
                                                    } else {
                                                        if (mg24 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg24);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno5c1m5 == 1) {
                                            printf("ALUNO - %s\n", nomealuno5c1m5);
                                            if (nota49 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno5c1m5);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota50 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno4c1m5);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc25 >= 7 && nota49 == 1 && nota50 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc25);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc25);

                                                if (strcmp(notaaluno25, "s") == 0 || strcmp(notaaluno25, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf25);
                                                    if (mg25 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg25);
                                                    } else {
                                                        if (mg25 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg25);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        break;
                                    }
                                    case 6:
                                    {
                                        printf("ALUNOS DO 1º SEMESTRE DE %s ::\n", curso1semestre3m2);
                                        if (aluno1c1m6 == 1) {
                                            printf("ALUNO - %s\n", nomealuno1c1m6);
                                            if (nota51 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno1c1m6);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota52 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno1c1m6);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc26 >= 7 && nota51 == 1 && nota52 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc26);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc26);

                                                if (strcmp(notaaluno26, "s") == 0 || strcmp(notaaluno26, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf26);
                                                    if (mg26 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg26);
                                                    } else {
                                                        if (mg26 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg26);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno2c1m6 == 1) {
                                            printf("ALUNO - %s\n", nomealuno2c1m6);
                                            if (nota53 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno2c1m6);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota54 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno2c1m6);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc27 >= 7 && nota53 == 1 && nota54 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc27);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc27);

                                                if (strcmp(notaaluno27, "s") == 0 || strcmp(notaaluno27, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf27);
                                                    if (mg27 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg27);
                                                    } else {
                                                        if (mg27 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg27);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno3c1m6 == 1) {
                                            printf("ALUNO - %s\n", nomealuno3c1m6);
                                            if (nota55 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno3c1m6);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota56 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno3c1m6);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc28 >= 7 && nota55 == 1 && nota56 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc28);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc28);

                                                if (strcmp(notaaluno28, "s") == 0 || strcmp(notaaluno28, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf28);
                                                    if (mg28 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg28);
                                                    } else {
                                                        if (mg28 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg28);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno4c1m6 == 1) {
                                            printf("ALUNO - %s\n", nomealuno4c1m6);
                                            if (nota57 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno4c1m6);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota58 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno4c1m6);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc29 >= 7 && nota57 == 1 && nota58 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc29);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc29);

                                                if (strcmp(notaaluno29, "s") == 0 || strcmp(notaaluno29, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf29);
                                                    if (mg29 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg29);
                                                    } else {
                                                        if (mg29 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg29);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno5c1m6 == 1) {
                                            printf("ALUNO - %s\n", nomealuno5c1m6);
                                            if (nota59 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno5c1m6);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota60 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno4c1m6);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc30 >= 7 && nota59 == 1 && nota60 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc30);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc30);

                                                if (strcmp(notaaluno30, "s") == 0 || strcmp(notaaluno30, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf30);
                                                    if (mg30 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg30);
                                                    } else {
                                                        if (mg30 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg30);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }

                                        break;
                                    }
                                }//consul_disciplina_aluno

                                break;
                            }
                            case 2:
                            {
                                printf("DE QUAL DISCIPLINA E O ALUNO ::\n");
                                printf("%s - 1º SEMESTRE [1]\n", curso2semestre1m1);
                                printf("%s - 1º SEMESTRE [2]\n", curso2semestre1m2);
                                printf("%s - 2º SEMESTRE [3]\n", curso2semestre2m1);
                                printf("%s - 2º SEMESTRE [4]\n", curso2semestre2m2);
                                printf("%s - 3º SEMESTRE [5]\n", curso2semestre3m1);
                                printf("%s - 3º SEMESTRE [6]\n", curso2semestre3m2);
                                scanf("%d", &consul_disciplina_aluno);

                                while (consul_disciplina_aluno != 1 && consul_disciplina_aluno != 2 && consul_disciplina_aluno != 3 && consul_disciplina_aluno != 4 && consul_disciplina_aluno != 5 && consul_disciplina_aluno != 6) {
                                    printf("ESCOLHA SOMENTE UMA DAS OPCOES CITADAS ::\n");
                                    scanf("%d", &consul_disciplina_aluno);
                                }

                                switch (consul_disciplina_aluno) {
                                    case 1:
                                    {
                                        printf("ALUNOS DO 1º SEMESTRE DE %s ::\n", curso2semestre1m1);
                                        if (aluno1c2m1 == 1) {
                                            printf("ALUNO - %s\n", nomealuno1c2m1);
                                            if (nota61 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno1c2m1);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota62 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno1c2m1);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc31 >= 7 && nota61 == 1 && nota62 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc31);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc31);

                                                if (strcmp(notaaluno31, "s") == 0 || strcmp(notaaluno31, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf31);
                                                    if (mg31 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg31);
                                                    } else {
                                                        if (mg31 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg31);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno2c2m1 == 1) {
                                            printf("ALUNO - %s\n", nomealuno2c2m1);
                                            if (nota63 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno2c2m1);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota64 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno2c2m1);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc32 >= 7 && nota63 == 1 && nota64 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc32);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc32);

                                                if (strcmp(notaaluno32, "s") == 0 || strcmp(notaaluno32, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf32);
                                                    if (mg32 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg2);
                                                    } else {
                                                        if (mg32 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg32);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno3c2m1 == 1) {
                                            printf("ALUNO - %s\n", nomealuno3c2m1);
                                            if (nota65 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno3c2m1);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota66 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno3c2m1);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc33 >= 7 && nota65 == 1 && nota66 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc33);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc33);

                                                if (strcmp(notaaluno33, "s") == 0 || strcmp(notaaluno33, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf33);
                                                    if (mg33 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg33);
                                                    } else {
                                                        if (mg33 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg33);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno4c2m1 == 1) {
                                            printf("ALUNO - %s\n", nomealuno4c2m1);
                                            if (nota67 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno4c2m1);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota68 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno4c2m1);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc34 >= 7 && nota67 == 1 && nota8 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc34);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc34);

                                                if (strcmp(notaaluno34, "s") == 0 || strcmp(notaaluno34, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf34);
                                                    if (mg34 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg34);
                                                    } else {
                                                        if (mg34 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg34);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno5c2m1 == 1) {
                                            printf("ALUNO - %s\n", nomealuno5c2m1);
                                            if (nota69 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno5c2m1);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota70 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno4c2m1);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc35 >= 7 && nota69 == 1 && nota70 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc35);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc35);

                                                if (strcmp(notaaluno35, "s") == 0 || strcmp(notaaluno35, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf35);
                                                    if (mg35 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg35);
                                                    } else {
                                                        if (mg35 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg35);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        break;
                                    }
                                    case 2:
                                    {
                                        printf("ALUNOS DO 1º SEMESTRE DE %s ::\n", curso2semestre1m2);
                                        if (aluno1c2m2 == 1) {
                                            printf("ALUNO - %s\n", nomealuno1c2m2);
                                            if (nota71 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno1c2m2);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota72 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno1c2m2);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc36 >= 7 && nota71 == 1 && nota72 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc36);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc36);

                                                if (strcmp(notaaluno36, "s") == 0 || strcmp(notaaluno36, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf36);
                                                    if (mg36 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg36);
                                                    } else {
                                                        if (mg36 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg36);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno2c2m2 == 1) {
                                            printf("ALUNO - %s\n", nomealuno2c2m2);
                                            if (nota73 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno2c2m2);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota74 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno2c2m2);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc37 >= 7 && nota73 == 1 && nota74 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc37);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc37);

                                                if (strcmp(notaaluno37, "s") == 0 || strcmp(notaaluno37, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf37);
                                                    if (mg37 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg37);
                                                    } else {
                                                        if (mg37 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg37);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno3c2m2 == 1) {
                                            printf("ALUNO - %s\n", nomealuno3c2m2);
                                            if (nota75 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno3c2m2);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota76 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno3c2m2);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc38 >= 7 && nota75 == 1 && nota76 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc38);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc38);

                                                if (strcmp(notaaluno38, "s") == 0 || strcmp(notaaluno38, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf38);
                                                    if (mg38 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg38);
                                                    } else {
                                                        if (mg38 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg38);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno4c2m2 == 1) {
                                            printf("ALUNO - %s\n", nomealuno4c2m2);
                                            if (nota77 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno4c2m2);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota78 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno4c2m2);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc39 >= 7 && nota77 == 1 && nota78 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc39);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc39);

                                                if (strcmp(notaaluno39, "s") == 0 || strcmp(notaaluno39, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf39);
                                                    if (mg39 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg39);
                                                    } else {
                                                        if (mg39 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg39);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno5c2m2 == 1) {
                                            printf("ALUNO - %s\n", nomealuno5c2m2);
                                            if (nota79 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno5c2m2);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota80 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno4c2m2);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc40 >= 7 && nota79 == 1 && nota80 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc40);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc40);

                                                if (strcmp(notaaluno40, "s") == 0 || strcmp(notaaluno40, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf40);
                                                    if (mg40 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg40);
                                                    } else {
                                                        if (mg40 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg40);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }

                                        break;
                                    }
                                    case 3:
                                    {
                                        printf("ALUNOS DO 1º SEMESTRE DE %s ::\n", curso2semestre2m1);
                                        if (aluno1c2m3 == 1) {
                                            printf("ALUNO - %s\n", nomealuno1c2m3);
                                            if (nota81 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno1c2m3);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota82 == 1) {
                                                printf("NOTA AV2 = %.2f \n", nota2_aluno1c2m3);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc41 >= 7 && nota81 == 1 && nota82 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f \n", calc41);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc41);

                                                if (strcmp(notaaluno41, "s") == 0 || strcmp(notaaluno41, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf41);
                                                    if (mg41 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg41);
                                                    } else {
                                                        if (mg41 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg41);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno2c2m3 == 1) {
                                            printf("ALUNO - %s\n", nomealuno2c2m3);
                                            if (nota83 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno2c2m3);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota84 == 1) {
                                                printf("NOTA AV2 = %.2f \n", nota2_aluno2c2m3);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc42 >= 7 && nota83 == 1 && nota84 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f \n", calc42);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f \n", calc42);

                                                if (strcmp(notaaluno42, "s") == 0 || strcmp(notaaluno42, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf42);
                                                    if (mg42 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg42);
                                                    } else {
                                                        if (mg42 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg42);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno3c2m3 == 1) {
                                            printf("ALUNO - %s\n", nomealuno3c2m3);
                                            if (nota45 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno3c2m3);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota46 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno3c2m3);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc43 >= 7 && nota85 == 1 && nota86 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc43);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc43);

                                                if (strcmp(notaaluno13, "s") == 0 || strcmp(notaaluno13, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf43);
                                                    if (mg43 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg43);
                                                    } else {
                                                        if (mg43 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg43);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno4c2m3 == 1) {
                                            printf("ALUNO - %s\n", nomealuno4c2m3);
                                            if (nota87 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno4c2m3);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota88 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno4c2m3);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc44 >= 7 && nota87 == 1 && nota88 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc44);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc44);

                                                if (strcmp(notaaluno44, "s") == 0 || strcmp(notaaluno44, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf44);
                                                    if (mg44 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg44);
                                                    } else {
                                                        if (mg44 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg44);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno5c2m3 == 1) {
                                            printf("ALUNO - %s\n", nomealuno5c2m3);
                                            if (nota89 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno5c2m3);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota90 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno4c2m3);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc45 >= 7 && nota89 == 1 && nota90 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc45);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc45);
                                            }
                                            if (strcmp(notaaluno45, "s") == 0 || strcmp(notaaluno45, "S") == 0) {
                                                printf("NOTA AVF = %.f \n", avf45);
                                                if (mg45 >= 5) {
                                                    printf("ALUNO APROVADO!\n");
                                                    printf("MEDIA = %.2f \n", mg45);
                                                } else {
                                                    if (mg45 < 5) {
                                                        printf("ALUNO REPROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg45);
                                                    }
                                                }
                                            } else {
                                                printf("NOTA AVF = NAO CADASTRADA\n");
                                            }
                                        }

                                        break;
                                    }
                                    case 4:
                                    {
                                        printf("ALUNOS DO 1º SEMESTRE DE %s ::\n", curso2semestre2m2);
                                        if (aluno1c2m4 == 1) {
                                            printf("ALUNO - %s\n", nomealuno1c2m3);
                                            if (nota91 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno1c2m4);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota92 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno1c2m4);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc46 >= 7 && nota91 == 1 && nota92 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc46);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc46);
                                            }
                                            if (strcmp(notaaluno46, "s") == 0 || strcmp(notaaluno46, "S") == 0) {
                                                printf("NOTA AVF = %.f \n", avf46);
                                                if (mg46 >= 5) {
                                                    printf("ALUNO APROVADO!\n");
                                                    printf("MEDIA = %.2f \n", mg46);
                                                } else {
                                                    if (mg46 < 5) {
                                                        printf("ALUNO REPROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg46);
                                                    }
                                                }
                                            } else {
                                                printf("NOTA AVF = NAO CADASTRADA\n");
                                            }
                                        }
                                        if (aluno2c2m4 == 1) {
                                            printf("ALUNO - %s\n", nomealuno2c2m4);
                                            if (nota93 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno2c2m4);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota94 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno2c2m4);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc47 >= 7 && nota93 == 1 && nota94 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc47);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc47);
                                            }
                                            if (strcmp(notaaluno47, "s") == 0 || strcmp(notaaluno47, "S") == 0) {
                                                printf("NOTA AVF = %.f \n", avf47);
                                                if (mg47 >= 5) {
                                                    printf("ALUNO APROVADO!\n");
                                                    printf("MEDIA = %.2f \n", mg47);
                                                } else {
                                                    if (mg17 < 5) {
                                                        printf("ALUNO REPROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg47);
                                                    }
                                                }
                                            } else {
                                                printf("NOTA AVF = NAO CADASTRADA\n");
                                            }
                                        }
                                        if (aluno3c2m4 == 1) {
                                            printf("ALUNO - %s\n", nomealuno3c2m4);
                                            if (nota95 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno3c2m4);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota96 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno3c2m4);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc48 >= 7 && nota95 == 1 && nota96 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc48);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc48);
                                            }
                                            if (strcmp(notaaluno48, "s") == 0 || strcmp(notaaluno48, "S") == 0) {
                                                printf("NOTA AVF = %.f \n", avf48);
                                                if (mg48 >= 5) {
                                                    printf("ALUNO APROVADO!\n");
                                                    printf("MEDIA = %.2f \n", mg48);
                                                } else {
                                                    if (mg48 < 5) {
                                                        printf("ALUNO REPROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg48);
                                                    }
                                                }
                                            } else {
                                                printf("NOTA AVF = NAO CADASTRADA\n");
                                            }
                                        }
                                        if (aluno4c2m4 == 1) {
                                            printf("ALUNO - %s\n", nomealuno4c2m4);
                                            if (nota97 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno4c2m4);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota98 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno4c2m4);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc49 >= 7 && nota97 == 1 && nota98 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc49);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc49);
                                            }
                                            if (strcmp(notaaluno49, "s") == 0 || strcmp(notaaluno49, "S") == 0) {
                                                printf("NOTA AVF = %.f \n", avf49);
                                                if (mg49 >= 5) {
                                                    printf("ALUNO APROVADO!\n");
                                                    printf("MEDIA = %.2f \n", mg49);
                                                } else {
                                                    if (mg49 < 5) {
                                                        printf("ALUNO REPROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg49);
                                                    }
                                                }
                                            } else {
                                                printf("NOTA AVF = NAO CADASTRADA\n");
                                            }
                                        }
                                        if (aluno5c2m4 == 1) {
                                            printf("ALUNO - %s\n", nomealuno5c2m4);
                                            if (nota99 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno5c2m4);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota100 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno4c2m4);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc50 >= 7 && nota99 == 1 && nota100 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc50);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc50);
                                            }
                                            if (strcmp(notaaluno50, "s") == 0 || strcmp(notaaluno50, "S") == 0) {
                                                printf("NOTA AVF = %.f \n", avf50);
                                                if (mg50 >= 5) {
                                                    printf("ALUNO APROVADO!\n");
                                                    printf("MEDIA = %.2f \n", mg50);
                                                } else {
                                                    if (mg50 < 5) {
                                                        printf("ALUNO REPROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg50);
                                                    }
                                                }
                                            } else {
                                                printf("NOTA AVF = NAO CADASTRADA\n");
                                            }
                                        }

                                        break;
                                    }
                                    case 5:
                                    {
                                        printf("ALUNOS DO 1º SEMESTRE DE %s ::\n", curso2semestre3m1);
                                        if (aluno1c2m5 == 1) {
                                            printf("ALUNO - %s\n", nomealuno1c2m5);
                                            if (nota101 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno1c2m5);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota102 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno1c2m5);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc51 >= 7 && nota101 == 1 && nota102 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc51);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc51);

                                                if (strcmp(notaaluno51, "s") == 0 || strcmp(notaaluno51, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf51);
                                                    if (mg51 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg51);
                                                    } else {
                                                        if (mg51 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg51);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno2c2m5 == 1) {
                                            printf("ALUNO - %s\n", nomealuno2c2m5);
                                            if (nota103 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno2c2m5);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota104 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno2c2m5);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc52 >= 7 && nota103 == 1 && nota104 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc52);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc52);

                                                if (strcmp(notaaluno52, "s") == 0 || strcmp(notaaluno52, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf52);
                                                    if (mg52 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg52);
                                                    } else {
                                                        if (mg52 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg52);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno3c2m5 == 1) {
                                            printf("ALUNO - %s\n", nomealuno3c2m5);
                                            if (nota105 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno3c2m5);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota106 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno3c2m5);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc53 >= 7 && nota105 == 1 && nota106 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc53);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc53);

                                                if (strcmp(notaaluno53, "s") == 0 || strcmp(notaaluno53, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf53);
                                                    if (mg53 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg53);
                                                    } else {
                                                        if (mg53 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg53);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno4c2m5 == 1) {
                                            printf("ALUNO - %s\n", nomealuno4c2m5);
                                            if (nota107 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno4c1m5);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota108 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno4c2m5);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc54 >= 7 && nota107 == 1 && nota108 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc54);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc54);

                                                if (strcmp(notaaluno54, "s") == 0 || strcmp(notaaluno54, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf54);
                                                    if (mg54 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg54);
                                                    } else {
                                                        if (mg24 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg54);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno5c2m5 == 1) {
                                            printf("ALUNO - %s\n", nomealuno5c2m5);
                                            if (nota109 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno5c2m5);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota9 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno4c1m5);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc55 >= 7 && nota109 == 1 && nota110 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc55);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc55);

                                                if (strcmp(notaaluno55, "s") == 0 || strcmp(notaaluno55, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf55);
                                                    if (mg55 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg55);
                                                    } else {
                                                        if (mg55 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg55);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        break;
                                    }
                                    case 6:
                                    {
                                        printf("ALUNOS DO 1º SEMESTRE DE %s ::\n", curso2semestre3m2);
                                        if (aluno1c2m6 == 1) {
                                            printf("ALUNO - %s\n", nomealuno1c1m6);
                                            if (nota111 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno1c2m6);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota112 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno1c2m6);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc56 >= 7 && nota111 == 1 && nota112 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc56);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc56);

                                                if (strcmp(notaaluno56, "s") == 0 || strcmp(notaaluno56, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf56);
                                                    if (mg56 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg56);
                                                    } else {
                                                        if (mg56 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg56);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno2c2m6 == 1) {
                                            printf("ALUNO - %s\n", nomealuno2c2m6);
                                            if (nota113 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno2c2m6);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota114 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno2c2m6);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc57 >= 7 && nota113 == 1 && nota114 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc57);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc57);

                                                if (strcmp(notaaluno57, "s") == 0 || strcmp(notaaluno57, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf57);
                                                    if (mg57 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg57);
                                                    } else {
                                                        if (mg57 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg57);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno3c2m6 == 1) {
                                            printf("ALUNO - %s\n", nomealuno3c2m6);
                                            if (nota115 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno3c2m6);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota116 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno3c2m6);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc58 >= 7 && nota115 == 1 && nota116 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc58);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc58);

                                                if (strcmp(notaaluno58, "s") == 0 || strcmp(notaaluno58, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf58);
                                                    if (mg58 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg58);
                                                    } else {
                                                        if (mg58 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg58);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno4c2m6 == 1) {
                                            printf("ALUNO - %s\n", nomealuno4c2m6);
                                            if (nota117 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno4c2m6);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota118 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno4c2m6);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc59 >= 7 && nota117 == 1 && nota118 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc59);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc59);

                                                if (strcmp(notaaluno59, "s") == 0 || strcmp(notaaluno59, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf59);
                                                    if (mg59 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg59);
                                                    } else {
                                                        if (mg59 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg59);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }
                                        if (aluno5c2m6 == 1) {
                                            printf("ALUNO - %s\n", nomealuno5c2m6);
                                            if (nota119 == 1) {
                                                printf("NOTA AV1 = %.2f \n", nota1_aluno5c2m6);
                                            } else {
                                                printf("NOTA AVI = NAO CADASTRADA\n");
                                            }
                                            if (nota120 == 1) {
                                                printf("NOTA AV2 = %.2f", nota2_aluno4c2m6);
                                            } else {
                                                printf("NOTA AV2 = NAO CADASTRADA\n");
                                            }
                                            if (calc60 >= 7 && nota119 == 1 && nota120 == 1) {
                                                printf("ALUNO ESTA APROVADO!\n");
                                                printf("MEDIA = %.2f", calc60);
                                            } else {
                                                printf("ALUNO EM AVF!\n");
                                                printf("MEDIA = %.2f", calc60);

                                                if (strcmp(notaaluno60, "s") == 0 || strcmp(notaaluno60, "S") == 0) {
                                                    printf("NOTA AVF = %.f \n", avf60);
                                                    if (mg60 >= 5) {
                                                        printf("ALUNO APROVADO!\n");
                                                        printf("MEDIA = %.2f \n", mg60);
                                                    } else {
                                                        if (mg60 < 5) {
                                                            printf("ALUNO REPROVADO!\n");
                                                            printf("MEDIA = %.2f \n", mg60);
                                                        }
                                                    }
                                                } else {
                                                    printf("NOTA AVF = NAO CADASTRADA\n");
                                                }
                                            }
                                        }

                                        break;
                                    }
                                }

                                break;
                            }
                        }//consultas_professor_aluno
                        break;
                    }
                }//switch consultas
                break;
            }
        }
        if (OpcaoMenu != 9) {
            printf("\n\n");
            printf("========================================================================\n");
            printf("VOLTAR AO MENU DIGITE [0]\n");
            printf("========================================================================\n");
            scanf("%d", &Menu);
            system("clear");
        } else {
            if (OpcaoMenu == 9) {
                Menu = 1;
            }
        }


    }

    return (EXIT_SUCCESS);
}

