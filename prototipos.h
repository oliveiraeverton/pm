#include <stdio.h>
struct viatura {
    char codigo[6];
    int tipoViatura;
    struct policial *pms;
};

struct pessoa{
    char nome[36];
    char cidade[36];
    int idade;
    int passagens;
    //outros...
};

struct policial{
    char nome[36];
    char nomeDeGuerra[8];
    char cidade[36];
    char cargo[36];
    char senha[36];
    int idade;
};
void menu();

void menuViatura();

void menuTipoViatura();

void menuCopom();

void menuOficial();

void menuComandanteGeral();

void menuPM();

void limparTela();

void leituraDadosViaturaLogin(char *codigoViatura, int *quantidadePM);

int validacaoQuantidadePM(int tipoViatura, int quantidadePM, struct viatura *viat, char *codigoViatura);