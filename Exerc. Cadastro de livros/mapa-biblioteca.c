#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define TAM 5

typedef struct livro{
	int cod;
	char autor[50];
	char n_obra[50];
	char n_editora[40];


}tipo_livro;

int main(){

	setlocale(LC_ALL,"portuguese");
	tipo_livro lista[TAM];
    int i;
	int opcao=1;
     int cont=0;

		printf("--------------------------------\n");
		printf(">>>>>> Cadastro de Livros <<<<<<  \n");
		printf("--------------------------------\n");
do{
	while(opcao!=0){


	printf(">>> Menu do sistema <<<\n");
	printf("1- Inserir um novo Cadastro\n");
	printf("2- Mostrar todos Cadastros \n");
	printf("0- Encerrar\n");
	printf("\nDigite a opção escolhida : ");
	scanf("%d", &opcao);
	fflush(stdin);
	printf("\n");


switch(opcao){

	case 1 :
		cont= cont+1;
	printf("---- Inserir um novo Cadastro ------ \n");
	if(cont>=2){
		system("cls");
		printf("\n Sistema de cadastro lotado. Não é possível armazenar mais informações!\n");
		printf("\n");


	}else{

		for(i=0;i<TAM; i++){


			lista[i].cod= i+1;

			printf("\nInsira o Nome dos Autores da Obra : ");
			gets(lista[i].autor);
			fflush(stdin);
			printf("Insira o Nome da Obra : ");
			gets(lista[i].n_obra);
			fflush(stdin);
			printf("Insira o Nome da Editora : ");
			gets(lista[i].n_editora);
			fflush(stdin);
			system("cls");
			printf("--------------------------------\n");
			printf(">>>>>> Cadastro de Livros <<<<<<  \n");
			printf("--------------------------------\n");


	}
		}
	break;
	case 2 :
		
		printf("--- Mostrar todos Cadastros ------ \n");
		if(cont==0){
			system("cls");
			printf("\n Lista Vazia!\n\n");

		}else{	
		system("cls");

	for(i=0;i<TAM;i++){

		printf("\n\n Codigo : %d ",lista[i].cod);
		printf("\n Nome Autores :%s ",lista[i].autor);
		printf("\n Nome da Obra :%s ",lista[i].n_obra);
		printf("\n Nome da Editora :%s \n\n ",lista[i].n_editora);

		}
	
		}
	break;

    default :
        system("cls");
        if(opcao>2){
            printf("\n Erro: Opção Invalida!\n\n");
        }


    break;

	}

		}
	}
	while(opcao=0);


return 0;
}

