#include "prototipos.h"
#include <stdio.h>
#include <stdlib.h>
void menu(){
    limparTela();
    printf("\n\t\t\tSPM - FUNCIONALIDADES\n");
    printf("1- Viatura\n");
    printf("2- Viatura em Uso\n");
    printf("3- COPOM\n");
    printf("4- Policia Militar\n");
    printf("5- Oficial\n");
    printf("6- Comandante Geral\n");
    printf("0- Encerrar o Programa\n");
}


void menuViatura(){
    limparTela();
    printf("1- Login na Viatura\n");
    printf("2- Atender Chamada Policial\n");
    printf("3- Buscar por CPF\n");
}

void menuCopom(){
    limparTela();
    printf("1- Cadastrar Chamada Policial\n");
}

void menuOficial(){
    limparTela();
    printf("1- Excluir Boletim de Ocorrência\n");
    printf("2- Gerar Relatório Geral\n");
}

void menuComandanteGeral(){
    limparTela();
    printf("1- Gerar Ofício de Ocorrências\n");
    printf("2- Gerar Boletim Diário\n");
}

void menuPM(){
    limparTela();
    printf("1- Cadastrar Boletim de Ocorrência\n");
}

void limparTela() {
    system("cls");
}