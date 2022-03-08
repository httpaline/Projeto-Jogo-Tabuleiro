#include <stdio.h>
#include <stdlib.h>


//Tabuleiro
void tabuleiro()
{
    int i, j;
    char tabuleiro[8][8];

    for(i = 0; i < 8; i++)
    {
        for(j = 0; j < 8; j++)
        {
            tabuleiro[i][j] = ' ';
            tabuleiro[0][0] = 'P';
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
                printf("   %d", i);

        }
        if(i < 8)
        printf("\n\t----------------------------------------");
        printf("\n");
    }
}

//-----Primeira fase do jogo- Fila dinâmica-----
