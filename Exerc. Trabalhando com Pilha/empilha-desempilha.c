#include <stdio.h>
#include <stdlib.h>
#define tamanho 8

typedef struct tipo_pilha{
	int dados[tamanho];
	int topo;
	int inicio;
	
}tipo_pilha;


tipo_pilha pilha1;
tipo_pilha pilha2;


void empilha (int elemento, tipo_pilha *p){
	if(p->topo == tamanho){
		printf("\n pilha cheia!!! \n");
		system("pause");
	}else {
		
		p->dados[p->topo] = elemento;
		p->topo++;
	}
		
}


int desempilha(tipo_pilha *p){
	
	int elemento;
	
	
	if(p->topo == p->inicio){

		printf("\n pilha vazia!!! \n");
		system("pause");
		
	}else{
		
		
		p->topo--;
		elemento = p->dados[p->topo];
		return elemento;
		
	}				
}

void imprimir(tipo_pilha *p){
	
	int i;
	printf("\n \n ");
	
	for(i=0; i<tamanho;i++){
		
		printf("%d ", p->dados[i]);
		
	}
			
}

int main(){
	pilha1.inicio =0;
	pilha1.topo = 0;

	pilha2.inicio = 0;
	pilha2.topo = 0;
	
	int aux ;
		
	empilha(1, &pilha1);
	empilha(9, &pilha1);
	empilha(0, &pilha1);
	empilha(2, &pilha1);
	empilha(4, &pilha1);
	empilha(4, &pilha1);
	empilha(1, &pilha1);
	empilha(5, &pilha1);
		
	int i;
	for(i=0; i<tamanho; i++){
	 aux = desempilha(&pilha1);
	 empilha(aux, &pilha2);
	}
		
	imprimir(&pilha1);
	imprimir(&pilha2);
	
return 0;	
}





