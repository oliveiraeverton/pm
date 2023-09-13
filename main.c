#include <stdio.h>
#include "prototipos.h"


int main(){


    /************************************************ VARIAVEIS ******************************************/
    //FILE *policias, *viaturas, *pessoas;
    short int operacaoMenu = -1;
    struct viatura vetorViatura[10];

    /************************************************ ABERTURA DE ARQUIVOS ******************************************/
    //Caso alguma abertura de arquivo não abra corretamente o programa será fechado

    /*policiais = fopen("policias.txt", "r");

    if (policiais == NULL) {
        printf("Não foi possível abrir o arquivo.\n");
        return 1; 
    }


    viaturas = fopen("viaturas.txt", "r");

    if (viaturas == NULL) {
        printf("Não foi possível abrir o arquivo.\n");
        return 1; 
    }


    pessoas = fopen("pessoas.txt", "r");

    if (pessoas == NULL) {
        printf("Não foi possível abrir o arquivo.\n");
        return 1; 
    }*/

    do{
        menu();
        scanf("%hd", &operacaoMenu);


        if(operacaoMenu == 1){
            menuTipoViatura();
            
            char codigoViatura[6];
            int quantidadePM;

            short int operacaoTipoViatura = -1;
            scanf("%hd", &operacaoTipoViatura); // opções = 1, 2 e 3
            
            
            while(operacaoTipoViatura != 3){
                leituraDadosViaturaLogin(codigoViatura, &quantidadePM);
                if(operacaoTipoViatura == 1){
                    operacaoTipoViatura = validacaoQuantidadePM(1, quantidadePM, vetorViatura, codigoViatura);
                }else{
                    operacaoTipoViatura = validacaoQuantidadePM(2, quantidadePM, vetorViatura, codigoViatura);
                }
                
            }
            
            


        }else if(operacaoMenu == 2){
            menuViatura();

            short int operacaoViatura = -1;
            scanf("%hd", &operacaoViatura);


        }else if(operacaoMenu == 3){
            menuCopom();

        }else if(operacaoMenu == 4){
            menuPM();

        }else if(operacaoMenu == 5){
            menuOficial();

        }else if(operacaoMenu == 6){
            menuComandanteGeral();

        }

    }while(operacaoMenu != 0);
    limparTela();
    printf("Programa encerrado!\n");
    return 0;
}