/*
	UNIVERSIDADE CATOLICA DE PERNAMBUCO
	BACHAREL EM CIENCIA DA COMPUTACAO
	ALUNO: ALESSON FELIPE ISIDORIO SANTOS
	TURNO: NOITE 
	DISCIPLINA PRATICA DE PROGRAMACAO  -  JOGO DA VELHA EM C 
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdlib.h>
#define TAM 100
#define EMPATE 10
#define VitoriaPlayIO 1
#define VitoriaPlayIIX 0
#define JogadaValida 1
#define JogadaInvalida -1


typedef struct tabuleiro
{
	char matriz[3][3];
	int jogada;
}TABULEIRO;

TABULEIRO inicar_jogo(TABULEIRO tab){
	int i,j;
	for ( i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			tab.matriz[i][j]=' ';
		}
	}
	
	return tab;
}

TABULEIRO jogada_play_1(int posicao, TABULEIRO tab){
	if(posicao==1){
		if (tab.matriz[2][0] == ' ')
		{
			tab.matriz[2][0] = 'O';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[2][0] == 'O' || tab.matriz[2][0] == 'X'){
			tab.jogada= JogadaInvalida;
		}

	}else if(posicao==2){
		if (tab.matriz[2][1] == ' ')
		{
			tab.matriz[2][1]= 'O';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[2][1]== 'O' || tab.matriz[2][1]== 'X'){
			tab.jogada= JogadaInvalida;
		}
	}else if(posicao==3){

		if (tab.matriz[2][2] == ' ')
		{
			tab.matriz[2][2]= 'O';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[2][2]== 'O' || tab.matriz[2][2]== 'X'){
			tab.jogada= JogadaInvalida;
		}
	}else if(posicao==4){

		if (tab.matriz[1][0] == ' ')
		{
			tab.matriz[1][0]= 'O';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[1][0]== 'O' || tab.matriz[1][0]== 'X'){
			tab.jogada= JogadaInvalida;
		}
	}else if(posicao==5){
		if (tab.matriz[1][1] == ' ')
		{
			tab.matriz[1][1]= 'O';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[1][1]== 'O' || tab.matriz[1][1]== 'X'){
			tab.jogada= JogadaInvalida;
		}
	}else if(posicao==6){
		if (tab.matriz[1][2] == ' ')
		{
			tab.matriz[1][2]= 'O';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[1][2]== 'O' || tab.matriz[1][2]== 'X'){
			tab.jogada= JogadaInvalida;
		}
	}else if(posicao==7){
		if (tab.matriz[0][0] == ' ')
		{
			tab.matriz[0][0]= 'O';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[0][0]== 'O' || tab.matriz[0][0]== 'X'){
			tab.jogada= JogadaInvalida;
		}
	}else if(posicao==8){
		if (tab.matriz[0][1] == ' ')
		{
			tab.matriz[0][1] = 'O';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[0][1] == 'O' || tab.matriz[0][1] == 'X'){
			tab.jogada= JogadaInvalida;
		}
	}else if(posicao==9){
		if (tab.matriz[0][2] == ' ')
		{
			tab.matriz[0][2]= 'O';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[0][2]== 'O' || tab.matriz[0][2]== 'X'){
			tab.jogada= JogadaInvalida;
		}
	}else{
		tab.jogada= JogadaInvalida;
	}
	return tab;
}

TABULEIRO jogada_play_2(int posicao, TABULEIRO tab){
	if(posicao==1){
		if (tab.matriz[2][0] == ' ')
		{
			tab.matriz[2][0] = 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[2][0] == 'O' || tab.matriz[2][0] == 'X'){
			tab.jogada= JogadaInvalida;
		}

	}else if(posicao==2){
		if (tab.matriz[2][1] == ' ')
		{
			tab.matriz[2][1]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[2][1]== 'O' || tab.matriz[2][1]== 'X'){
			tab.jogada= JogadaInvalida;
		}
	}else if(posicao==3){

		if (tab.matriz[2][2] == ' ')
		{
			tab.matriz[2][2]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[2][2]== 'O' || tab.matriz[2][2]== 'X'){
			tab.jogada= JogadaInvalida;
		}
	}else if(posicao==4){

		if (tab.matriz[1][0] == ' ')
		{
			tab.matriz[1][0]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[1][0]== 'O' || tab.matriz[1][0]== 'X'){
			tab.jogada= JogadaInvalida;
		}
	}else if(posicao==5){
		if (tab.matriz[1][1] == ' ')
		{
			tab.matriz[1][1]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[1][1]== 'O' || tab.matriz[1][1]== 'X'){
			tab.jogada= JogadaInvalida;
		}
	}else if(posicao==6){
		if (tab.matriz[1][2] == ' ')
		{
			tab.matriz[1][2]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[1][2]== 'O' || tab.matriz[1][2]== 'X'){
			tab.jogada= JogadaInvalida;
		}
	}else if(posicao==7){
		if (tab.matriz[0][0] == ' ')
		{
			tab.matriz[0][0]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[0][0]== 'O' || tab.matriz[0][0]== 'X'){
			tab.jogada= JogadaInvalida;
		}
	}else if(posicao==8){
		if (tab.matriz[0][1] == ' ')
		{
			tab.matriz[0][1] = 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[0][1] == 'O' || tab.matriz[0][1] == 'X'){
			tab.jogada= JogadaInvalida;
		}
	}else if(posicao==9){
		if (tab.matriz[0][2] == ' ')
		{
			tab.matriz[0][2]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[0][2]== 'O' || tab.matriz[0][2]== 'X'){
			tab.jogada= JogadaInvalida;
		}
	}else{
		tab.jogada= JogadaInvalida;
	}
	return tab;
}

int verifica_ganhador(TABULEIRO tab){
	int i,j;
	if((tab.matriz[0][0]=='O' && tab.matriz[0][1]=='O' && tab.matriz[0][2]=='O')||
           (tab.matriz[1][0]=='O' && tab.matriz[1][1]=='O' && tab.matriz[1][2]=='O')||
           (tab.matriz[2][0]=='O' && tab.matriz[2][1]=='O' && tab.matriz[2][2]=='O')||
           (tab.matriz[0][0]=='O' && tab.matriz[1][0]=='O' && tab.matriz[2][0]=='O')||
           (tab.matriz[0][1]=='O' && tab.matriz[1][1]=='O' && tab.matriz[2][1]=='O')||
           (tab.matriz[0][2]=='O' && tab.matriz[1][2]=='O' && tab.matriz[2][2]=='O')||
           (tab.matriz[0][0]=='O' && tab.matriz[1][1]=='O' && tab.matriz[2][2]=='O')||
           (tab.matriz[0][2]=='O' && tab.matriz[1][1]=='O' && tab.matriz[2][0]=='O'))
        {
				return VitoriaPlayIO;
        }
        if((tab.matriz[0][0]=='X' && tab.matriz[0][1]=='X' && tab.matriz[0][2]=='X')||
           (tab.matriz[1][0]=='X' && tab.matriz[1][1]=='X' && tab.matriz[1][2]=='X')||
           (tab.matriz[2][0]=='X' && tab.matriz[2][1]=='X' && tab.matriz[2][2]=='X')||
           (tab.matriz[0][0]=='X' && tab.matriz[1][0]=='X' && tab.matriz[2][0]=='X')||
           (tab.matriz[0][1]=='X' && tab.matriz[1][1]=='X' && tab.matriz[2][1]=='X')||
           (tab.matriz[0][2]=='X' && tab.matriz[1][2]=='X' && tab.matriz[2][2]=='X')||
           (tab.matriz[0][0]=='X' && tab.matriz[1][1]=='X' && tab.matriz[2][2]=='X')||
           (tab.matriz[0][2]=='X' && tab.matriz[1][1]=='X' && tab.matriz[2][0]=='X'))
        {
				return VitoriaPlayIIX;
        }
		for ( i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				if(tab.matriz[i][j]==' '){
				return -1;
				}
			}
		}
		return  EMPATE;
}

void tela(TABULEIRO tab){
	printf("Jogador1  O | Jogador2/ Computador X\n");
	printf("\t\t\t\t      |   |    \n");					
	printf("\t\t\t\t   %c  | %c | %c \n",tab.matriz[0][0],tab.matriz[0][1],tab.matriz[0][2]);
	printf("\t\t\t\t      |   |    \n");					
	printf("\t\t\t\t _____ ___ ____\n");
	printf("\t\t\t\t      |   |    \n");					
	printf("\t\t\t\t   %c  | %c | %c\n",tab.matriz[1][0],tab.matriz[1][1],tab.matriz[1][2]);
	printf("\t\t\t\t      |   |    \n");					
	printf("\t\t\t\t _____ ___ ____\n");
	printf("\t\t\t\t      |   |    \n");					
	printf("\t\t\t\t   %c  | %c | %c \n",tab.matriz[2][0],tab.matriz[2][1],tab.matriz[2][2]);
	printf("\t\t\t\t      |   |    \n");
								
}

void tela_inicial(){
	printf("\n\n\n\t\t--------------------JOGO DA VELHA--------------------\n");
	printf("\t\t\t\t(1) - Novo JOGO \n");
	printf("\t\t\t\t(0) - SAIR\n");
	printf("\t\t-----------------------------------------------------\n");
	printf("\t\t\t\t      |   |    \n");					
	printf("\t\t\t\t    X | O | O  \n");
	printf("\t\t\t\t      |   |    \n");					
	printf("\t\t\t\t _____ ___ ____\n");
	printf("\t\t\t\t      |   |    \n");					
	printf("\t\t\t\t    O | X | X \n");
	printf("\t\t\t\t      |   |    \n");					
	printf("\t\t\t\t _____ ___ ____\n");
	printf("\t\t\t\t      |   |    \n");					
	printf("\t\t\t\t    X | O | O \n");
	printf("\t\t\t\t      |   |    \n\n\n");
	printf("DIGITE A OPCAO DESEJADA: ");
}

void tela_novo_jogo(){
	printf("\n\n\n\t\t--------------------JOGO DA VELHA--------------------\n");
	printf("\t\t\t\t(1) - PLAY 1 VS. PLAY2 \n");
	printf("\t\t\t\t(2) - PLAY 1 VS. COMPUTADOR\n");
	printf("\t\t\t\t(0) - SAIR\n");
	printf("\t\t-----------------------------------------------------\n");
	printf("\t\t\t\t      |   |    \n");					
	printf("\t\t\t\t   7  | 8 | 9  \n");
	printf("\t\t\t\t      |   |    \n");					
	printf("\t\t\t\t _____ ___ ____\n");
	printf("\t\t\t\t      |   |    \n");					
	printf("\t\t\t\t    4 | 5 | 6 \n");
	printf("\t\t\t\t      |   |    \n");					
	printf("\t\t\t\t _____ ___ ____\n");
	printf("\t\t\t\t      |   |    \n");					
	printf("\t\t\t\t    1 | 2 | 3 \n");
	printf("\t\t\t\t      |   |    \n");
	printf("\n\t O NUM DO TECLADO FOI USADO PARA BASEAR AS POSICOES DO TABULEIRO\n");
	printf("\n\t ULTILIZE OS NUMEROS PARA ESCOLHER A POSICAO DA JOGADA\n\n");
	printf("DIGITE A OPCAO DESEJADA: ");

}

void tela_de_nivel(){
	printf("\n\n\n\t\t--------------------    NIVEL     --------------------\n");
	printf("\t\t\t\t(1) - FACIL\n");
	printf("\t\t\t\t(2) - MEDIO\n");
	printf("\t\t\t\t(3) - DIFICIL\n");
	printf("\t\t\t\t(0) - SAIR\n");
	printf("\t\t-----------------------------------------------------\n\n\n");
	printf("DIGITE A OPCAO DESEJADA: ");

}

TABULEIRO nivel_medio(TABULEIRO tab, int posicao){ // bloqueio das jogadas do oponente
	int posicao_aux=0;
	
	if (tab.matriz[0][0]=='X' && tab.matriz[0][1]=='X' &&tab.matriz[0][2]==' ')
	{
		tab.matriz[0][2]='X';
		tab.jogada=JogadaValida;
	}else if (tab.matriz[0][1]=='X' && tab.matriz[0][2]=='X' &&tab.matriz[0][0]==' ')
	{
		tab.matriz[0][0]='X';
		tab.jogada=JogadaValida;
	}else if (tab.matriz[0][0]=='X' && tab.matriz[0][2]=='X' &&tab.matriz[0][1]==' ')
	{
		tab.matriz[0][1]='X';
		tab.jogada=JogadaValida;
	}else if (tab.matriz[0][0]=='X' && tab.matriz[1][0]=='X' &&tab.matriz[2][0]==' ')
	{
		tab.matriz[2][0]='X';
		tab.jogada=JogadaValida;
	}else if (tab.matriz[0][0]=='X' && tab.matriz[2][0]=='X' &&tab.matriz[1][0]==' ')
	{
		tab.matriz[1][0]='X';
		tab.jogada=JogadaValida;
	}else if (tab.matriz[1][0]=='X' && tab.matriz[2][0]=='X' &&tab.matriz[0][0]==' ')
	{
		tab.matriz[0][0]='X';
		tab.jogada=JogadaValida;
	}else if (tab.matriz[0][0]=='X' && tab.matriz[1][1]=='X' &&tab.matriz[2][2]==' ')
	{
		tab.matriz[2][2]='X';
		tab.jogada=JogadaValida;
	}else if (tab.matriz[0][0]=='X' && tab.matriz[2][2]=='X' &&tab.matriz[1][1]==' ')
	{
		tab.matriz[1][1]='X';
		tab.jogada=JogadaValida;
	}else if (tab.matriz[2][2]=='X' && tab.matriz[1][1]=='X' &&tab.matriz[0][0]==' ')
	{
		tab.matriz[0][0]='X';
		tab.jogada=JogadaValida;
	}else if (tab.matriz[0][1]=='X' && tab.matriz[1][1]=='X' &&tab.matriz[2][1]==' ')
	{
		tab.matriz[2][1]='X';
		tab.jogada=JogadaValida;
	}else if (tab.matriz[0][1]=='X' && tab.matriz[2][1]=='X' &&tab.matriz[1][1]==' ')
	{
		tab.matriz[1][1]='X';
		tab.jogada=JogadaValida;
	}else if (tab.matriz[1][1]=='X' && tab.matriz[2][1]=='X' &&tab.matriz[0][1]==' ')
	{
		tab.matriz[0][1]='X';
		tab.jogada=JogadaValida;
	}else if (tab.matriz[0][2]=='X' && tab.matriz[1][1]=='X' &&tab.matriz[2][0]==' ')
	{
		tab.matriz[2][0]='X';
		tab.jogada=JogadaValida;
	}else if (tab.matriz[0][2]=='X' && tab.matriz[2][0]=='X' &&tab.matriz[1][1]==' ')
	{
		tab.matriz[1][1]='X';
		tab.jogada=JogadaValida;
	}else if (tab.matriz[1][1]=='X' && tab.matriz[2][0]=='X' &&tab.matriz[0][2]==' ')
	{
		tab.matriz[0][2]='X';
		tab.jogada=JogadaValida;
	}else if (tab.matriz[0][2]=='X' && tab.matriz[1][2]=='X' &&tab.matriz[2][2]==' ')
	{
		tab.matriz[2][2]='X';
		tab.jogada=JogadaValida;
	}else if (tab.matriz[0][2]=='X' && tab.matriz[2][2]=='X' &&tab.matriz[1][2]==' ')
	{
		tab.matriz[1][2]='X';
		tab.jogada=JogadaValida;
	}else if (tab.matriz[1][2]=='X' && tab.matriz[2][2]=='X' &&tab.matriz[0][2]==' ')
	{
		tab.matriz[0][2]='X';
		tab.jogada=JogadaValida;
	}else if(tab.matriz[1][0]=='X' && tab.matriz[1][1]=='X' &&tab.matriz[1][2]==' ')
	{
		tab.matriz[1][2]='X';
		tab.jogada=JogadaValida;
	}else if(tab.matriz[1][0]=='X' && tab.matriz[1][2]=='X' &&tab.matriz[1][1]==' ')
	{
		tab.matriz[1][1]='X';
		tab.jogada=JogadaValida;
	}else if(tab.matriz[1][1]=='X' && tab.matriz[1][1]=='X' &&tab.matriz[1][0]==' ')
	{
		tab.matriz[1][0]='X';
		tab.jogada=JogadaValida;
	}else if(tab.matriz[2][0]=='X' && tab.matriz[2][1]=='X' &&tab.matriz[2][2]==' ')
	{
		tab.matriz[2][2]='X';
		tab.jogada=JogadaValida;
	}else if(tab.matriz[2][0]=='X' && tab.matriz[2][2]=='X' &&tab.matriz[2][1]==' ')
	{
		tab.matriz[2][1]='X';
		tab.jogada=JogadaValida;
	}else if(tab.matriz[2][1]=='X' && tab.matriz[2][2]=='X' &&tab.matriz[2][0]==' ')
	{
		tab.matriz[2][0]='X';
		tab.jogada=JogadaValida;
	}else if(posicao==1){
		if( tab.matriz[1][0]== 'O' && tab.matriz[0][0]==' '){
			tab.matriz[0][0]= 'X';
			tab.jogada=JogadaValida;
		}else if( tab.matriz[0][0]== 'O' && tab.matriz[1][0]==' '){
			tab.matriz[1][0]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[1][1]== 'O' && tab.matriz[0][2]== ' '){
			tab.matriz[0][2]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[0][2]== 'O' && tab.matriz[1][1]== ' '){
			tab.matriz[1][1]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[2][1]== 'O' && tab.matriz[2][2]== ' ' ){
			tab.matriz[2][2]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[2][2]== 'O' && tab.matriz[2][1]== ' '){
			tab.matriz[2][1]= 'X';
			tab.jogada=JogadaValida;
		}else{
			do{
				do
				{
					posicao=rand();
				} while (posicao<0 ||posicao>2);

				do
				{
					posicao_aux=rand();
				} while (posicao_aux<0 ||posicao_aux>2);
			
				if(tab.matriz[posicao][posicao_aux]== ' '){
					tab.matriz[posicao][posicao_aux]= 'X';
					tab.jogada=JogadaValida;
				}else
				{
					tab.jogada=	JogadaInvalida;
				}
			}while(tab.jogada!= JogadaValida);
		}
	}else if(posicao==2){
		if( tab.matriz[2][0]== 'O' && tab.matriz[2][2]==' '){
			tab.matriz[2][2]= 'X';
			tab.jogada=JogadaValida;
		}else if( tab.matriz[2][2]== 'O' && tab.matriz[2][0]==' '){
			tab.matriz[2][0]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[1][1]== 'O' && tab.matriz[0][1]== ' '){
			tab.matriz[0][1]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[0][1]== 'O' && tab.matriz[1][1]== ' '){
			tab.matriz[1][1]= 'X';
			tab.jogada=JogadaValida;
		}else{
			do{
				do
				{
					posicao=rand();
				} while (posicao<0 ||posicao>2);

				do
				{
					posicao_aux=rand();
				} while (posicao_aux<0 ||posicao_aux>2);
			
				if(tab.matriz[posicao][posicao_aux]== ' '){
					tab.matriz[posicao][posicao_aux]= 'X';
					tab.jogada=JogadaValida;
				}else
				{
					tab.jogada=	JogadaInvalida;
				}
			}while(tab.jogada!= JogadaValida);
		}
	}else if(posicao==3){
		if( tab.matriz[2][0]== 'O' && tab.matriz[2][1]==' '){
			tab.matriz[2][1]= 'X';
			tab.jogada=JogadaValida;
		}else if( tab.matriz[2][1]== 'O' && tab.matriz[2][0]==' '){
			tab.matriz[2][0]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[1][1]== 'O' && tab.matriz[0][0]== ' '){
			tab.matriz[0][0]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[0][0]== 'O' && tab.matriz[1][1]== ' '){
			tab.matriz[1][1]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[1][2]== 'O' && tab.matriz[0][2]== ' ' ){
			tab.matriz[0][2]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[0][2]== 'O' && tab.matriz[1][2]== ' '){
			tab.matriz[1][2]= 'X';
			tab.jogada=JogadaValida;
		}else{
			do{
				do
				{
					posicao=rand();
				} while (posicao<0 ||posicao>2);

				do
				{
					posicao_aux=rand();
				} while (posicao_aux<0 ||posicao_aux>2);
			
				if(tab.matriz[posicao][posicao_aux]== ' '){
					tab.matriz[posicao][posicao_aux]= 'X';
					tab.jogada=JogadaValida;
				}else
				{
					tab.jogada=	JogadaInvalida;
				}
			}while(tab.jogada!= JogadaValida);
		}
	}else if(posicao==4){
		if( tab.matriz[0][0]== 'O' && tab.matriz[2][0]==' '){
				tab.matriz[2][0]= 'X';
				tab.jogada=JogadaValida;
			}else if( tab.matriz[2][0]== 'O' && tab.matriz[0][0]==' '){
				tab.matriz[0][0]= 'X';
				tab.jogada=JogadaValida;
			}else if(tab.matriz[1][1]== 'O' && tab.matriz[1][2]== ' '){
				tab.matriz[1][2]= 'X';
				tab.jogada=JogadaValida;
			}else if(tab.matriz[1][2]== 'O' && tab.matriz[1][1]== ' '){
				tab.matriz[1][1]= 'X';
				tab.jogada=JogadaValida;
			}else{
				do{
					do
					{
						posicao=rand();
					} while (posicao<0 ||posicao>2);

					do
					{
						posicao_aux=rand();
					} while (posicao_aux<0 ||posicao_aux>2);
			
					if(tab.matriz[posicao][posicao_aux]== ' '){
						tab.matriz[posicao][posicao_aux]= 'X';
						tab.jogada=JogadaValida;
					}else
					{
						tab.jogada=	JogadaInvalida;
					}
				}while(tab.jogada!= JogadaValida);
			}
	}else if(posicao==5){
		if( tab.matriz[0][0]== 'O' && tab.matriz[2][2]==' '){
			tab.matriz[2][2]= 'X';
			tab.jogada=JogadaValida;
		}else if( tab.matriz[2][2]== 'O' && tab.matriz[0][0]==' '){
			tab.matriz[0][0]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[0][1]== 'O' && tab.matriz[2][1]== ' '){
			tab.matriz[2][1]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[2][1]== 'O' && tab.matriz[0][1]== ' '){
			tab.matriz[0][1]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[0][2]== 'O' && tab.matriz[2][0]== ' ' ){
			tab.matriz[2][0]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[2][0]== 'O' && tab.matriz[0][2]== ' '){
			tab.matriz[0][2]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[1][0]== 'O' && tab.matriz[1][2]== ' '){
			tab.matriz[1][2]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[1][2]== 'O' && tab.matriz[1][0]== ' '){
			tab.matriz[1][0]= 'X';
			tab.jogada=JogadaValida;
		}else{
			do{
				do
				{
					posicao=rand();
				} while (posicao<0 ||posicao>2);

				do
				{
					posicao_aux=rand();
				} while (posicao_aux<0 ||posicao_aux>2);
			
				if(tab.matriz[posicao][posicao_aux]== ' '){
					tab.matriz[posicao][posicao_aux]= 'X';
					tab.jogada=JogadaValida;
				}else
				{
					tab.jogada=	JogadaInvalida;
				}
			}while(tab.jogada!= JogadaValida);
		}
	}else if(posicao==6){
		if( tab.matriz[0][2]== 'O' && tab.matriz[2][2]==' '){
			tab.matriz[2][2]= 'X';
			tab.jogada=JogadaValida;
		}else if( tab.matriz[2][2]== 'O' && tab.matriz[0][2]==' '){
			tab.matriz[1][0]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[1][1]== 'O' && tab.matriz[1][0]== ' '){
			tab.matriz[1][0]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[1][0]== 'O' && tab.matriz[1][1]== ' '){
			tab.matriz[1][1]= 'X';
			tab.jogada=JogadaValida;
		}else{
			do{
				do
				{
					posicao=rand();
				} while (posicao<0 ||posicao>2);

				do
				{
					posicao_aux=rand();
				} while (posicao_aux<0 ||posicao_aux>2);
			
				if(tab.matriz[posicao][posicao_aux]== ' '){
					tab.matriz[posicao][posicao_aux]= 'X';
					tab.jogada=JogadaValida;
				}else
				{
					tab.jogada=	JogadaInvalida;
				}
			}while(tab.jogada!= JogadaValida);
		}
	}else if(posicao==7){
	if( tab.matriz[1][0]== 'O' && tab.matriz[2][0]==' '){
			tab.matriz[2][0]= 'X';
			tab.jogada=JogadaValida;
		}else if( tab.matriz[2][0]== 'O' && tab.matriz[1][0]==' '){
			tab.matriz[1][0]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[1][1]== 'O' && tab.matriz[2][2]== ' '){
			tab.matriz[2][2]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[2][2]== 'O' && tab.matriz[1][1]== ' '){
			tab.matriz[1][1]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[0][1]== 'O' && tab.matriz[0][2]== ' ' ){
			tab.matriz[0][2]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[0][2]== 'O' && tab.matriz[0][1]== ' '){
			tab.matriz[0][1]= 'X';
			tab.jogada=JogadaValida;
		}else{
			do{
				do
				{
					posicao=rand();
				} while (posicao<0 ||posicao>2);

				do
				{
					posicao_aux=rand();
				} while (posicao_aux<0 ||posicao_aux>2);
			
				if(tab.matriz[posicao][posicao_aux]== ' '){
					tab.matriz[posicao][posicao_aux]= 'X';
					tab.jogada=JogadaValida;
				}else
				{
					tab.jogada=	JogadaInvalida;
				}
			}while(tab.jogada!= JogadaValida);
		}

	}else if(posicao==8){
		if( tab.matriz[0][0]== 'O' && tab.matriz[0][2]==' '){
			tab.matriz[0][2]= 'X';
			tab.jogada=JogadaValida;
		}else if( tab.matriz[0][2]== 'O' && tab.matriz[0][0]==' '){
			tab.matriz[0][0]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[1][1]== 'O' && tab.matriz[2][1]== ' '){
			tab.matriz[2][1]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[2][1]== 'O' && tab.matriz[1][1]== ' '){
			tab.matriz[1][1]= 'X';
			tab.jogada=JogadaValida;
		}else{
			do{
				do
				{
					posicao=rand();
				} while (posicao<0 ||posicao>2);

				do
				{
					posicao_aux=rand();
				} while (posicao_aux<0 ||posicao_aux>2);
			
				if(tab.matriz[posicao][posicao_aux]== ' '){
					tab.matriz[posicao][posicao_aux]= 'X';
					tab.jogada=JogadaValida;
				}else
				{
					tab.jogada=	JogadaInvalida;
				}
			}while(tab.jogada!= JogadaValida);
		}
	}else if(posicao==9){
		if( tab.matriz[0][0]== 'O' && tab.matriz[0][1]==' '){
			tab.matriz[0][1]= 'X';
			tab.jogada=JogadaValida;
		}else if( tab.matriz[0][1]== 'O' && tab.matriz[0][0]==' '){
			tab.matriz[0][0]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[1][1]== 'O' && tab.matriz[2][0]== ' '){
			tab.matriz[2][0]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[2][0]== 'O' && tab.matriz[1][1]== ' '){
			tab.matriz[1][1]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[1][2]== 'O' && tab.matriz[2][2]== ' ' ){
			tab.matriz[2][2]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[2][2]== 'O' && tab.matriz[1][2]== ' '){
			tab.matriz[1][2]= 'X';
			tab.jogada=JogadaValida;
		}else{
			do{
				do
				{
					posicao=rand();
				} while (posicao<0 ||posicao>2);

				do
				{
					posicao_aux=rand();
				} while (posicao_aux<0 ||posicao_aux>2);
			
				if(tab.matriz[posicao][posicao_aux]== ' '){
					tab.matriz[posicao][posicao_aux]= 'X';
					tab.jogada=JogadaValida;
				}else
				{
					tab.jogada=	JogadaInvalida;
				}
			}while(tab.jogada!= JogadaValida);
		}
	}
	return tab;
}

TABULEIRO nivel_dificil(TABULEIRO tab, int posicao){
	int posicao_aux=0;
	
	if (tab.matriz[0][0]=='X' && tab.matriz[0][1]=='X' &&tab.matriz[0][2]==' ')
	{
		tab.matriz[0][2]='X';
		tab.jogada=JogadaValida;
	}else if (tab.matriz[0][1]=='X' && tab.matriz[0][2]=='X' &&tab.matriz[0][0]==' ')
	{
		tab.matriz[0][0]='X';
		tab.jogada=JogadaValida;
	}else if (tab.matriz[0][0]=='X' && tab.matriz[0][2]=='X' &&tab.matriz[0][1]==' ')
	{
		tab.matriz[0][1]='X';
		tab.jogada=JogadaValida;
	}else if (tab.matriz[0][0]=='X' && tab.matriz[1][0]=='X' &&tab.matriz[2][0]==' ')
	{
		tab.matriz[2][0]='X';
		tab.jogada=JogadaValida;
	}else if (tab.matriz[0][0]=='X' && tab.matriz[2][0]=='X' &&tab.matriz[1][0]==' ')
	{
		tab.matriz[1][0]='X';
		tab.jogada=JogadaValida;
	}else if (tab.matriz[1][0]=='X' && tab.matriz[2][0]=='X' &&tab.matriz[0][0]==' ')
	{
		tab.matriz[0][0]='X';
		tab.jogada=JogadaValida;
	}else if (tab.matriz[0][0]=='X' && tab.matriz[1][1]=='X' &&tab.matriz[2][2]==' ')
	{
		tab.matriz[2][2]='X';
		tab.jogada=JogadaValida;
	}else if (tab.matriz[0][0]=='X' && tab.matriz[2][2]=='X' &&tab.matriz[1][1]==' ')
	{
		tab.matriz[1][1]='X';
		tab.jogada=JogadaValida;
	}else if (tab.matriz[2][2]=='X' && tab.matriz[1][1]=='X' &&tab.matriz[0][0]==' ')
	{
		tab.matriz[0][0]='X';
		tab.jogada=JogadaValida;
	}else if (tab.matriz[0][1]=='X' && tab.matriz[1][1]=='X' &&tab.matriz[2][1]==' ')
	{
		tab.matriz[2][1]='X';
		tab.jogada=JogadaValida;
	}else if (tab.matriz[0][1]=='X' && tab.matriz[2][1]=='X' &&tab.matriz[1][1]==' ')
	{
		tab.matriz[1][1]='X';
		tab.jogada=JogadaValida;
	}else if (tab.matriz[1][1]=='X' && tab.matriz[2][1]=='X' &&tab.matriz[0][1]==' ')
	{
		tab.matriz[0][1]='X';
		tab.jogada=JogadaValida;
	}else if (tab.matriz[0][2]=='X' && tab.matriz[1][1]=='X' &&tab.matriz[2][0]==' ')
	{
		tab.matriz[2][0]='X';
		tab.jogada=JogadaValida;
	}else if (tab.matriz[0][2]=='X' && tab.matriz[2][0]=='X' &&tab.matriz[1][1]==' ')
	{
		tab.matriz[1][1]='X';
		tab.jogada=JogadaValida;
	}else if (tab.matriz[1][1]=='X' && tab.matriz[2][0]=='X' &&tab.matriz[0][2]==' ')
	{
		tab.matriz[0][2]='X';
		tab.jogada=JogadaValida;
	}else if (tab.matriz[0][2]=='X' && tab.matriz[1][2]=='X' &&tab.matriz[2][2]==' ')
	{
		tab.matriz[2][2]='X';
		tab.jogada=JogadaValida;
	}else if (tab.matriz[0][2]=='X' && tab.matriz[2][2]=='X' &&tab.matriz[1][2]==' ')
	{
		tab.matriz[1][2]='X';
		tab.jogada=JogadaValida;
	}else if (tab.matriz[1][2]=='X' && tab.matriz[2][2]=='X' &&tab.matriz[0][2]==' ')
	{
		tab.matriz[0][2]='X';
		tab.jogada=JogadaValida;
	}else if(tab.matriz[1][0]=='X' && tab.matriz[1][1]=='X' &&tab.matriz[1][2]==' ')
	{
		tab.matriz[1][2]='X';
		tab.jogada=JogadaValida;
	}else if(tab.matriz[1][0]=='X' && tab.matriz[1][2]=='X' &&tab.matriz[1][1]==' ')
	{
		tab.matriz[1][1]='X';
		tab.jogada=JogadaValida;
	}else if(tab.matriz[1][1]=='X' && tab.matriz[1][1]=='X' &&tab.matriz[1][0]==' ')
	{
		tab.matriz[1][0]='X';
		tab.jogada=JogadaValida;
	}else if(tab.matriz[2][0]=='X' && tab.matriz[2][1]=='X' &&tab.matriz[2][2]==' ')
	{
		tab.matriz[2][2]='X';
		tab.jogada=JogadaValida;
	}else if(tab.matriz[2][0]=='X' && tab.matriz[2][2]=='X' &&tab.matriz[2][1]==' ')
	{
		tab.matriz[2][1]='X';
		tab.jogada=JogadaValida;
	}else if(tab.matriz[2][1]=='X' && tab.matriz[2][2]=='X' &&tab.matriz[2][0]==' ')
	{
		tab.matriz[2][0]='X';
		tab.jogada=JogadaValida;
	}else if(posicao==1){
		if( tab.matriz[1][0]== 'O' && tab.matriz[0][0]==' '){
			tab.matriz[0][0]= 'X';
			tab.jogada=JogadaValida;
		}else if( tab.matriz[0][0]== 'O' && tab.matriz[1][0]==' '){
			tab.matriz[1][0]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[1][1]== 'O' && tab.matriz[0][2]== ' '){
			tab.matriz[0][2]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[0][2]== 'O' && tab.matriz[1][1]== ' '){
			tab.matriz[1][1]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[2][1]== 'O' && tab.matriz[2][2]== ' ' ){
			tab.matriz[2][2]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[2][2]== 'O' && tab.matriz[2][1]== ' '){
			tab.matriz[2][1]= 'X';
			tab.jogada=JogadaValida;
		}else{
			do{
				do
				{
					posicao=rand();
				} while (posicao<0 ||posicao>2);

				do
				{
					posicao_aux=rand();
				} while (posicao_aux<0 ||posicao_aux>2);
			
				if(tab.matriz[posicao][posicao_aux]== ' '){
					tab.matriz[posicao][posicao_aux]= 'X';
					tab.jogada=JogadaValida;
				}else
				{
					tab.jogada=	JogadaInvalida;
				}
			}while(tab.jogada!= JogadaValida);
		}
	}else if(posicao==2){
		if( tab.matriz[2][0]== 'O' && tab.matriz[2][2]==' '){
			tab.matriz[2][2]= 'X';
			tab.jogada=JogadaValida;
		}else if( tab.matriz[2][2]== 'O' && tab.matriz[2][0]==' '){
			tab.matriz[2][0]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[1][1]== 'O' && tab.matriz[0][1]== ' '){
			tab.matriz[0][1]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[0][1]== 'O' && tab.matriz[1][1]== ' '){
			tab.matriz[1][1]= 'X';
			tab.jogada=JogadaValida;
		}else{
			do{
				do
				{
					posicao=rand();
				} while (posicao<0 ||posicao>2);

				do
				{
					posicao_aux=rand();
				} while (posicao_aux<0 ||posicao_aux>2);
			
				if(tab.matriz[posicao][posicao_aux]== ' '){
					tab.matriz[posicao][posicao_aux]= 'X';
					tab.jogada=JogadaValida;
				}else
				{
					tab.jogada=	JogadaInvalida;
				}
			}while(tab.jogada!= JogadaValida);
		}
	}else if(posicao==3){
		if( tab.matriz[2][0]== 'O' && tab.matriz[2][1]==' '){
			tab.matriz[2][1]= 'X';
			tab.jogada=JogadaValida;
		}else if( tab.matriz[2][1]== 'O' && tab.matriz[2][0]==' '){
			tab.matriz[2][0]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[1][1]== 'O' && tab.matriz[0][0]== ' '){
			tab.matriz[0][0]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[0][0]== 'O' && tab.matriz[1][1]== ' '){
			tab.matriz[1][1]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[1][2]== 'O' && tab.matriz[0][2]== ' ' ){
			tab.matriz[0][2]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[0][2]== 'O' && tab.matriz[1][2]== ' '){
			tab.matriz[1][2]= 'X';
			tab.jogada=JogadaValida;
		}else{
			do{
				do
				{
					posicao=rand();
				} while (posicao<0 ||posicao>2);

				do
				{
					posicao_aux=rand();
				} while (posicao_aux<0 ||posicao_aux>2);
			
				if(tab.matriz[posicao][posicao_aux]== ' '){
					tab.matriz[posicao][posicao_aux]= 'X';
					tab.jogada=JogadaValida;
				}else
				{
					tab.jogada=	JogadaInvalida;
				}
			}while(tab.jogada!= JogadaValida);
		}
	}else if(posicao==4){
		if( tab.matriz[0][0]== 'O' && tab.matriz[2][0]==' '){
				tab.matriz[2][0]= 'X';
				tab.jogada=JogadaValida;
			}else if( tab.matriz[2][0]== 'O' && tab.matriz[0][0]==' '){
				tab.matriz[0][0]= 'X';
				tab.jogada=JogadaValida;
			}else if(tab.matriz[1][1]== 'O' && tab.matriz[1][2]== ' '){
				tab.matriz[1][2]= 'X';
				tab.jogada=JogadaValida;
			}else if(tab.matriz[1][2]== 'O' && tab.matriz[1][1]== ' '){
				tab.matriz[1][1]= 'X';
				tab.jogada=JogadaValida;
			}else{
				do{
					do
					{
						posicao=rand();
					} while (posicao<0 ||posicao>2);

					do
					{
						posicao_aux=rand();
					} while (posicao_aux<0 ||posicao_aux>2);
			
					if(tab.matriz[posicao][posicao_aux]== ' '){
						tab.matriz[posicao][posicao_aux]= 'X';
						tab.jogada=JogadaValida;
					}else
					{
						tab.jogada=	JogadaInvalida;
					}
				}while(tab.jogada!= JogadaValida);
			}
	}else if(posicao==5){
		if( tab.matriz[0][0]== 'O' && tab.matriz[2][2]==' '){
			tab.matriz[2][2]= 'X';
			tab.jogada=JogadaValida;
		}else if( tab.matriz[2][2]== 'O' && tab.matriz[0][0]==' '){
			tab.matriz[0][0]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[0][1]== 'O' && tab.matriz[2][1]== ' '){
			tab.matriz[2][1]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[2][1]== 'O' && tab.matriz[0][1]== ' '){
			tab.matriz[0][1]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[0][2]== 'O' && tab.matriz[2][0]== ' ' ){
			tab.matriz[2][0]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[2][0]== 'O' && tab.matriz[0][2]== ' '){
			tab.matriz[0][2]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[1][0]== 'O' && tab.matriz[1][2]== ' '){
			tab.matriz[1][2]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[1][2]== 'O' && tab.matriz[1][0]== ' '){
			tab.matriz[1][0]= 'X';
			tab.jogada=JogadaValida;
		}else{
			do{
				do
				{
					posicao=rand();
				} while (posicao<0 ||posicao>2);

				do
				{
					posicao_aux=rand();
				} while (posicao_aux<0 ||posicao_aux>2);
			
				if(tab.matriz[posicao][posicao_aux]== ' '){
					tab.matriz[posicao][posicao_aux]= 'X';
					tab.jogada=JogadaValida;
				}else
				{
					tab.jogada=	JogadaInvalida;
				}
			}while(tab.jogada!= JogadaValida);
		}
	}else if(posicao==6){
		if( tab.matriz[0][2]== 'O' && tab.matriz[2][2]==' '){
			tab.matriz[2][2]= 'X';
			tab.jogada=JogadaValida;
		}else if( tab.matriz[2][2]== 'O' && tab.matriz[0][2]==' '){
			tab.matriz[1][0]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[1][1]== 'O' && tab.matriz[1][0]== ' '){
			tab.matriz[1][0]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[1][0]== 'O' && tab.matriz[1][1]== ' '){
			tab.matriz[1][1]= 'X';
			tab.jogada=JogadaValida;
		}else{
			do{
				do
				{
					posicao=rand();
				} while (posicao<0 ||posicao>2);

				do
				{
					posicao_aux=rand();
				} while (posicao_aux<0 ||posicao_aux>2);
			
				if(tab.matriz[posicao][posicao_aux]== ' '){
					tab.matriz[posicao][posicao_aux]= 'X';
					tab.jogada=JogadaValida;
				}else
				{
					tab.jogada=	JogadaInvalida;
				}
			}while(tab.jogada!= JogadaValida);
		}
	}else if(posicao==7){
	if( tab.matriz[1][0]== 'O' && tab.matriz[2][0]==' '){
			tab.matriz[2][0]= 'X';
			tab.jogada=JogadaValida;
		}else if( tab.matriz[2][0]== 'O' && tab.matriz[1][0]==' '){
			tab.matriz[1][0]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[1][1]== 'O' && tab.matriz[2][2]== ' '){
			tab.matriz[2][2]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[2][2]== 'O' && tab.matriz[1][1]== ' '){
			tab.matriz[1][1]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[0][1]== 'O' && tab.matriz[0][2]== ' ' ){
			tab.matriz[0][2]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[0][2]== 'O' && tab.matriz[0][1]== ' '){
			tab.matriz[0][1]= 'X';
			tab.jogada=JogadaValida;
		}else{
			do{
				do
				{
					posicao=rand();
				} while (posicao<0 ||posicao>2);

				do
				{
					posicao_aux=rand();
				} while (posicao_aux<0 ||posicao_aux>2);
			
				if(tab.matriz[posicao][posicao_aux]== ' '){
					tab.matriz[posicao][posicao_aux]= 'X';
					tab.jogada=JogadaValida;
				}else
				{
					tab.jogada=	JogadaInvalida;
				}
			}while(tab.jogada!= JogadaValida);
		}

	}else if(posicao==8){
		if( tab.matriz[0][0]== 'O' && tab.matriz[0][2]==' '){
			tab.matriz[0][2]= 'X';
			tab.jogada=JogadaValida;
		}else if( tab.matriz[0][2]== 'O' && tab.matriz[0][0]==' '){
			tab.matriz[0][0]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[1][1]== 'O' && tab.matriz[2][1]== ' '){
			tab.matriz[2][1]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[2][1]== 'O' && tab.matriz[1][1]== ' '){
			tab.matriz[1][1]= 'X';
			tab.jogada=JogadaValida;
		}else{
			do{
				do
				{
					posicao=rand();
				} while (posicao<0 ||posicao>2);

				do
				{
					posicao_aux=rand();
				} while (posicao_aux<0 ||posicao_aux>2);
			
				if(tab.matriz[posicao][posicao_aux]== ' '){
					tab.matriz[posicao][posicao_aux]= 'X';
					tab.jogada=JogadaValida;
				}else
				{
					tab.jogada=	JogadaInvalida;
				}
			}while(tab.jogada!= JogadaValida);
		}
	}else if(posicao==9){
		if( tab.matriz[0][0]== 'O' && tab.matriz[0][1]==' '){
			tab.matriz[0][1]= 'X';
			tab.jogada=JogadaValida;
		}else if( tab.matriz[0][1]== 'O' && tab.matriz[0][0]==' '){
			tab.matriz[0][0]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[1][1]== 'O' && tab.matriz[2][0]== ' '){
			tab.matriz[2][0]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[2][0]== 'O' && tab.matriz[1][1]== ' '){
			tab.matriz[1][1]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[1][2]== 'O' && tab.matriz[2][2]== ' ' ){
			tab.matriz[2][2]= 'X';
			tab.jogada=JogadaValida;
		}else if(tab.matriz[2][2]== 'O' && tab.matriz[1][2]== ' '){
			tab.matriz[1][2]= 'X';
			tab.jogada=JogadaValida;
		}else{
			do{
				do
				{				
					do
					{
						posicao=rand();
					} while (posicao<0 ||posicao>2 );

					do
					{
						posicao_aux=rand();
					} while (posicao_aux<0 ||posicao_aux>2);
				
				} while( (posicao%2==0 && posicao_aux%2!=0 )||(posicao%2!=0 && posicao_aux==0 ));
				if(tab.matriz[posicao][posicao_aux]== ' '){
					tab.matriz[posicao][posicao_aux]= 'X';
					tab.jogada=JogadaValida;
				}else
				{
					tab.jogada=	JogadaInvalida;
				}
			}while(tab.jogada!= JogadaValida);
		}
	}
	return tab;
}


int main(){
	TABULEIRO tab  ;
	int volta=0;
	int i,x,j,game_over,posicao=2,escolhe_jogador;
	char op, op_novo_jogo,op_nivel;
	int computador=0;
	char jogador1[TAM],jogador2[TAM];

	for ( x = 0; x < 3; x++)
	{
		for (j = 0; j < 3; j++)
		{
			tab.matriz[x][j]=' ';
		}
	}

	do{
		volta=0;
		system("cls");
		tela_inicial();

		fflush(stdin); scanf("%c", &op);
		
		switch(op){
		
			case '0': break;
			case '1':{
				do{
					system("cls");
					tela_novo_jogo();
					fflush(stdin); scanf("%c",&op_novo_jogo );
				
					switch(op_novo_jogo ){
				
						case '0': break;
						case '1':{
							tab=inicar_jogo(tab);
							system("cls");
							printf("Digite o nome do Jogador: ");
							fflush(stdin);gets(jogador1);
							printf("Digite o nome do outro Jogador: ");
							fflush(stdin);gets(jogador2);
							escolhe_jogador=rand(); // se for par joga primeiro
							
							do
							{
								system("cls");
								tela(tab);
								game_over=verifica_ganhador(tab);
								if (game_over==VitoriaPlayIO)
								{
									if(escolhe_jogador%2==0){
										printf("\n\nVitoria do %s \n\n",jogador1);
									}else{
										printf("\n\nVitoria do %s \n\n",jogador2);
									}
									system("pause");
									volta=1; 
									break;
									
								}else if (game_over==VitoriaPlayIIX)
								{
									if(escolhe_jogador%2!=0){
										printf("\n\nVitoria do %s \n\n",jogador1);
									}else{
										printf("\n\nVitoria do %s \n\n",jogador2);
									}
									
									system("pause");
									volta=1; 
									break;
								}else if(game_over==EMPATE){
									system("cls");
									tela(tab);
								
									printf("\n\nEMPATE\n\n");
									system("pause");
									 volta=1;
									break;
								}
								do{
									if(escolhe_jogador%2==0){
										printf("Digite a posicao  %s :\n\n",jogador1);
									}else{
										printf("Digite a posicao  %s  \n\n",jogador2);
									}
									
									fflush(stdin);scanf("%d",&posicao);
									tab=jogada_play_1(posicao,tab);
									game_over=verifica_ganhador(tab);
									if (tab.jogada==JogadaInvalida)
									{
										printf("\n\n JOGADA INVALIDA. TENTE NOVAMENTE\n");
									}
								}while(tab.jogada == JogadaInvalida);
								if (game_over==VitoriaPlayIO)
								{
									continue;
								}else if(game_over==EMPATE){
									system("cls");
									tela(tab);
								
									printf("\n\nEMPATE\n\n");
									system("pause");
									 volta=1;
									break;
								}
								system("cls");
								tela(tab);
								do{
									if(escolhe_jogador%2!=0){
										printf("Digite a posicao  %s :\n\n",jogador1);
									}else{
										printf("Digite a posicao  %s  \n\n",jogador2);
									}
									
									fflush(stdin);scanf("%d",&posicao);
									tab=jogada_play_2(posicao,tab);
									game_over=verifica_ganhador(tab);
									if (tab.jogada==JogadaInvalida)
									{
										printf("\n\n JOGADA INVALIDA. TENTE NOVAMENTE\n");
									}
									
								}while (tab.jogada == JogadaInvalida);
								
								if (game_over==VitoriaPlayIIX)
								{
										continue;
								}else if(game_over==EMPATE){
									system("cls");
									tela(tab);
								
									printf("\n\nEMPATE\n\n");
									system("pause");
									 volta=1;
									break;
								}
							} while (game_over!=VitoriaPlayIO ||game_over!=VitoriaPlayIIX || game_over!=EMPATE);
							
						
						}break;
						case '2':{
							do
							{
								system("cls");
								tela_de_nivel();
								fflush(stdin);scanf("%c",&op_nivel);
								switch (op_nivel)
								{
								case '1':{
									
								    tab=inicar_jogo(tab);
									system("cls");
									printf("Digite seu nome: ");
									fflush(stdin);gets(jogador1);
									escolhe_jogador=rand(); // se for par joga primeiro
							
									do
									{
										system("cls");
										tela(tab);
								
										game_over=verifica_ganhador(tab);
										if (game_over==VitoriaPlayIO)
										{
											
											printf("\n\nVitoria do %s \n\n",jogador1);	
											system("pause");
											 volta=1;
											break;
										}
										
										if (game_over==VitoriaPlayIIX)
										{
											printf("\n\nVitoria do Computador \n\n");
											system("pause");
											 volta=1;
											break;
										}
										
										if(game_over==EMPATE){
											system("cls");
											tela(tab);
								
											printf("\n\nEMPATE\n\n");
											system("pause");
											 volta=1;
											break;
										}

										if(escolhe_jogador%2==0){
										
											do{
												printf("Digite a posicao %s: ",jogador1);
												fflush(stdin);scanf("%d",&posicao);
												tab=jogada_play_1(posicao,tab);
												game_over=verifica_ganhador(tab);
												if (tab.jogada==JogadaInvalida)
												{
													printf("\n\n JOGADA INVALIDA. TENTE NOVAMENTE\n");
												}
											}while(tab.jogada == JogadaInvalida);								
										}
										
										if (game_over==VitoriaPlayIO)
										{
											continue;
										}
										if(game_over==EMPATE){
											system("cls");
											tela(tab);
								
											printf("\n\nEMPATE\n\n");
											system("pause");
											 volta=1;
											break;
										}

										if(escolhe_jogador%2==0){
											do{
												do{
													computador=rand();
												}while (computador<1 || computador>9);

												tab=jogada_play_2(computador,tab);
												game_over=verifica_ganhador(tab);
											}while (tab.jogada == JogadaInvalida);												
										}
										
										if (game_over==VitoriaPlayIIX)
										{
											continue;
										}
										if(game_over==EMPATE){
											system("cls");
											tela(tab);
								
											printf("\n\nEMPATE\n\n");
											system("pause");
											 volta=1;
											break;
										}
										
										if(escolhe_jogador%2!=0){
											
											do{
												do{
													computador=rand();
												}while (computador<1 || computador>9);

												tab=jogada_play_2(computador,tab);
												game_over=verifica_ganhador(tab);
											}while (tab.jogada == JogadaInvalida);
								
										}
									
										if (game_over==VitoriaPlayIIX)
										{
											continue;
										}
										if(game_over==EMPATE){
											system("cls");
											tela(tab);
								
											printf("\n\nEMPATE\n\n");
											system("pause");
											 volta=1;
											break;
										}

										system("cls");
										tela(tab);

										if(escolhe_jogador%2!=0){										
											do{
												printf("Digite a posicao %s: ",jogador1);
												fflush(stdin);scanf("%d",&posicao);
												tab=jogada_play_1(posicao,tab);
												game_over=verifica_ganhador(tab);
												
												if (tab.jogada==JogadaInvalida)
												{
													printf("\n\n JOGADA INVALIDA. TENTE NOVAMENTE\n");
												}
											}while(tab.jogada == JogadaInvalida);
										}

										if (game_over==VitoriaPlayIO)
										{
											continue;
										}
										if(game_over==EMPATE){
											system("cls");
											tela(tab);
								
											printf("\n\nEMPATE\n\n");
											system("pause");
											 volta=1;
											break;
										}								
									} while (game_over!=VitoriaPlayIO ||game_over!=VitoriaPlayIIX || game_over!=EMPATE);
										 }break;

								case '2':{
									tab=inicar_jogo(tab);
									system("cls");
									printf("Digite seu nome: ");
									fflush(stdin);gets(jogador1);
									escolhe_jogador=rand(); // se for par joga primeiro
							
									do
									{
										system("cls");
										tela(tab);
								
										game_over=verifica_ganhador(tab);
										if (game_over==VitoriaPlayIO)
										{
											printf("\n\nVitoria do %s \n\n",jogador1);
											system("pause");
											 volta=1;
											break;
										}										
										if (game_over==VitoriaPlayIIX)
										{
											printf("\n\nVitoria do Computador\n\n");
											system("pause");
											 volta=1;
											break;
										}										
										if(game_over==EMPATE){
											system("cls");
											tela(tab);
								
											printf("\n\nEMPATE\n\n");
											system("pause");
											 volta=1;
											break;
										}
										if(escolhe_jogador%2==0){										
											do{
												printf("Digite a posicao %s: ",jogador1);
												fflush(stdin);scanf("%d",&posicao);
												tab=jogada_play_1(posicao,tab);
												game_over=verifica_ganhador(tab);
												if (tab.jogada==JogadaInvalida)
												{
													printf("\n\n JOGADA INVALIDA. TENTE NOVAMENTE\n");
												}
											}while(tab.jogada == JogadaInvalida);																			
										}
										game_over=verifica_ganhador(tab);
										if (game_over==VitoriaPlayIO)
										{
											continue;
										}
										if(game_over==EMPATE){
											system("cls");
											tela(tab);
								
											printf("\n\nEMPATE\n\n");
											system("pause");
											 volta=1;
											break;
										}
										if(escolhe_jogador%2==0){
									
											tab=nivel_medio(tab,posicao);
											game_over=verifica_ganhador(tab);												
										}										
										if (game_over==VitoriaPlayIIX)
										{
											continue;
										}
										if(game_over==EMPATE){
											system("cls");
											tela(tab);
								
											printf("\n\nEMPATE\n\n");
											system("pause");
											 volta=1;
											break;
										}										
										if(escolhe_jogador%2!=0){
											tab=nivel_medio(tab,posicao);
											game_over=verifica_ganhador(tab);
										}
									
										if (game_over==VitoriaPlayIIX)
										{
											continue;
										}
										if(game_over==EMPATE){
											system("cls");
											tela(tab);
								
											printf("\n\nEMPATE\n\n");
											system("pause");
											 volta=1;
											break;
										}
										system("cls");
										tela(tab);

										if(escolhe_jogador%2!=0){										
											do{
												printf("Digite a posicao %s: ",jogador1);
												fflush(stdin);scanf("%d",&posicao);
												tab=jogada_play_1(posicao,tab);
												game_over=verifica_ganhador(tab);
												
												if (tab.jogada==JogadaInvalida)
												{
													printf("\n\n JOGADA INVALIDA. TENTE NOVAMENTE\n");
												}
											}while(tab.jogada == JogadaInvalida);
										}
										if (game_over==VitoriaPlayIO)
										{
											continue;
										}
										if(game_over==EMPATE){
											system("cls");
											tela(tab);
								
											printf("\n\nEMPATE\n\n");
											 volta=1;
											system("pause");
											break;
										}								
									} while (game_over!=VitoriaPlayIO ||game_over!=VitoriaPlayIIX || game_over!=EMPATE);
										 }break;
								case '3':{
									tab=inicar_jogo(tab);
									system("cls");
									printf("Digite seu nome: ");
									fflush(stdin);gets(jogador1);
									escolhe_jogador=rand(); // se for par joga primeiro
							
									do
									{
										system("cls");
										tela(tab);
								
										game_over=verifica_ganhador(tab);
										if (game_over==VitoriaPlayIO)
										{
											printf("\n\nVitoria do %s \n\n",jogador1);
											system("pause");
											 volta=1;
											break;
										}
										if (game_over==VitoriaPlayIIX)
										{
											printf("\n\n Vitoria do Computador \n\n");
											system("pause");
											 volta=1;
											break;
										}
										if(game_over==EMPATE){
											system("cls");
											tela(tab);
								
											printf("\n\nEMPATE\n\n");
											system("pause");
											 volta=1;
											break;
										}
										if(escolhe_jogador%2==0){										
											do{
												printf("Digite a posicao %s: ",jogador1);
												fflush(stdin);scanf("%d",&posicao);
												tab=jogada_play_1(posicao,tab);
												game_over=verifica_ganhador(tab);
												if (tab.jogada==JogadaInvalida)
												{
													printf("\n\n JOGADA INVALIDA. TENTE NOVAMENTE\n");
												}
											}while(tab.jogada == JogadaInvalida);
										}
										game_over=verifica_ganhador(tab);
										if (game_over==VitoriaPlayIO)
										{
											continue;
										}
										if(game_over==EMPATE){
											system("cls");
											tela(tab);
								
											printf("\n\nEMPATE\n\n");
											system("pause");
											 volta=1;
											break;
										}
										if(escolhe_jogador%2==0)
										{
											tab=nivel_dificil(tab,posicao);
											game_over=verifica_ganhador(tab);												
										}										
										if (game_over==VitoriaPlayIIX)
										{
											continue;
										}
										if(game_over==EMPATE){
											system("cls");
											tela(tab);
								
											printf("\n\nEMPATE\n\n");
											system("pause");
											 volta=1;
											break;
										}										
										if(escolhe_jogador%2!=0){
											tab=nivel_dificil(tab,posicao);
											game_over=verifica_ganhador(tab);
										}									
										if (game_over==VitoriaPlayIIX)
										{
											continue;
										}
										if(game_over==EMPATE){
											system("cls");
											tela(tab);
								
											printf("\n\nEMPATE\n\n");
											system("pause");
											 volta=1;
											break;
										}
										system("cls");
										tela(tab);

										if(escolhe_jogador%2!=0){										
											do{
												printf("Digite a posicao %s: ",jogador1);
												fflush(stdin);scanf("%d",&posicao);
												tab=jogada_play_1(posicao,tab);
												game_over=verifica_ganhador(tab);
												
												if (tab.jogada==JogadaInvalida)
												{
													printf("\n\n JOGADA INVALIDA. TENTE NOVAMENTE\n");
												}
											}while(tab.jogada == JogadaInvalida);
										}
										game_over=verifica_ganhador(tab);
										if (game_over==VitoriaPlayIO)
										{
											continue;
										}
										if(game_over==EMPATE){
											system("cls");
											tela(tab);
								
											printf("\n\nEMPATE\n\n");
											system("pause");
											 volta=1;
											break;
										}								
									} while (game_over!=VitoriaPlayIO ||game_over!=VitoriaPlayIIX || game_over!=EMPATE);										 
										 }break;
								case '0':{}break;

								default:
									break;
								}
								if (volta==1)
								{
									break;
								}
							} while (op_nivel!='0');
						}break; 
					}
					if (volta==1)
					{
						break;
					}
				}while(op_novo_jogo !='0');
			}break;
		}
	}while(op!='0');
		
	system("pause");
	return 0;
}
