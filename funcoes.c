#include "prototipos.h"
#include <stdio.h>
#include <stdlib.h>
void menu(){
    limparTela();
    printf("\n\t\t\tSPM - FUNCIONALIDADES\n");
    printf("1- Viatura Login\n");
    printf("2- Viatura em Uso\n");
    printf("3- COPOM\n");
    printf("4- Policia Militar\n");
    printf("5- Oficial\n");
    printf("6- Comandante Geral\n");
    printf("0- Encerrar o Programa\n");
    printf("Escolha uma opção: ");
}


void menuViatura(){
    limparTela();
    printf("1- Login na Viatura\n");
    printf("2- Atender Chamada Policial\n");
    printf("3- Buscar por CPF\n");
    printf("Escolha uma opção: ");
}

void menuTipoViatura(){
    limparTela();
    printf("1- Polícia Regular\n");
    printf("2- Polícia Especializada\n");
    printf("3- Voltar Para Menu Principal\n");
    printf("Escolha uma opção: ");
}

void menuCopom(){
    limparTela();
    printf("1- Cadastrar Chamada Policial\n");
    printf("Escolha uma opção: ");
}

void menuOficial(){
    limparTela();
    printf("1- Excluir Boletim de Ocorrência\n");
    printf("2- Gerar Relatório Geral\n");
    printf("Escolha uma opção: ");
}

void menuComandanteGeral(){
    limparTela();
    printf("1- Gerar Ofício de Ocorrências\n");
    printf("2- Gerar Boletim Diário\n");
    printf("Escolha uma opção: ");
}

void menuPM(){
    limparTela();
    printf("1- Cadastrar Boletim de Ocorrência\n");
    printf("Escolha uma opção: ");
}

void limparTela() {
    system("cls");
}

void leituraDadosViaturaLogin(char *codigoViatura, int *quantidadePM){

    
    printf("\n\t\t\tSPM - Viatura Login\n");
    printf("Código Viatura: ");
    scanf(" %s", codigoViatura);

    printf("\nQuantidade de PMs: ");
    scanf(" %d", quantidadePM);
    limparTela();
}

int validacaoQuantidadePM(int tipoViatura, int quantidadePM, struct viatura *viat, char *codigoViatura){
    if(tipoViatura == 1){
        if(quantidadePM >= 2 && quantidadePM <= 4){
            // faz as atribuições para a viatura assim como os nomes de guerras
            return 0;
        }
    }else{
        if(quantidadePM == 4){
            // faz as atribuições para a viatura assim como os nomes de guerras
            return 0;
        }
    }
    printf("Quantidade de Policial inválida\n");
    return 3; //inválido
}