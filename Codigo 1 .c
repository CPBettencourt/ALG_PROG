//Código #1 solo
#include <stdio.h>
#include <stdlib.h>

struct BOLAO{
	char selA[100], selB[100], apostador[100];
	int golsA, golsB, resultA, resultB;
	float valor_aposta;
};

typedef struct APOSTADOR{
	char nome[100];
	int zap[9], saldo;
};

int menu();
int cadastrar_apostador();
int cadastrar_aposta();
int resultado_partida();
int checar_bolao();
int checar_apostador();


void main(){
	int opc;
	do{
		opc = menu();
		switch(opc){
			case 1: //CADASTRAR APOSTADOR
				cadastrar_apostador();
				break;
			case 2: //CADASTRAR APOSTA
			case 3: //INSERIR RESULTADO DA PARTIDA
			case 4: //CHECAR ESTADO ATUAL DO BOLAO
			case 5: //CHECAR APOSTADOR
			case 6: //SAIR
				opc = 100;	
				printf("\n\tFim do programa");
				break;
			default: //OPÇÃO INVÁLIDA
				printf("\n\tOpcao invalida, fim do programa");
				break;
		}
	} while(opc<=6 && opc>=1);
}

int menu(){
	int opc;
	system("cls");
	printf("\n\t\t\tCADASTRO DO BOLAO\n\t1 - Cadastrar apostador\n\t2 - Cadastrar aposta \n\t3 - Inserir resultado da partida \n\t4 - Checar estado atual do bolao \n\t5 - Checar apostador \n\t6 - Sair\n\tPor favor, selecione uma opcao: ");
	scanf("%d", &opc);
	return opc;
}

int cadastrar_apostador(){
	char nome[100];
	FILE *apostadores;
	apostadores = fopen("APOSTADORES.txt", "a+");
	system("cls");
	printf("Insira o nome do apostador:  ");
	scanf("%s", &nome);
	fputs(nome, apostadores);
	return 0;
}


