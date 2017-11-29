#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <conio.h>


typedef struct alunos{
  char nomeAluno [50];
  int codAluno [10], cpf[12];
}ALUNO;

typedef struct livros{
char nomeLivro[50], nomeAutor[50], areaLivro[20];
int quantLivro, codLivro[10];
}LIVRO;

typedef struct{
 ALUNO a;
 LIVRO l;
}COMP;

void cabecalho();
void alunos ();
void cadastro ();

main (){

system ("color 80");
  int opcao;

printf("\t**********************************************************\n");
printf("\t                                                           \n");
printf("\tАААААААААААААААА   SISTEMA DE ACERVO DA   АААААААААААААААА\n\n");
printf("\tАААААААААААА  UNIVERSIDADE ESTADUAL DA PARAIBA ААААААААААА\n");
printf("\t                                                          \n");
printf("\t                                                          \n");
printf("\t**********************************************************\n");
system ("pause");
system ("cls");

do{

 cabecalho();
j:
system ("color 0A");
printf("\t\t      ААААААААА MENU PRINCIPAL АААААААААА \n\n");
printf("\t\t     | <1> ALUNO                         |\n\n");
printf("\t\t     | <2> LIVROS                        |\n\n");
printf("\t\t     | <3> EMPRESTIMO                    |\n\n");
printf("\t\t     | <4> SAIR DO SISTEMA               |\n\n");
printf("\t\t      ААААААААААААААААААААААААААААААААААА \n\n");

scanf("%d",&opcao);
system("cls");

switch (opcao){
     case 1:
         alunos ();
     break;

     case 2:
         //visualizar
     break;

     case 3:
         //pesquisar
     break;

     case 4:
         printf ("\t\t\tАААААААА BOA LEITURA ААААААА\n\n");
         printf ("\t\tААА LEMBRE-SE DA DATA DE ENTREGA DO LIVRO ААА");
         getch();
     break;

        default:

        system ("color 40");
        printf ("\n\n   А А А А А А А !!OPCAO INVALIDA!! А А А А А А А\n\n");
        printf("PRECIONE QUALQUER TECLA PARA VOLTAR AO MENU PRINCIPAL!");
        getch ();
        system("cls");
        goto j;

        break;
}

} while (opcao!=4);
}

void cabecalho(){
    system ("cls");
   printf ("\t\t          ---------------------------\n");
   printf ("\t\t          BEM VINDO AO MENU PRINCIPAL\n");
   printf ("\t\t          ---------------------------\n\n");

}

void alunos (){
    int opcao;

g:
system ("color 0f");
printf("\t\t        АААААААА MENU ALUNO АААААААА\n\n");
printf("\t\t     А <1> CADASTRAR ALUNO            А\n\n");
printf("\t\t     А <2> REMOVER ALUNO              А\n\n");
printf("\t\t     А <3> EDITAR ALUNO               А\n\n");
printf("\t\t     А <4> LISTAR ALUNOS CADASTRADOS  А\n\n");
printf("\t\t     А <5> VOLTAR AO MENU PRINCIPAL   А\n\n");


scanf("%d",&opcao);
system("cls");

switch (opcao){
     case 1:
         cadastro ();
     break;

     case 2:
         //visualizar
     break;

     case 3:
         //pesquisar
     break;

     case 4:
        //listar
     break;

     case 5:
     break;

     default:

        system ("color f0");
        printf ("\n\n   А А А А А А А !!OPCAO INVALIDA!! А А А А А А А\n\n");
        printf("PRECIONE QUALQUER TECLA PARA VOLTAR AO MENU 'ALUNO'!");
        getch ();
        system("cls");
        goto g;

        break;
}
}
void cadastro (){
    ALUNO x;
    struct ALUNO;

         printf ("АА C A D A S T R A M E N T O АА\n\n");
         printf ("Nome: ");
         fflush(stdin);
         gets (x.nomeAluno);
         printf ("\nCPF: ");
         scanf("%d",&x.cpf);
         fflush(stdin);
         printf("\nDigite um numero para ser o cod: ");
         scanf("%d",&x.codAluno);
         fflush(stdin);
}
