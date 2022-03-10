#include <stdio.h>
#include <stdlib.h>

//Tabuleiro
void tabuleiro()
{
    int i, j;
    char tabuleiro[8][8];

    //Definindo valores para cada posição
    for(i = 0; i < 8; i++)
    {
        for(j = 0; j < 8; j++)
        {
            tabuleiro[i][j] = ' ';
            tabuleiro[0][4] = 'X';
            tabuleiro[2][2] = 'X';
            tabuleiro[2][5] = 'X';
            tabuleiro[3][5] = 'X';
            tabuleiro[3][7] = 'X';
            tabuleiro[4][3] = 'X';
            tabuleiro[5][1] = 'X';
            tabuleiro[5][5] = 'X';
            tabuleiro[7][4] = 'X';
            tabuleiro[7][7] = 'O';
        }
    }

    //Imprimir tabuleiro
    printf("\n\n\t  0    1    2    3    4    5    6    7\n\n");
    for(i = 0; i < 8; i++)
    {
        for(j = 0; j < 8; j++)
        {
            if(j == 0)
            {
                printf("\t");
            }
            printf("%c   ", tabuleiro[i][j]);
            if(j < 7)
            {
                printf("|");
            }
            else if(j == 7)
                printf("  %d", i);
        }
        if(i < 8)
        printf("\n\t----------------------------------------");
        printf("\n");
    }
}

//-----Primeira fase do jogo- Fila dinâmica-----
void ComandosPF()
{
    char comando[3][2];
    int i, j;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j++)
        {
            comando[i][j] = ' ';
            comando[0][0] = 'F';
            comando[0][1] = 'F';
            comando[1][0] = 'D';
            comando[1][1] = 'F';
            comando[2][0] = 'E';
            comando[2][1] = 'F';
        }
    }

    //Imprimindo comandos
     for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j++)
        {
            if(j == 0)
            {
                printf("\t");
            }
            printf("%c  ", comando[i][j]);
            if(j < 2)
            {
                printf("|");
            }
        }
        if(i < 3)
        printf("\n\t-------");
        printf("\n");
    }
}

//Fila dinâmica

//Definicao do no
typedef struct sNO
{
    char info;
    struct sNO *prox;

}NO;

//Definicao de lista
typedef struct sFila
{
    NO *inicio;
    NO *fim;
     
}Fila;


//Funcao inicializar 
void inicializar(Fila *ptr)
{
    ptr -> inicio = NULL;
    ptr -> fim = NULL;
}

//Funcao lista vazia
int fila_vazia(Fila *ptr)
{
    if(ptr -> inicio ==  NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

//Funcao alocar
NO* alocar()
{
    return (NO*) malloc(sizeof(NO));
}

//funcao desalocar
void desalocar(Fila *q)
{
    free(q);
}










//-----Segunda fase do jogo- Pilha dinâmica-----
void ComandosSF()
{
    char comando[3][3];
    int i, j;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            comando[i][j] = ' ';
            comando[0][0] = 'F';
            comando[1][0] = 'D';
            comando[1][1] = 'F';
            comando[1][2] = 'F';
            comando[2][0] = 'E';
            comando[2][1] = 'F';
            comando[2][2] = 'F';
        }
    }

    //Imprimindo comandos
     for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(j == 0)
            {
                printf("\t");
            }
            printf("%c  ", comando[i][j]);
            if(j < 3)
            {
                printf("|");
            }
        }
        if(i < 4)
        printf("\n\t------------");
        printf("\n");
    }
}





//-----Terceira fase do jogo- Fila dinâmica - Pilha dinâmica-----
void ComandosTF()
{
    char comando[4][3];
    int i, j;

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 3; j++)
        {
            comando[i][j] = ' ';
            comando[0][0] = 'F';
            comando[0][1] = 'F';
            comando[0][2] = 'F';
            comando[1][0] = 'F';
            comando[1][1] = 'D';
            comando[2][0] = 'F';
            comando[2][1] = 'E';
            comando[3][0] = 'D';
        }
    }

    //Imprimindo comandos
     for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(j == 0)
            {
                printf("\t");
            }
            printf("%c  ", comando[i][j]);
            if(j < 3)
            {
                printf("|");
            }
        }
        if(i < 5)
        printf("\n\t------------");
        printf("\n");
    }
}
